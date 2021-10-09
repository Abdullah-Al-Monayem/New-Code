loop:- write('The value is'), read(Word),  
     write('Input value is '), write(Word), nl,  
     (Word=end; loop).  


/*
loop:- write('The value is'), read(W),
     write('Input value is '), write(W), nl,
     (W=100; loop).
*/