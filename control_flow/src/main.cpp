#include <stdio.h>

//sig
//aufbau:
//return type
//name
//(
//params
//)
//{
//body
//}
void msg(const char *msg) {
    //call:
    //aufbau:
    //name
    //(
    //args
    //)
    printf("%s\n", msg);
}

int main(int argc, char **argv) {
	//bedinungen
    if(1/*cond*/) {
        //then
    }else {
        //else
    }

    if(1/*cond*/) {
        //then
    }else if(1/*andere cond*/) {
        //else
    }

    //for loops
    //  loop var; cond;  aktion
    for(int i = 0; i < 10; i++) {
        //body
    }

    //while
    while(1/*cond*/) {
        //body
        break; // aus dem loop ausbrechen
    }

    //do while
    do {
        //body
    }while (1/*cond*/);

    //switch
    switch (1/*var*/) {
        case 1: /*body*/ break;
        case 2: /*body*/ break;
        //wenn keine moeglichkeit zutrifft
        default: /*body*/ break;
    }

    return 0;
}
