#include <SFML/Graphics.hpp>

using namespace sf;

/*
this file will be used to define functions that are commonly used for calculation when needed.
examples include:
*/

template <typename T, typename W>
Vector2<T> operator/(Vector2<T>& l, W r) {
    return {l.x / static_cast<double>(r), l.y / static_cast<double>(r)};
}

template <typename T, typename W>
Vector2<T> operator/(Vector2<T>&& l, W r) {
    return {l.x / static_cast<double>(r), l.y / static_cast<double>(r)};
}

// For lvalue references (Vector2<T>&)
template <typename T, typename W>
void operator/=(Vector2<T>& l, W r) {
    l.x = (T) (l.x/static_cast<double>(r));
    l.y = (T) (l.y/static_cast<double>(r));
}
