#include <SFML/Graphics.hpp>
using namespace sf;

/*
this file will be used to define functions that are commonly used for calculation when needed.
examples include:
*/

//Single operators
template <typename T, typename W>
Vector2<T> operator/(Vector2<T>& l, W r) {
    return {l.x / r, l.y / r};
}

template <typename T, typename W>
Vector2<T> operator/(Vector2<T>&& l, W r) {
    return {l.x / r, l.y / r};
}

template <typename T, typename W>
Vector2<T> operator*(Vector2<T>& l, W r) {
    return {l.x * r, l.y * r};
}

template <typename T, typename W>
Vector2<T> operator*(Vector2<T>&& l, W r) {
    return {l.x * r, l.y * r};
}

template <typename T, typename W>
Vector2<T> operator+(Vector2<T>& l, W r) {
    return {l.x + r, l.y + r};
}

template <typename T, typename W>
Vector2<T> operator+(Vector2<T>&& l, W r) {
    return {l.x + r, l.y + r};
}

template <typename T, typename W>
Vector2<T> operator-(Vector2<T>& l, W r) {
    return {l.x - r, l.y - r};
}

template <typename T, typename W>
Vector2<T> operator-(Vector2<T>&& l, W r) {
    return {l.x - r, l.y - r};
}



//Compound operators
template <typename T, typename W>
void operator/=(Vector2<T>& l, W r) {
    l.x = static_cast<T>(l.x / r);
    l.y = static_cast<T>(l.y / r);
}

template <typename T, typename W>
void operator*=(Vector2<T>& l, W r) {
    l.x = static_cast<T>(l.x * r);
    l.y = static_cast<T>(l.y * r);
}

template <typename T, typename W>
void operator-=(Vector2<T>& l, W r) {
    l.x = static_cast<T>(l.x - r);
    l.y = static_cast<T>(l.y - r);
}

template <typename T, typename W>
void operator+=(Vector2<T>& l, W r) {
    l.x = static_cast<T>(l.x + r);
    l.y = static_cast<T>(l.y + r);
}