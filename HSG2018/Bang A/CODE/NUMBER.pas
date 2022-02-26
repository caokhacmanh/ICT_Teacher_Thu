program NUMBER;
const   fi='NUMBER.INP';
        fo='NUMBER.OUT';
var     f:text;
function ngto(x:longint):boolean;
var     ok:boolean;
        i, tam:longint;
begin   if x=2 then exit(true);
        if (x<1) or (x mod 2 = 0) then exit(false);
        tam:=trunc(sqrt(x));
        i:=2;
        ok:=true;
        while ok and (i<=tam) do
                if x mod i <> 0 then inc(i) else ok:=false;
        ngto:=ok;
end;
procedure xuly;
var     a,i,struoc,ssau,vt:longint;
begin   assign(f,fi);
        reset(f);
        i:=2;  vt:=0;
        if not eof(f) then read(f,struoc);
        if not eof(f) then read(f,a);
        while not eof(f) do
                begin   read(f,ssau);
                        if ngto(ssau) and ngto(struoc) then vt:=i;
                        struoc:=a;
                        a:=ssau;
                        inc(i);
                end;
        close(f);
        assign(f,fo);rewrite(f);
        write(f,vt);close(f);
end;
BEGIN xuly;
END.
-2 3 4 33 4 5 7 3 11 8
