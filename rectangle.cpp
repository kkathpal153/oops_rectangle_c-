
#include "rectangle.hpp"
#include <math.h>

rectangle::rectangle(float height, float width, point2D bottom ){
    
/*
 *
 * First Parameterized constructor 
 * This makes a rectangle with point2D as the botom left coordinate 
 * and height and width respectively. After basic maths it calculates
 * value of top right coordinate.
 * 
 * @param height of type float: contains height of the rectangle
 * @param widht  of type float : contains width of the rectangle
 * @param point2D of type struct point 2d : bottom left coordinate of the rectangle
 * 
 * @return no return type
 * 
                                 Width
                         _____________________________
                    H   |					          |
                    E   |					          |
                    I   |					          |
                    G   |					          |
                    H   |					          |
                    T   |					          |
        bottom(point2D) |_____________________________|
 */
    this->height = height;
    this->width = width;

    this->bottom = bottom;

    this->top.x = bottom.x + width;
    this->top.y = bottom.y + height;

}


rectangle::rectangle(point2D bottom, point2D top ){
/*
 *
 * Second Parameterized constructor 
 * This makes a rectangle with two points bottom and top.
 * and calculate value of height and width from those points 
 * 
 * @param bottom of type struct point2D : contains coordinated of bootom left point
 * @param top of type struct point2D : contains coordinated of top right point
 * @return no return type
 * 
 * 
                         _____________________________ top(point2D)
                        |					          |
                        |					          |
                        |					          |
                        |					          |
                        |					          |
                        |					          |
        bottom(point2D) |_____________________________|
 */
    this->bottom = bottom;
    this->top = top;
    this->height = abs(bottom.y - top.y);
    this->width =  abs(bottom.x - top.x);
}

bool rectangle::contains_point(point2D point){
/*
 * Use case one :  Checking wether the given point lie inside the rectangle or not.
 * 
 * 
 * @param point of type struct point2D : contains points that need to be checked if it lie inside rectangel or not
 * @return boolean: true if point lie inside rectangle and false otherwise
 * 
 *  */
  
        if ((bottom.x <= point.x && top.x >= point.x) &&
            (bottom.y <= point.y && top.y >= point.y))
        {
            return true;
        }
        else
        {
            return false;
        }

}


bool rectangle::rectangle_intersect(rectangle rectangle_two){
/*
 *
 * Second Parameterized constructor 
 * This makes a rectangle with two points bottom and top.
 * and calculate value of height and width from those points 
 * 
 * @param bottom of type struct point2D : contains coordinated of bootom left point
 * @param top of type struct point2D : contains coordinated of top right point
 * @return no return type
 * 
 *                                            __________________________top2(point2D)
 *                                           |                          |
 *                                           |                          |
                         ____________________|_________ top1(point2D)   | 
                        |					 |        |                 |
                        |                    |        |                 |
                        |					 |        |                 |
                        |	bottom2(point2D) |________|_________________|
                        |					          |
                        |					          |
                        |					          |
       bottom1(point2D) |_____________________________|
 */


    if( rectangle_two.top.x < bottom.x || //if the given triange is on the left)
        rectangle_two.bottom.y > top.y ||
        rectangle_two.bottom.x > top.x ||
        rectangle_two.top.y < bottom.y)
        {
                return false;
        }

    else{
        return true;
    }

}