Name = rush-02

Main = ./main.c 
Func = ./function.c

O_Main = ${Main:.c=.o}
O_Func = ${Func:.c=.o}

Flags = -Wall -Wextra -Werror

all: $(Name)

$(Name): $(O_Main) $(O_Func)
	cc $(Main) $(Func) -o $(Name) $(Flags)

