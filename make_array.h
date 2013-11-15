//
//  make_array.h

#include <array>
#include <type_traits>
#include <initializer_list>

template <typename... T>
std::array<typename std::common_type<T...>::type, sizeof...(T)> make_array(T&&... args)
{
	return {{ std::forward<T>(args)... }};
};
