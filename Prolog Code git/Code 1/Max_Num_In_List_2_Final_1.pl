%Minimum number:

maxl([Only], Only).
maxl([Head|Tail], Maximum) :-   %[4|5,1,2,9]--1st--Head=4
                                %[5|1,2,9]--2nd---maximum=5, head=5
                                %[1|2,9]--3rd---maximum=5, head=1
                                 %[2|9]--4th---maximum=5, head=2

maxl(Tail, TailMax),       %([5,1,2,9],TailMax)--1st
                           %([1,2,9],TailMax=4)--2nd ---head=5
                           %([2,9],TailMax=4)--3rd ---head=1
                           %([9],TailMax=4)--4th ---head=2


Maximum is max(Head, TailMax). %max(4,Tailmin)-- maximum--4---1st
                               %max(5,5)-- maximum--5---2nd
                                %max(1,5)-- maximum--5---3rd

%Input  =  maxl([4,5,1,2,9],X).