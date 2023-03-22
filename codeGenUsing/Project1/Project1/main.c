/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * main.c
 *
 * Code generation for function 'main'
 *
 */

 /*************************************************************************/
 /* This automatically generated example C main file shows how to call    */
 /* entry-point functions that MATLAB Coder generated. You must customize */
 /* this file for your application. Do not modify this file directly.     */
 /* Instead, make a copy of this file, modify it, and integrate it into   */
 /* your development environment.                                         */
 /*                                                                       */
 /* This file initializes entry-point function arguments to a default     */
 /* size and value before calling the entry-point functions. It does      */
 /* not store or use any values returned from the entry-point functions.  */
 /* If necessary, it does pre-allocate memory for returned values.        */
 /* You can use this file as a starting point for a main function that    */
 /* you can deploy in your application.                                   */
 /*                                                                       */
 /* After you copy the file, and before you deploy it, you must make the  */
 /* following changes:                                                    */
 /* * For variable-size function arguments, change the example sizes to   */
 /* the sizes that your application requires.                             */
 /* * Change the example values of function arguments to the values that  */
 /* your application requires.                                            */
 /* * If the entry-point functions return values, store these values or   */
 /* otherwise use them as required by your application.                   */
 /*                                                                       */
 /*************************************************************************/

 /* Include files */
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>


#include "main.h"
#include "hilbertToC.h"
#include "hilbertToC_terminate.h"



int main(int argc, char** argv)
{
    printf("************************************************\n");
    printf("MatlabToC_HibertTransform \n");
    printf("************************************************\n");

    FILE* fin, * fout;
    fin = fopen("sn_convTwo.csv", "r");
    fout = fopen("out.txt", "w+");


    double x[3600] = { 0 };

    (void)argc;
    (void)argv;
    /* The initialize function is being called automatically from your entry-point
     * function. So, a call to initialize is not included here. */
     /* Invoke the entry-point functions.
   You can call entry-point functions multiple times. */

    int flag = 0;
    while (!feof(fin)) {
        fscanf(fin, "%lf", &x[flag]);
        flag += 1;
        if (flag == 3600) {
            static creal_T y[3600];
            hilbertToC(x, y);
            flag = 0;
            for (int i = 0; i < 3600; i++) {
                printf("%lf\n",y[i].im);
                fprintf(fout, "%lf\n", y[i].im);
            }
        }


    }
    /* Terminate the application.
  You do not need to do this more than one time. */

    hilbertToC_terminate();
    return 0;
}

/* End of code generation (main.c) */
