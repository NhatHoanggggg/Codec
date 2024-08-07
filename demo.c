#include <Stdio.h>
void dthv(double *dt , double cd , double cr)
{
    *dt = cd * cr ;
}
void main ()
{
    double dientich ;
    double chieudai = 5.2 , chieurong = 10.2 ;
    dthv(&dientich , chieudai ,chieurong);
    printf("Dien tich : %0.2lf ", dientich);
   
}