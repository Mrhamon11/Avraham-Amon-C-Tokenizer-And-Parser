int x,y,z;
int d;

cin >> x >> y;

z = x + 2 * y - 7;

d = z / (x + 2 * x);

cout << x << y+3 * z << d - (x-2);
while(y > 0){
    z = x % y;
    x = y;
    y = z;
}
cout << x;