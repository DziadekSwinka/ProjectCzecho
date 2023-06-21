#ifndef MOVEMENT_HPP_INCLUDED
#define MOVEMENT_HPP_INCLUDED
#include<SFML/Graphics.hpp>

class entertaceAnimation
{
public:
    entertaceAnimation(sf::RenderWindow &window1);
    void Update();
    bool anime;
private:
    sf::RenderWindow &window;
    sf::Sprite shaft,elev;
    sf::Texture elevFull,elevEmpty,shaftT;
};


#endif // MOVEMENT_HPP_INCLUDED
