#ifndef MOVEMENT_HPP_INCLUDED
#define MOVEMENT_HPP_INCLUDED
#include<SFML/Graphics.hpp>
#include<SFML/Audio.hpp>

#include "jajo.h"

class entertaceAnimation
{
public:
    entertaceAnimation(sf::RenderWindow &window1);
    float Update(double delta);
    bool anime;
private:
    sf::Sound sound;
    sf::SoundBuffer sb;
    sf::Font font;
    sf::Text IntroText;
    sf::RenderWindow &window;
    sf::Sprite shaft[5],elev;
    sf::Texture elevFull,elevEmpty,shaftT;
    sf::Clock animationTime;
};


#endif // MOVEMENT_HPP_INCLUDED
