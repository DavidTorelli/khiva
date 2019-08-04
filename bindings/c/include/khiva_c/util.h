// Copyright (c) 2019 Shapelets.io
//
// This Source Code Form is subject to the terms of the Mozilla Public
// License, v. 2.0. If a copy of the MPL was not distributed with this
// file, You can obtain one at http://mozilla.org/MPL/2.0/.

#ifndef KHIVA_BINDINGC_UTIL_H
#define KHIVA_BINDINGC_UTIL_H

#include <arrayfire.h>
#include <khiva_c/defines.h>

void check_and_retain_arrays(khiva_array *a, khiva_array *b, af::array &var_a, af::array &var_b);

/**
 * @brief Check and fill error parameters with given string and error code
 *
 * @param msg the error msg to be set.
 * @param err_code the error code to set.
 * @param err the error null terminated string output.
 * @param err_len the size of the null terminated string buffer and also error code output.
 */
void check_and_fill_error(const char *msg, int err_code, char* err, int *err_len);

#endif
