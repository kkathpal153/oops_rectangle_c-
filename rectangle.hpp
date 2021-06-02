//rectangle.hpp
/* the general descripton of parameters and value

                                 W I D T H
                         _____________________________top(Point2D)
                    H   |					          |
                    E   |					          |
                    I   |					          |
                    G   |					          |
                    H   |					          |
                    T   |					          |
        bottom(Point2D) |_____________________________|
*/

#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "point2D.hpp"

class rectangle
{  
    
    private:
    
        point2D bottom , top;
        float height;
        float width;
    
    public:
     
        rectangle(float height, float width, point2D point );

        rectangle(point2D point1,point2D point2);
        
        bool rectangle_intersect(rectangle);

        bool contains_point(point2D);

};

#endif