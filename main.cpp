#import<ios>
char n;float u,v,x,y,a;main(){puts("P6 401 401 255");for(y=-2;y<2;y+=.01)for(x=-2;x<2;x+=.01){for(u=v=n=0;--n&&u*u+v*v<4;)a=u,u=u*u-v*v+x,v=2*a*v+y;printf("%c  ",n*30);}}
