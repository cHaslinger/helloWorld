#ifndef CL_FIGURES_H
#define CL_FIGURES_H
#include <iostream>
#include <vector>

class cl_figures
{
public:
    //@{
    //! Default Constructor
    cl_figures();
    //! Parameter Construktor (Geometrisches Objekt)
    /*! Ein geometrisches Objekt wird initialisiert durch Angabe
     * einer neuen Position
     * @param[in] posX (float) Position auf x-Achse
     * @param[in] posY (float) Position auf y-Achse
     * @param[in] posZ /float) Position auf z-Achse */
    cl_figures(float posX, float posY, float posZ);
    //@}
    //@{
    //! (void) setPosX, setPosY, setPosZ
    /*! Zuweisung der Position der x-, y- bzw. z-Achse
     *  @param m_pos (vector<float>) Position
     *  @param[in] posX (float) zugewiesener Wert
     *  @param[in] posY (float) zugewiesener Wert
     *  @param[in] posZ (float) zugewiesener Wert */
    void setPosX(float posX);
    void setPosY(float posY);
    void setPosZ(float posZ);
    //@}
    //! (void) moveTo
    /*! Veraendert die Position des Objekts
     *  @see setPosX()  @see setPosY()  @see setPosZ()
     *  @param[in] posX (float) zugewiesener Wert
     *  @param[in] posY (float) zugewiesener Wert
     *  @param[in] posZ (float) zugewiesener Wert */
    void moveTo(float posX, float posY, float posZ);
    //@}
    //@{
    //! (float) getX, getY, getZ
    /*! Ermittelt die Werte für die Position (x,y,z)
     *  @param[out] m_pos Position
     *  @returns m_pos[0] @returns m_pos[1] @returns m_pos[2]  */
    float getPosX() const;
    float getPosY() const;
    float getPosZ() const;
    //@}


protected:
    //! @param[in] m_centerPoint
    std::vector <float> m_centerPoint;
    //! @param[in] m_pos (vector<float>) Position des Kreises
    std::vector <float> m_pos;
};

#endif // CL_FIGURES_H