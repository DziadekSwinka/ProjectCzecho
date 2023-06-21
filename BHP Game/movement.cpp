#include "movement.hpp"

entertaceAnimation::entertaceAnimation(sf::RenderWindow &window1):window(window1)
{
    font.loadFromFile("Roboto_Slab//RobotoSlab-VariableFont_wght.ttf");
    IntroText.setFont(font);
    IntroText.setString("BHP w kopalni");
    IntroText.setFillColor(sf::Color::Red);
    IntroText.setCharacterSize(80);
    IntroText.setPosition(900,400);
    elevFull.loadFromFile("winda.png");
    elevEmpty.loadFromFile("GornikWinda.png");
    shaftT.loadFromFile("Szyb.png");
    elev.setTexture(elevEmpty);
    for(int i=0;i<5;i++)
    {
        shaft[i].setTexture(shaftT);
        shaft[i].setScale(1.7,1.7);
        shaft[i].setPosition(80,i*515);
    }
    elev.setScale(0.6,0.6);
    elev.setPosition(120,340);
}
float entertaceAnimation::Update()
{
    anime=true;
    for(int i=0;i<5;i++)
    {
        if(animationTime.getElapsedTime().asSeconds()<=7)
        {
            shaft[i].move(0,-0.5);
        }else anime=false;

        window.draw(shaft[i]);
    }
    if(animationTime.getElapsedTime().asSeconds()>8)
        anime=false;
    window.draw(elev);
    if(animationTime.getElapsedTime().asSeconds()<6)
        window.draw(IntroText);
    return shaft[4].getPosition().y;
}
