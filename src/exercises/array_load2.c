int read (int *p, int n, int i)
/*@ requires take a1 = each(i32 j; 0i32 <= j && j < n) { RW<int>(array_shift<int>(p,j)) };
             0i32 <= i && i < n;
    ensures take a2 = each(i32 j; 0i32 <= j && j < n) { RW<int>(array_shift<int>(p,j)) };
            a1 == a2;
            return == a1[i];
@*/
{
  /*@ focus RW<int>, i; @*/
  return p[i];
}
