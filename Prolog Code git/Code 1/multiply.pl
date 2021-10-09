 start:- mul,nl.

        mul:-     write("X= "),read(X),
            write("Y= "),read(Y),
            S is X/Y,
            write("mul is "),write(S).

goal:-
    start.
