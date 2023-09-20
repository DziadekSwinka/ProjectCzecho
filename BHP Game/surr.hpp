#ifndef SURR_HPP_INCLUDED
#define SURR_HPP_INCLUDED
#include "jajo.h"

class surrounding
{
private:
    sf::RenderWindow &window;
    sf::Sprite lamp[10];
    sf::Texture Lamp;
    sf::Sprite bel[10];
    sf::Texture Bel;
public:
    surrounding(sf::RenderWindow &window1):window(window1)
    {
        Lamp.loadFromFile("lampa.png");
        for(int i=0;i<10;i++)
        {
            lamp[i].setTexture(Lamp);
            lamp[i].setPosition(i*500,3*700);
            lamp[i].setScale(0.7,0.7);
        }
        //Bel.loadFromFile("podpora.png");
        for(int i=0;i<10;i++)
        {
            bel[i].setTexture(Bel);
            bel[i].setPosition(i*1500+250,3*700);
            bel[i].setScale(0.7,0.8);
        }
    }
    void Update(bool b)
    {
        if(b)
            for(int i=0;i<10;i++)
            {
                lamp[i].move(0,-0.5*deltaTime.FrameTime());
                bel[i].move(0,-0.5*deltaTime.FrameTime());
            }
        for(int i=0;i<10;i++)
            window.draw(lamp[i]);
        for(int i=0;i<10;i++)
        {
            if(sf::Keyboard::isKeyPressed(sf::Keyboard::D))
                lamp[i].move(-0.5*deltaTime.FrameTime(),0);
            if(sf::Keyboard::isKeyPressed(sf::Keyboard::A))
                lamp[i].move(0.5*deltaTime.FrameTime(),0);
            if(lamp[i].getPosition().x<-300)
                lamp[i].setPosition(5000,lamp[i].getPosition().y);
            if(lamp[i].getPosition().x>5000)
                lamp[i].setPosition(-300,lamp[i].getPosition().y);
        for(int i=0;i<10;i++)
            window.draw(bel[i]);
        for(int i=0;i<10;i++)
        {
            if(sf::Keyboard::isKeyPressed(sf::Keyboard::D))
                bel[i].move(-0.1*deltaTime.FrameTime(),0);
            if(sf::Keyboard::isKeyPressed(sf::Keyboard::A))
                bel[i].move(0.1*deltaTime.FrameTime(),0);
            if(bel[i].getPosition().x<-300)
                bel[i].setPosition(5000,bel[i].getPosition().y);
            if(bel[i].getPosition().x>5000)
                bel[i].setPosition(-300,bel[i].getPosition().y);
        }
        }
    }
};

#endif // SURR_HPP_INCLUDED
