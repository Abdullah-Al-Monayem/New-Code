%Maximum number:

max_list([H|T],M):-max_list(T,H,M).  % T=5,1,9------ H=4 --- M=?. --1st
                                     
max_list([],C,C). % this condition for empty list.

max_list([H|T],C,M):-                      % T=1,9------ C=4 --- M=?--1st ---[5|1,9]
                                           % T=9-------- C=5-----M=?--2nd  ---[1|9]
                                           %T=[]-------- C=5----------3rd---- [9|[]]

C2 is max(C,H),    % max(4,5)---1st C2=5 
                   % max(5,1)---2nd C2=5
max_list(T,C2,M).  % Recursive call  T=1,9------- C2=5----- -----max_list([1,9],5,M) ---1st
                    %Recursive call  T=9------- C2=5----- -----max_list([9],5,M) ---2nd

%Input and output:
%max_list([4,5,1,9],M).
%M=9