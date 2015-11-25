#include "cl_figures.h"
#include <vector>

//@{
//! Default Construktor
cl_figures::cl_figures()
{
    m_centerPoint[0]=5.0;
    m_centerPoint[1]=5.0;
 }
//! Parameter Construktor (Geometrisches Objekt)
/*! Ein geometrisches Objekt wird initialisiert durch Angabe
 * einer Position
     * @param[in] posX (float) Position auf x-Achse
     * @param[in] posY (float) Position auf y-Achse
     * @param[in] posZ /float) Position auf z-Achse */
cl_figures::cl_figures(float posX, float posY, float posZ)
{
    moveTo(posX, posY, posZ);
}
//@}
//! (void) setPosX, setPosY, setPosZ
/*! Zuweisung der Position der x bzw. y-Achse
 *  @param[in] m_pos (vector<float>) Position
 *  @param[in] posX (float) zugewiesener Wert
 *  @param[in] posY (float) zugewiesener Wert */
void cl_figures::setPosX(float posX)
{
    if(posX>0 && posX<50)
        m_centerPoint[0]=posX;
}
void cl_figures::setPosY(float posY)
{
    /** Rahmenbedingungen? */
    if(posY>0 && posY<50)
        m_centerPoint[1]=posY;
}
void cl_figures::setPosZ(float posZ)
{
    if(posZ>0 && posZ<50)
        m_centerPoint[2]=posZ;
}
//@{
//! (void) moveTo
/*! Veraendert die Position des Objekts
 *  @see setPosX()  @see setPosY()  @see setPosZ()
 *  @param[in] posX (float) zugewiesener Wert
 *  @param[in] posY (float) zugewiesener Wert
 *  @param[in] posZ (float) zugewiesener Wert */
void cl_figures::moveTo(float posX, float posY, float posZ)
{
    setPosX(posX);
    setPosY(posY);
    setPosY(posY);
}
//@}
//@{
//! (float) getX, getY, getZ
/*! Ermittelt die Werte für die Position (x,y,z)
 *  @param[out] m_pos Position
 *  @returns m_pos[0] @returns m_pos[1] @returns m_pos[2]  */
float cl_figures::getPosX() const
{
    return m_pos[0];
}
float cl_figures::getPosY() const
{
    return m_pos[1];
}
float cl_figures::getPosZ() const
{
    return m_pos[2];
}
//@}

