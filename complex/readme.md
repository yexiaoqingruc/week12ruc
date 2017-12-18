Separate compile and link

```bash
> g++ -c complex.cpp
> g++ -c main.cpp
> g++ complex.o main.o -o main
> ./main
a+b=5+6i
a*b=1+13i
```