# Matrix
An easier way to create multidimensional C++ arrays.

Multidimensional C++ arrays can be difficult to read, for instance: 
  std::array<std::array<... <std::array<*typename*, *dimension n*>, ...>, *dimension 2*>, *dimension 1*>;
  
Matrix uses a recursive variadic template to make this simpler; instead of writing the above, you may instead write:
  std::mtrx::matrix<*typename*, *dimension 1*, *dimension 2*, ..., *dimension n*>;
