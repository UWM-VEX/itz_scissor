void pneumoSet(int open, int closed, int up int down)
{
  motorSet(5, open);
  motorSet(5, closed);
  motorSet(6, up);
  motorSet(6, down);
}
