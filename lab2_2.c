#include <stdio.h>
#define N 10

double minmaxavg(double array[], int num, double *max, double *min);


int main(void) {
    
    double array[N] = {1.5, 0.3, 43.0, 188.5, -2.0, 5.5, 32.2, 1.7, 0.7, -1000.0};
    
    double resultAvg;
    double max;
    double min;
    
    resultAvg = minmaxavg(array, N, &max, &min);
    printf("Average=%.2lf, Minimum=%.2lf, Maximum=%.2lf\n", resultAvg, min, max);
	return 0;
}

double minmaxavg(double array[], int num, double *max, double *min) {
    
    int i;
    
    double sum = 0.0;
    *max = array[0];
    *min = array[0];
    
    for (i=0; i<num; i++) {
        
        sum += array[i];
        
        if ( *max < array[i] ) {
            *max = array[i];
        }
        
        if ( *min > array[i] ) {
            *min = array[i];
        }
        
        
        
    }
    
    return sum/(double)num;

}