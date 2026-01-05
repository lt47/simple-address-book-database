#include <stdio.h>
#include <errno.h>
#include <string.h>
#include <stdlib.h>


void die(const char *message){
	if (errno){
		perror(message);
	}
	else{
		printf("Error: %s\n", message);
	}
	exit(1);
}

int main(int argc, char *argv[]){
	if (argc < 3){
		die("USAGE: simple_db <dbfile> <action> [action params]");
	}
	
	return 0;
}
