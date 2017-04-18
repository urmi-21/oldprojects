/*
---------------------------------------------------------------------------
 Algo9-1.c   C program for implementing Algorithm 9.1
 Algorithm translated to  C  by: Dr. Norman Fahrer
 IBM and Macintosh verification by: Daniel Mathews
 
 NUMERICAL METHODS: C Programs, (c) John H. Mathews 1995
 To accompany the text:
 NUMERICAL METHODS for Mathematics, Science and Engineering, 2nd Ed, 1992
 Prentice Hall, Englewood Cliffs, New Jersey, 07632, U.S.A.
 Prentice Hall, Inc.; USA, Canada, Mexico ISBN 0-13-624990-6
 Prentice Hall, International Editions:   ISBN 0-13-625047-5
 This free software is compliments of the author.
 E-mail address:       in%"mathews@fullerton.edu"
 
 Algorithm 9.1 (Euler's Method).
 Section   9.2, Euler's Method, Page 435
---------------------------------------------------------------------------
*/
/*
---------------------------------------------------------------------------
 
 Algorithm 9.1 (Euler's Method).

 To approximate the solution of the initial value problem  y' = f(t,y)
 with  y(a) = y_0  over [a,b] by computing

 y_(k+1)  =  y_k + h * f(t_k,y_k)   for   k = 0,1,...,M-1.  

 User has to supply a function named : ffunction
 An example is included in this program.

---------------------------------------------------------------------------
*/

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

#define MAX 500


/*  define prototype for USER-SUPPLIED function f(x)  */

    double ffunction(double t, double y);


/*  EXAMPLE for "ffunction"   */

    double ffunction(double t, double y)

    {
        return ( (t - y) / 2.0 );
    }

/* -------------------------------------------------------- */

/*  Main program for algorithm 9.1  */

    void main(void)

{
    int K;                     /* Loop counter                   */
    int M;                     /* INPUT: Number of steps         */
    double A, B, Y[MAX];       /* Endpoints and inital value     */
    double H;                  /* Compute the step size          */
    double T[MAX]; 


    printf("----------- Example on page 433 -------------\n");
    printf("Please enter endpoints of the interval [A,B]:\n");
    printf("For used Example type  : 0, 3\n");
    scanf("%lf, %lf", &A, &B);
    printf("You entered [%lf, %lf]\n", A, B);
    printf("-----------------------------------------\n");
    printf("Please enter number of steps: (Not more than 500 !)\n");
    scanf("%d",&M);
    if(M > MAX)
    {
    printf(" Not prepared for more than %d steps. Terminating. Sorry\n",MAX);
    exit(0);
    }

    printf("-----------------------------------------\n");
    printf("Please enter initial value Y[0] :\n");
    printf("For used Example type : 1\n");
    scanf("%lf", &Y[0]);
    printf("You entered Y[0] = %lf\n", Y[0]);

    /* Compute the step size */

    H    = (B - A) / M;      

    /* Initialize the variable */

    T[0] = A;

    /* Euler solution Y_(k+1)
       Compute the mesh point T_(K+1) */

    for(K = 0; K <= M-1; K++)
    {
       Y[K+1] = Y[K] + H * ffunction(T[K], Y[K]);
       T[K+1] = A + H * (K+1);
    }

    /* Output */

    for ( K = 0; K <= M; K++)
    {
       printf("K = %d, T[K] = %lf, Y[K] = %lf\n", K, T[K], Y[K]);
    } 

}   /* End of main program */

