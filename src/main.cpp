#include <SFML/Graphics.hpp>
#include "helpful.cpp"

int main()
{
    auto window = RenderWindow(VideoMode({1920u, 1080u}), "CMake SFML Project");
    window.setFramerateLimit(144);
    RectangleShape sq = RectangleShape();
    sq.setSize(Vector2f(100, 100));
    sq.setOrigin(sq.getSize()/2);
    sq.setPosition((Vector2f(window.getSize()))/2);
    sq.setFillColor(Color(255, 0 , 0));
    auto vec = Vector2f(100, 100);
    vec = vec/2;

    while (window.isOpen())
    {
        while (const std::optional event = window.pollEvent())
        {
            if (event->is<sf::Event::Closed>())
            {
                window.close();
            }
        }

        window.clear();
        window.draw(sq);
        window.display();
    }
}
