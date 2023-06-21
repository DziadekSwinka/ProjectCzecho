#ifndef WIERTACZKA_HPP_INCLUDED
#define WIERTACZKA_HPP_INCLUDED
#include <SFML/Graphics.hpp>
#include "plik.hpp"

class wiertaczka
{
private:
    sf::RenderWindow &window;
    sf::Sprite wiert;
    sf::Texture txt,txt1[3];
    sf::Text text;
    sf::Clock clock;
    int prev;
public:
    bool wPojezdzie;
    wiertaczka(sf::RenderWindow &window1):window(window1)
    {
        prev=0;
        txt.loadFromFile("Wiertlo.png");
        for(int i=0;i<3;i++)
            txt1[i].loadFromFile("WiertloGornik"+std::to_string(i+1)+".png");
        wiert.setTexture(txt);
        wiert.setPosition(sf::Vector2f(3000,480));
        wiert.setScale(1.3,1.3);
        text.setString("[E]-Wejdz");
        text.setFillColor(sf::Color::Red);
        wPojezdzie=false;
    }
    void Update()
    {
        if(true)
        {
            if(wiert.getPosition().x<300 && wiert.getPosition().x>0 && !wPojezdzie)
            {
                window.draw(text);
                if(sf::Keyboard::isKeyPressed(sf::Keyboard::E))
                    if(wPojezdzie)
                {
                    wiert.setTexture(txt);
                    wPojezdzie=false;
                }else{
                    wPojezdzie=true;
                    wiert.setTexture(txt1[0]);
                }
            }
             if(!wPojezdzie)
            {
                if(sf::Keyboard::isKeyPressed(sf::Keyboard::D))
                {
                    wiert.move(-0.5*deltaTime.FrameTime(),0);
                }
                if(sf::Keyboard::isKeyPressed(sf::Keyboard::A))
                {
                    wiert.move(0.5*deltaTime.FrameTime(),0);
                }
            }
            if(sf::Keyboard::isKeyPressed(sf::Keyboard::D) ||(sf::Keyboard::isKeyPressed(sf::Keyboard::A)))
                if(clock.getElapsedTime().asSeconds()<0.1 && wPojezdzie)
                {
                    prev++;
                    if(prev>2)
                        prev=0;
                    wiert.setTexture(txt1[prev]);
                }

        }
        window.draw(wiert);
    }
};


#endif // WIERTACZKA_HPP_INCLUDED
