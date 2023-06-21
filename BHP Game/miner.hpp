#ifndef MINER_HPP_INCLUDED
#define MINER_HPP_INCLUDED

#include <SFML/Graphics.hpp>

class miner
{
private:
    sf::RenderWindow &window;
    sf::Texture texture[3];
    sf::Sprite sprite;
    sf::Clock clock;
    short prev;
public:
    miner(sf::RenderWindow &window1):window(window1)
    {
        texture[0].loadFromFile("gornik1.png");
        texture[1].loadFromFile("gornik2.png");
        texture[2].loadFromFile("gornik3.png");
        sprite.setTexture(texture[0]);
        prev=0;
        sprite.setPosition(180,430);
        sprite.setScale(0.6,0.6);
    }
    void update(bool show)
    {
        if(sf::Keyboard::isKeyPressed(sf::Keyboard::D) || sf::Keyboard::isKeyPressed(sf::Keyboard::A))
        {
            if(clock.getElapsedTime().asSeconds()>0.1)
            {
                prev++;
                clock.restart();
            }

            if(prev>2)
                prev=0;
            sprite.setTexture(texture[prev]);
        }
        if(!show)
        window.draw(sprite);
    }
};

#endif // MINER_HPP_INCLUDED
