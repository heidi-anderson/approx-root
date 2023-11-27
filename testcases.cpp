#include "newton.h"
#include "..\catch_amalgamated.hpp"

// add in the test case provided below
// write at least 4 other test cases in additon to the one provided.

/* given test case */
double f( double x )
{
    return pow( x, 3 ) + 2;
}

double fp( double x )
{
    return 3 * pow( x, 2 );
}

TEST_CASE( "newtonApprox - x^3 + 2" ) 
{
    double epsilon = .001;
    double n = 2;
    double ans;
    ans = newtonApprox( n, f, fp, epsilon );
    REQUIRE( fabs( f( ans ) ) <= epsilon );
}


/* y = sin(x), , y' = cos(x) */
double f1( double x )
{
    return sin(x);
}

double fp1( double x )
{
    return cos(x);
}

TEST_CASE( "newtonApprox - sin(x)" )
{
    double e = 0.001;
    double x0 = 2;
    double ans;

    ans = newtonApprox( x0, f1, fp1, e );

    REQUIRE( fabs(f1(ans)) <= e );
}


/* y = 1 / x, y' = -1/x^2 */
double f2( double x )
{
    return 1 / x;
}
double fp2( double x )
{
    return -1 / pow( x, 2 );
}

TEST_CASE( "newtonApprox - 1/x" )
{
    double e = 0.001;
    double x0 = 5;
    double ans;

    ans = newtonApprox( x0, f2, fp2, e );

    REQUIRE( fabs(f2(ans)) <= e );
}


/* y = 3x^3, y' = 9x^2*/
double f3( double x )
{
    return 3 * pow( x, 3 );
}

double fp3( double x )
{
    return 9 * pow( x, 2 );
}

TEST_CASE( "newtonApprox - 3x^3" )
{
    double e = 0.001;
    double x0 = 5;
    double ans;

    ans = newtonApprox( x0, f3, fp3, e );

    REQUIRE( fabs(f3(ans)) <= e );
}


/* y = cos(x), y' = -sin(x) */
double f4( double x )
{
    return cos(x); 
}

double fp4( double x )
{
    return -sin(x);
}

TEST_CASE( "newtonApprox - cos(x)" )
{
    double e = 0.001;
    double x0 = 2;
    double ans;

    ans = newtonApprox( x0, f4, fp4, e );

    REQUIRE( fabs(f4(ans)) <= e );
}