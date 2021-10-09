%Find the GCD of the two number X and Y.

gcd(X, Y, G) :- X = Y, G = X.
gcd(X, Y, G) :-
  X < Y,
  Y1 is Y- X,
  gcd(X, Y1, G).
gcd(X, Y, G) :- X > Y, gcd(Y, X, G).

%Input:    gcd(10,5,G).

%Output:  G = 5

%Find the LCM of the two number X and Y.

gcd(X, Y, G) :- X = Y, G = X.
gcd(X, Y, G) :-
  X < Y,
  Y1 is Y- X,
  gcd(X, Y1, G).
gcd(X, Y, G) :- X > Y, gcd(Y, X, G).

lcm(X,Y,LCM):-gcd(X,Y,GCD), LCM is X*Y//GCD.

%Input:   lcm(4,5,M).

%Output: M = 20
