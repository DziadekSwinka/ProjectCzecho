#include <SFML/Graphics.hpp>
#include "movement.hpp"
#include "miner.hpp"
#include "surr.hpp"
#include "wiertaczka.hpp"

bool zjechal=false;
int main()
{
    sf::RenderWindow window(sf::VideoMode(1920, 1080), "BHP Game");
    sf::RectangleShape tunnel(sf::Vector2f(1920,400));
    surrounding surr(window);
    tunnel.setPosition(0,815);
    tunnel.setFillColor(sf::Color(97,97,97));
    miner Miner(window);
    entertaceAnimation animation(window);
    wiertaczka wiertlo(window);
    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }
        window.clear(sf::Color(43,43,42));
        window.draw(tunnel);
        if(animation.anime)
            tunnel.setPosition(tunnel.getPosition().x,animation.Update()+60);
        surr.Update(animation.anime);
        wiertlo.Update();
        Miner.update(animation.anime);
        window.display();
    }

    return 0;
}
