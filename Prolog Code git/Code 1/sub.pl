 start:- sub,nl.

        sub:-     write("X= "),read(X),
            write("Y= "),read(Y),
            S is X-Y,
            write("Sub is "),write(S).

goal:-
    start.
