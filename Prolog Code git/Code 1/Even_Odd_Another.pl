%Odd or even:

odd_even(A):- A mod 2 =:= 0,
write("even number"),nl.

odd_even(A):- write("odd number"),nl.
