parent(pam, bob). 
parent(torn, bob). 
parent(torn, liz). 
parent(bob, ann). 
parent(bob, pat). 
parent(pat, jim). 
female( pam). 
male( torn). 
male( bob). 
female( liz). 
female( ann). 
female( pat). 
male( jim). 
mother(X, Y) :- 
parent( X, Y), 
female( X). 
grandparent( X, Z) :- 
parent( X, Y), 
parent(Y, Z). 
sister(X, Y) :- 
parent( Z, X), 
parent( Z, Y), 
female( X), 
X\ = Y. 
ancestor( X, Z) :- 
parent( X, Z). 
ancestor( X, Z) :- 
parent( X, Y), 
ancestor( Y, Z). 
% Pam is a parent of Bob 
% Pam is female 
% Tom is male 
% X is the mother of Y if 
% X is a parent of Y and 
% X is female 
% X is a grandparent of Z if 
% X is a parent of Y and 
% Y is a parent of Z 
% X is a sister of Y if 
% X and Y have the same parent and 
% X is female and 
% X and Y are different 
% Rule al: X is ancestor of Z 
% Rule a2: X is ancestor of Z 
