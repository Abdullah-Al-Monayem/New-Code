even:- write("X= "),read(N),
       even(N).

even(N):-
	A is mod(N,2),
	A = 0,write(N),
	write(" is even ").

odd:- write("X= "),read(N),
      odd(N).
odd(N):-
	A is mod(N,2),
	A = 1,write(N),
	write(" is odd ").
