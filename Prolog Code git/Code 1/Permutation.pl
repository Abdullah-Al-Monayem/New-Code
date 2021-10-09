%Permutation:

perm(List,[H|Perm]):-delete1(H,List,Rest),perm(Rest,Perm).
perm([],[]).

delete1(X,[X|T],T).
delete1(X,[H|T],[H|NT]):-delete1(X,T,NT).

%Input:
%perm([1,2,3],B).