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
    sf::Sprite shaft[15],elev;
    sf::Texture elevFull,elevEmpty,shaftT;
    sf::Clock animationTime;
};


#endif // MOVEMENT_HPP_INCLUDED
