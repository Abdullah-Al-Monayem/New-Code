%Other fibonacci code:
/*

fib(0,0).
fib(1,1).
fib(X, Ans) :- Xm1 is (X-1) ,Xm2 is (X-2) ,
fib(Xm1, Sub1), fib(Xm2, Sub2),
Ans is Sub1 + Sub2.

%fib(0,A). means  A=0; 0 tomo fibonacci number is 0
%fib(7,A).  A=13;  7  th fibonacci number is 13
%fibonacci series: 0,1,1,2,3,5,8,13,21,34,55,89,144;

*/
fib(0, 1) :- !.
fib(1, 1) :- !.
fib(N, Result) :- N1 is N - 1, N2 is N - 2, fib(N1, Result1), fib(N2, Result2),
    Result is Result1 + Result2.
