/* Task description:
Write a function that receives the length of an edge of a cube as a parameter. The function should return the volume and the surface area of the cube in two further parameters passed by address. 
(The return type of the function is void.) Call this function from the main to calculate the volume and the surface area of a cube of 2.7 edge length, then print the results in main!

*/
void cube(double edge, double *parea, double *pvolume){
    *parea = 6*edge*edge;
    *pvolume = edge*edge*edge;
}

#include <stdio.h>

int main(){
    double edge = 2.7;
    double volume, area;
    cube(edge, &area, &volume);
    printf("The edge length: %.1lf\n", edge);
    printf("The surface: %.2lf\n", area);
    printf("The volume: %.2lf\n", volume);

    return 0;
}
