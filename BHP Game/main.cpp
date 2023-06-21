#include <SFML/Graphics.hpp>
#include "movement.hpp"
#include "miner.hpp"

int main()
{
    sf::RenderWindow window(sf::VideoMode(1920, 1080), "BHP Game");
    sf::RectangleShape tunnel(sf::Vector2f(1920,400));
    tunnel.setPosition(0,300);
    tunnel.setFillColor(sf::Color(97,97,97));
    miner Miner(window);
    entertaceAnimation animation(window);
    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }
        window.clear(sf::Color(43,43,42));
        if(!animation.anime)
            window.draw(tunnel);
        if(animation.anime)
            animation.Update();
        Miner.update(animation.anime);
        window.display();
    }

    return 0;
}
