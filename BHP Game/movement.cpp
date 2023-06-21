#include "movement.hpp"

entertaceAnimation::entertaceAnimation(sf::RenderWindow &window1):window(window1)
{
    elevFull.loadFromFile("winda.png");
    elevEmpty.loadFromFile("GornikWinda.png");
    shaftT.loadFromFile("Szyb.png");
    elev.setTexture(elevEmpty);
    for(int i=0;i<15;i++)
    {
        shaft[i].setTexture(shaftT);
        shaft[i].setScale(1.7,1.7);
        shaft[i].setPosition(80,i*515);
    }
    elev.setScale(0.6,0.6);
    elev.setPosition(120,340);
}
void entertaceAnimation::Update()
{
    anime=true;
    for(int i=0;i<15;i++)
    {
        shaft[i].move(0,-0.5);
        window.draw(shaft[i]);
    }
    if(animationTime.getElapsedTime().asSeconds()>10)
        anime=false;
    window.draw(elev);
}
