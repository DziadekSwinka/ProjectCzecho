#include "movement.hpp"

entertaceAnimation::entertaceAnimation(sf::RenderWindow &window1):window(window1)
{
    elevFull.loadFromFile("winda.png");
    elevEmpty.loadFromFile("winda.png");
    shaftT.loadFromFile("Szyb.png");
    shaft.setTexture(shaftT);
    elev.setTexture(elevEmpty);
    shaft.setScale(2,2);
    elev.setScale(0.8,0.8);
}
void entertaceAnimation::Update()
{
    anime=true;
    window.draw(shaft);
    window.draw(elev);
}
