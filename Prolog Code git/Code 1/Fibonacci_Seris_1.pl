%Finding fibonacci series:
/*
:- dynamic(stored/1).
memo(Goal) :-
stored(Goal) -> true;
Goal, assertz(stored(Goal)).

fib(1,1) :- !, write("1, ").
fib(2,1) :- !, write("1, ").
fib(N,F) :-
N1 is N-1, memo(fib(N1,F1)),
N2 is N-2, memo(fib(N2,F2)),
F is F1 + F2,
write(F), write(", ").

%Input   = fib(7,X).

%Output: 1, 1, 2, 3, 5, 8, 13
*/



fib1(0,0).
fib1(1,1).
fib1(F,N) :-
    N>1,
    N1 is N-1,
    N2 is N-2,
    fib(F1,N1),
    fib(F2,N2),
    F is F1+F2,
    format('~w, ',[F]).
