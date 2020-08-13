#include <iostream>

int get_change(int m)
{
  int n = 0 ;
  if(m<5)
  {
      n=m;
  }
  else if( m % 10 == 0 )
        n = m / 10;
  else if ( m % 10 != 0 && m % 5 == 0)
        n = ( ( m / 10 ) + 1 );
  else if ( m % 10 != 0 && m % 5 != 0 && m % 10 > 5)
        n = ( (m / 10) + ( ( m % 10 ) - 5 ) + 1 );
  else
        n = ( ( m / 10 ) + ( m % 10 ) );

  return n;

}

int main() {
  int m;
  std::cin >> m;
  std::cout << get_change(m) << '\n';
}
