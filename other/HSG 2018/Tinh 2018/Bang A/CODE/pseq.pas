const
  fi = 'pseq.inp';
  fo = 'pseq.out';
  maxN = 100005;

type
  data = object
           p, q, next: longint;
         end;

var
  res: int64;
  i, j, n, m, k: longint;
  a, v: array[0..maxN] of longint;
  c: array[0..maxN] of data;

function modun(l: longint): longint;
begin
  modun := ((l mod maxN) + maxN) mod maxN;
end;

function search(l: longint): longint;
var
  i: longint;
begin
  i := v[modun(l)];
  while i <> -1 do
    begin
      if c[i].p = l then break;
      i := c[i].next;
    end;
  exit(i);
end;

procedure push_back(l: longint);
begin
  inc(m);
  c[m].p := l;
  c[m].q := 1;
  c[m].next := v[modun(l)];
  v[modun(l)] := m;
end;

begin
  assign(input, fi); reset(input);
  assign(output, fo); rewrite(output);

  readln(n, k);
  fillchar(v, sizeof(v), 255);
  res := 0;
  m := 0;

  push_back(0);
  for i := 1 to n do
    begin
      read(a[i]);
      a[i] := a[i - 1] + a[i];

      j := search(a[i] - k);
      if j <> -1 then res := res + c[j].q;

      j := search(a[i]);
      if j <> -1 then inc(c[j].q) else push_back(a[i]);
    end;

  writeln(res);

  close(input); close(output);
end.
