#include <stdio.h>
#include <math.h>
//Michael Tran 
//UCFID: 4801219

double calc_distance(){
   
   double x1, y1, x2, y2, distance; 
   
   printf("Enter x1: ");
   scanf("%lf", &x1);
   
   printf("Enter x2: ");
   scanf("%lf", &x2);
   
   
   printf("Enter y1: ");
   scanf("%lf", &y1);
   
   printf("Enter y2: ");
   scanf("%lf", &y2);
   
   distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
   return distance;
}

double print_distance(){
    double distance = calc_distance();
    printf("Your distance: %f\n", distance);
}


double calc_perimeter(){
    double distance = calc_distance();
    double length = distance;
    double width = distance;
    double perimeter = 2 * (length + width);
    printf("Your perimeter: %f\n", perimeter);
}



 double calc_width(){
    double distance = calc_distance(); 
    double width = distance;
    printf("Your width: %f\n ", width);
}

double calc_height() {
    double distance = calc_distance();
    double height = distance;
    printf("Your height: %f\n", height); 
}

double calc_area(){
    double distance = calc_distance();
    double area = (distance) * (distance);
    printf("Your area: %f\n", area);
}




int main() {
    print_distance();
    calc_perimeter();
    calc_width();
    calc_height();
    calc_area();
    

    return 0;
}