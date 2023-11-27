#include "newton.h"

//write the function named newtonApprox here

double newtonApprox( double x0, function <double(double)> f, function <double(double)> fp, double e )
{
    double x1;      /* next guess */
    double f0, fp0; /* f at x0, fp at x0 */

    f0 = f(x0);     /* compute f at x0 */
    fp0 = fp(x0);   /* compute fp at x0 */

    if ( fabs(f0) <= e ) /* if epsilon is greater than |f0| */
    {
        return x0;
    }

    x1 = x0 - (f0 / fp0); /* compute "next guess" */

    return newtonApprox( x1, f, fp, e ); /* recursive step */
}