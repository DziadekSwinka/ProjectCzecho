#ifndef ZDJECIA_HPP_INCLUDED
#define ZDJECIA_HPP_INCLUDED
#include <SFML/Window.hpp>
#include "jajo.h"
class zdj
{
private:
    sf::RenderWindow &window;
    sf::Sprite sprite[10];
    sf::Texture txt[10];
public:
    zdj(sf::RenderWindow &window1):window(window1)
    {
        for(int i=0;i<10;i++)
        {
            txt[i].loadFromFile(std::to_string(i+1)+".png");
            sprite[i].setTexture(txt[i]);
            sprite[i].setPosition(1200*i+750,2550);
        }
    }
    void Update(bool b)
    {
        for(int i=0;i<10;i++)
        {
            if(sf::Keyboard::isKeyPressed(sf::Keyboard::D))
            {
                sprite[i].move(-0.5*deltaTime.FrameTime(),0);
            }
            if(sf::Keyboard::isKeyPressed(sf::Keyboard::A))
            {
                sprite[i].move(0.5*deltaTime.FrameTime(),0);
            }
        }

        if(b)
            for(int i=0;i<10;i++)
                sprite[i].move(0,-0.5*deltaTime.FrameTime());
        for(int i=0;i<10;i++)
            window.draw(sprite[i]);
    }
};

#endif // ZDJECIA_HPP_INCLUDED
