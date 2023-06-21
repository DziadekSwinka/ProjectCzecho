#ifndef JAJO_H_INCLUDED
#define JAJO_H_INCLUDED

struct
{
	sf::Clock TimeAsSec;
	sf::Time PrevFrameTime;
	double FrameTime ()
	{
		float Sec-PrevFrameTime .asSeconds ();
		float TimeX=600;
		double ret={l.f};
		ret-Sec*TimeX;
		return ret;
	}
}deltaTime;

#endif // JAJO_H_INCLUDED
