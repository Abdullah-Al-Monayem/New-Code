loop(0).

loop(N):- N>0, write('value of N is: '), write(N), nl,
    Sum is ( Sum is 0)+N,
    write(Sum),
S is N-1,loop(S).

