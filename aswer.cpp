//answer1.cpp defines the answer to first problem statement
#include<iostream>
#include "rectangle.cpp"
#include <assert.h>


using namespace std;

int main(){

    try{
        //making 2 points for creating a rectangle
        point2D point1 = (point2D){ .x = 0, .y=0} ;
        
        point2D point2 = (point2D){ .x = 5, .y=5} ;
        rectangle rect1(point1, point2); //making resctangie oject using two points2D objects/coordinates

        point2D point3 = (point2D){ .x = 6, .y=6} ;
        rectangle rect2( 2, 2 , point3); //making object using height, width, points coordinate
        rectangle rect3( 2, 2, point1); 
        cout<<std::boolalpha;




        cout << "Case 1:\n";
        cout << "Checking the if points lie inside rectangle or not\n";
        cout << "Expected : true  " << "Actual: " << rect1.contains_point(point1) << std::endl;
        assert( rect1.contains_point(point1));

        cout << "Case 2:\n";
        cout << "Checking the if points lie inside rectangle or not\n";
        cout << "Expected : false  " << "Actual: " <<  rect2.contains_point(point1) << std::endl;
        assert( !rect2.contains_point(point1));

        
        cout << "Case 3:\n";
        cout << "Checking the if rectangles intercect or not\n";
        cout << "Expected : false  " << "Actual: " <<  rect2.rectangle_intersect(rect1) << std::endl;
        assert( !rect2.rectangle_intersect(rect1));

        cout << "Case 4:\n";
        cout << "Checking the if rectangles intercect or not\n";
        cout << "Expected : false  " << "Actual: " <<  rect1.rectangle_intersect(rect2) << std::endl;
        assert( !rect1.rectangle_intersect(rect2));

        cout << "Case 4:\n";
        cout << "Checking the if rectangles intercect or not\n";
        cout << "Expected : true  " << "Actual: " <<  rect1.rectangle_intersect(rect3) << std::endl;
        assert( rect1.rectangle_intersect(rect3));
    }
    catch(...){
        cout<<"ERROR the implementaion is wrong";
        return 0;
    }
        
    return 1;
}