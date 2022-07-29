#include <stdlib.h>

int select_random_lr_arr_idx(const char* arr_name) {
	int length = lr_paramarr_len(arr_name);
	return rand() % length + 1;
}

char* select_random_lr_arr_elem(const char* arr_name) {
	return lr_paramarr_idx(arr_name, select_random_lr_arr_idx(arr_name));
}
