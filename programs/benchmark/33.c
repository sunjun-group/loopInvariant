int unknown1();
int unknown2();
int unknown3();

int main(int k)
{
  int z = k;
  int x = 0;
  int y = 0;

  // invariant (x == y)
  while(unknown1())
  {
    int c = 0;
    // invariant (x == y && z == k + y - c)
    while(unknown2())
    {
      if(z==k+y-c)
      {
        x++;
        y++;
        c++;
      }else
      {
        x++;
        y--;
        c++;
      }
    }
    // invariant (x == y)
    while(unknown3())
    {
      x--;
      y--;
    }
    z=k+y;
  }
  static_assert(x==y);
}
