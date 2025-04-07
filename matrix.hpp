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
	}
}
