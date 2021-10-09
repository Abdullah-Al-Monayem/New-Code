reverse_digits(N, M) :-
    (   integer(N) ->
        reverse_digits(N, 0, M)
    ;   integer(M),
        reverse_digits(M, 0, N)
    ).

reverse_digits(0, M, M) :- !.
reverse_digits(N, M0, M) :-
    N > 0,
    R is N div 10,
    M1 is M0 * 10 + N mod 10,
    reverse_digits(R, M1, M).