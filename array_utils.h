#ifndef _ARRAY_UTILS_H
#define _ARR_UTILS_H

/**
 * Selects a random number between 1 and the length of the LR array
 *
 * Usage example:
 * int randAccountIdx = select_random_lr_arr_idx("accountId");
 * lr_save_param(lr_paramarr_idx("accountId", randAccountIdx), "randAccountId");
 * web_url("URL=http://example.com/history?account-id={randAccountId}", ...);
 *
 * @param arr_name the name of the LR array
 * @return a random number between 1 and the length of the array
 */
int select_random_lr_arr_idx(const char* arr_name);

/**
 * Selects a random element from the LR array
 *
 * Usage example:
 * lr_save_param(select_random_lr_arr_elem("accountId"), "randAccountId");
 * web_url("URL=http://example.com/history?account-id={randAccountId}", ...);
 *
 * @param arr_name the name of the LR array
 * @return a random element from the LR array
 */
char* select_random_lr_arr_elem(const char* arr_name);

#endif
