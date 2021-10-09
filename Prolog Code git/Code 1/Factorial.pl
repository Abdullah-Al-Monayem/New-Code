%Finding factorial of a number:

fact(0,1).
fact(X,Y):-
X1 is X-1,
fact(X1,Z),
Y is X*Z.

%Input:  fact(3,X).

%Output: X=6