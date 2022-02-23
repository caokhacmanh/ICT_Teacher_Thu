program GAME;
const fi = 'GAME.inp';
        fo='GAME.out';
var
   n, i, d, M1, M2, Ga,m,k : longint;
   a : array[1..100] of longint;
   b,c : array[1..1000000] of longint;
   f : text;
function ok( M : longint ) : boolean;
var
   i, o: longint;
begin
   o := a[1] mod M;
   ok := true;
   for i := 1 to n do
      if a[i] mod M <> o then
         ok := false;
end;

begin
        Assign(f,fi);
        reset(f);
   readln(f, n );
   for i := 1 to n do readln(f, a[i] );
    close(f);
    Assign(f,fo);
    rewrite(f);
   Ga := abs(a[1]-a[2]);

   d := 1;  m:=0;
   while d*d <= Ga do begin
      if Ga mod d = 0 then begin
         M1 := d;
         M2 := Ga div d;

         if ok( M1 ) and (M1 <> 1) then //write(f, M1, ' ' );
                         begin inc(m); b[m]:=M1; end;
         if ok( M2 ) and (M2 <> M1) then //write( f,M2, ' ' );
                        begin inc(k); c[k] := M2; end;
      end;
      d := d + 1;
   end;
   for d:=1 to m do write(f,b[d],' ');
   for d :=k downto 1 do write(f,c[d],' ');
   close(f);
end.
