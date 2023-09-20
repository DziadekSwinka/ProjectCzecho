#include <SFML/Graphics.hpp>
#include "movement.hpp"
#include "miner.hpp"
#include "surr.hpp"
#include "wiertaczka.hpp"
#include "zdjecia.hpp"
#include "jajo.h"

bool zjechal=false;
int main()
{
    sf::RenderWindow window(sf::VideoMode(1920, 1080), "BHP Game");
    sf::RectangleShape tunnel(sf::Vector2f(1920,400));
    surrounding surr(window);
    tunnel.setPosition(0,815);
    tunnel.setFillColor(sf::Color(97,97,97));
    miner Miner(window);
    zdj zd(window);
    entertaceAnimation animation(window);
    wiertaczka wiertlo(window);
    double deltaToAnimation=1;
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
        if(animation.anime==true)
            tunnel.setPosition(tunnel.getPosition().x,animation.Update(deltaToAnimation)+60);
        zd.Update(animation.anime);
        surr.Update(animation.anime);
        wiertlo.Update();
        Miner.update(animation.anime,wiertlo.wPojezdzie);
        window.display();
        deltaTime.PrevFrameTime=deltaTime.TimeAsSec.getElapsedTime();
        deltaToAnimation=deltaTime.FrameTime();
        deltaTime.TimeAsSec.restart();
    }

    return 0;
}
