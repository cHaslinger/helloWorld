#include "cl_ball.h"
#include "cl_figures.h"
#include <math.h>

//! Default Konstruktor der Klasse cl_ball
/*! initialisiert einen Kreis mit den Parametern #m_posX und #m_posY */
cl_ball::cl_ball()
{
    m_centerPoint[0]=5.0;
    m_centerPoint[1]=5.0;
    m_radius=1;
}
//! Parameter Constructor (Kreis)
/*! Kreis wird initialisiert durch Mittelpunkt und Radius
     * @param[in] posX (float) Position auf x-Achse
     * @param[in] posY (float) Position auf y-Achse
     * @param[in] posZ /float) Position auf z-Achse
 * @param[in] r Radius */
cl_ball::cl_ball(float x, float y, float z, float r)
{
    cl_figures::moveTo(x,y,z);
    setRadius(r);
}
//! (void) setRadius
/*! Zuweisung des Wertes R für den Radius
 * @param[in] R (float) Radius */
void cl_ball::setRadius(float R)
{
    if(R>0 && R<50)
        m_radius=R;
}
//! (float) getRadius
/*! @param[out] m_radius Radius
 *  @returns m_radius */
float cl_ball::getRadius() const
{
    return m_radius;
}

//! (bool) isIn
/*! überprüft ob sich ein Punkt a in dem Kreis befindet
 * @return true oder false */
bool cl_ball::isInBall(std::vector <float> a) const
{
    /** Der Abstand zwischen dem Mittelpunkt \f$(x_1,y_1)\f$ und dem Punkt a \f$(a_1,a_2)\f$
     * ist \f$\sqrt{(x_2-x_1)^2+(a_2-a_1)^2}\f$. Ist dieser Abstand kleiner als der Radius,
     * liegt der Punkt a innerhalb des Kreises*/
    if((pow(pow(m_pos[0]-a[0],2)+pow(m_pos[1]-a[1],2),0.5)) <= cl_ball::m_radius )
        return true;
    else return false;
}
