const   fi = 'Palin.in0';
        fo = 'Palin.ou0';
        max = 10000;
var     s : ansistring;
        d,T,kq : array[0..10000] of longint;
        i,j ,n,m : longint;
        f : text;
function       doixung(i,j : longint): boolean;
var c, d : longint;
begin
      d :=i; c := j;
      while (c > d) and (s[d]=s[c]) do
        begin inc(d); dec(c); end;
      exit(c<=d);
end;
procedure       xuly;
begin
        d[0] :=0;  //d[i] la so doan it nhat tu 1 den i
      for i :=1 to n do
      begin
        d[i] := max;
        for j :=1 to i do
          if doixung(j,i) then
             if d[j-1] + 1 <D[i] then
                begin
                    d[i] := d[j-1] +1;
                    T[i] := j-1;  // vi tri truoc i la j
                end;
      end;
end;
Begin
        assign(f,fi);
        reset(f);
        readln(f,n);
        readln(f,s);
        close(f);
        assign(f,fo);
        rewrite(f);
        xuly;
        writeln(f, d[n]);
        j := n;  m:=0;
        while j >0 do
           begin
              inc(m);
              kq[m] := j;
              j := t[j];
           end;
        for j := m downto 1 do writeln(f,kq[j]);
        close(f);
end.++++++++++++++++++++++
