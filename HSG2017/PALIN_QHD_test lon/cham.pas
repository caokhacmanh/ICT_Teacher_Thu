const        max = 10000;
        kq : array[1..25] of longint=(7,8,8,10,11,26,32,41,32,30,34,30,21,32,41,36,31,37,40,28,39,34,40,39,36);
var     s,si : ansistring;
        d,T : array[0..10000] of longint;
        i,j ,n,m , diem: longint;
        fi , fo : string;
        f : text;
function       doixung(i,j : longint): boolean;
var c, d : longint;
begin
      d :=i; c := j;
      while (c > d) and (s[d]=s[c]) do
        begin inc(d); dec(c); end;
      exit(c<=d);
end;
procedure       cham;
var x, y : longint;
        ok : boolean;
Begin
       diem:=0;
       for i := 1 to 25 do
        begin
         str(i,si);
         fi := 'test'+si+'/palin.inp';
         fo := 'test'+si+'/palin.out';
        assign(f,fi);
        reset(f);
        readln(f,n);
        readln(f,s);
        close(f);
        assign(f,fo);
        reset(f);
        readln(f,m);
        x :=1;   ok := true;
        for j := 1 to m do
          begin
                 readln(f,y);
                 if not doixung(x,y) then begin ok := false; break; end;
                 x :=y +1;
          end;
        close(f);
        if ok then begin writeln(' Test ', i ,' Dung'); inc(diem); end;
        end;
end;
begin
        cham;
        writeln(' Tong diem : ', diem);
        readln;
end.
