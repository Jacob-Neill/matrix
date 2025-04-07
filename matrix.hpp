#pragma once
#include <array>

namespace std {
	namespace mtrx {
		template<typename T, size_t... sizes>
		struct Matrix;

		template<typename T, size_t... sizes>
		using matrix = typename Matrix<T, sizes...>::type;

		template<typename T, size_t size>
		struct Matrix <T, size> {
			using type = array<T, size>;
		};

		template <typename T, size_t size, size_t... sizes>
		struct Matrix <T, size, sizes...> {
			using type = array<matrix<T, sizes...>, size>;
		};

		//This can be used to make a vector version but the values still have to be known at compile time so it's kinda useless
		/*template<typename T, size_t size>
		inline matrix<T, size> make_matrix(T item = {}) {
			return vector<T>(size, item);
		}

		template<typename T, size_t size, size_t... sizes>
		inline matrix<T, size, sizes...> make_matrix(T item = {}) {
			return vector<matrix<T, sizes...>>(size, make_matrix<T, sizes...>(item));
		}*/
	}
}