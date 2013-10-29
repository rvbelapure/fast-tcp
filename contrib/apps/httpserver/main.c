#include<stdio.h>
#define HTTP_DEBUG

#include "httpserver-netconn.h"

int main(void) {
	printf("Calling httpserver\n");
	http_server_netconn_init();
	printf("Called httpserver\n");
	return 0;
}
