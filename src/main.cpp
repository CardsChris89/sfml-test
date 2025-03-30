#include <SFML/Graphics.hpp>
#include "helpful.cpp"

int main()
{
    auto window = RenderWindow(VideoMode::getFullscreenModes()[0], "CMake SFML Project", Style::Default, State::Fullscreen);
    window.setFramerateLimit(144);
    RectangleShape sq = RectangleShape();
    sq.setSize(Vector2f(100, 100));
    sq.setOrigin(sq.getSize()/2);
    sq.setPosition((Vector2f(window.getSize()))/2);
    sq.setFillColor(Color(255, 0 , 0));
    auto vec = Vector2f(100, 100);
    vec /= 2;

    while (window.isOpen())
    {
        while (const std::optional event = window.pollEvent())
        {
            if (event->is<Event::Closed>())
            {
                window.close();
            }
            else if (const auto* keyPressed = event->getIf<Event::KeyPressed>()) {
                if (keyPressed->scancode == Keyboard::Scancode::Escape) {
                    window.close();
                }
            }
        }

        window.clear();
        window.draw(sq);
        window.display();
    }
}
