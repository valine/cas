assume(a=-1);
assume(b=-1);
A:=point(0);
B:=point(2,0);
C:=point(a,b);
T1:=couleur(triangle_equilateral(A,B),vert);
T2:=couleur(triangle_equilateral(B,C),vert);
T3:=couleur(triangle_equilateral(C,A),vert);
couleur(circonscrit(T1),vert);
couleur(circonscrit(T2),vert);
couleur(circonscrit(T3),vert);
AB:=segment(A,B);
AC:=segment(A,C);
CB:=segment(C,B);
M:=normal(isobarycentre(T1));
N:=normal(isobarycentre(T2));
O:=normal(isobarycentre(T3));
MN:=couleur(segment(M,N),rouge);
NO:=couleur(segment(N,O),rouge);
OM:=couleur(segment(O,M),rouge);
normal(longueur2(M,N)-longueur2(N,O));
normal(longueur2(N,O)-longueur2(O,M));
