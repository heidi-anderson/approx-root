# approx-root
This is the sixth assignment in CSC 215

This is a recursive program that approximates the root of a differentiable function. Given a function f(x) that is differentiable, the program is given a guess at where to start computing the root of f(x), this value is referred to as X-not. if x-not is less than some epsilon value, it is close enough to the root and is your answer. If x-not is not less than the epsilon value, the next guess is calculated (X_n+1) using the following formula: X_1 = X_0 - ((f(X_0))/(f'(X_0)))

Commit log: https://gitlab.cse.sdsmt.edu/101061875/csc215f23homework/-/commits/main?ref_type=heads
