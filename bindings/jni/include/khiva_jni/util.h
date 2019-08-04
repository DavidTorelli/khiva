// Copyright (c) 2019 Shapelets.io
//
// This Source Code Form is subject to the terms of the Mozilla Public
// License, v. 2.0. If a copy of the MPL was not distributed with this
// file, You can obtain one at http://mozilla.org/MPL/2.0/.

#ifndef KHIVA_BINDINGJAVA_UTIL_H
#define KHIVA_BINDINGJAVA_UTIL_H

#include <arrayfire.h>
#include <jni.h>

void check_and_retain_arrays(af_array &a, af_array &b, af::array &var_a, af::array &var_b);

/**
 * @brief Check and fill error parameters with given string
 *
 * @param env the JNI environment.
 * @param reason the error msg to be set.
 * @param err the error null terminated string output.
 */
void check_and_fill_error(JNIEnv *env, const char *reason, jobject* err);

#endif
