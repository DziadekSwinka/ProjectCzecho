#ifndef WIERTACZKA_HPP_INCLUDED
#define WIERTACZKA_HPP_INCLUDED
#include <SFML/Graphics.hpp>

class wiertaczka
{
private:
    sf::RenderWindow &window;
    sf::Sprite wiert;
    sf::Texture txt;
public:
    wiertaczka(sf::RenderWindow &window1):window(window1)
    {
        txt.loadFromFile("Wiertlo.png");
        wiert.setTexture(txt);
        wiert.setPosition(sf::Vector2f(3000,410));
    }
    void Update()
    {
        if(true)
        {
            if(sf::Keyboard::isKeyPressed(sf::Keyboard::D))
            {
                wiert.move(-0.5,0);
            }
            if(sf::Keyboard::isKeyPressed(sf::Keyboard::A))
            {
                wiert.move(0.5,0);
            }
        }
        window.draw(wiert);
    }
};


#endif // WIERTACZKA_HPP_INCLUDED
