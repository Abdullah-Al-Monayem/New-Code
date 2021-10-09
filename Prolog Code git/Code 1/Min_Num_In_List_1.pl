%Minimum number:

minl([Only], Only).
minl([Head|Tail], Minimum) :-   %[4|5,1,2,9]--1st--Head=4
                                %[5|1,2,9]--2nd---minimum=4, head=5
                                %[1|2,9]--3rd---minimum=4, head=1

minl(Tail, TailMin),       %([5,1,2,9],TailMin)--1st 
                           %([1,2,9],TailMin=4)--2nd ---head=5
    

Minimum is min(Head, TailMin). %min(4,Tailmin)-- minimum--4---1st
                               %min(4,5)-- minimum--4---2nd

%Input  =  minl([4,5,1,2,9],X).