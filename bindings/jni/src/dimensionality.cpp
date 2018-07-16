// Copyright (c) 2018 Shapelets.io
//
// This Source Code Form is subject to the terms of the Mozilla Public
// License, v. 2.0. If a copy of the MPL was not distributed with this
// file, You can obtain one at http://mozilla.org/MPL/2.0/.

#include <khiva/dimensionality.h>
#include <khiva_jni/dimensionality.h>

#ifdef __cplusplus
extern "C" {
#endif

JNIEXPORT jlongArray JNICALL Java_io_shapelets_khiva_Dimensionality_paa(JNIEnv *env, jobject, jlong ref, jint bins) {
    const jint l = 2;
    jlong tmp[l];
    jlongArray pointers = env->NewLongArray(l);

    af_array arr = (af_array)ref;
    af::array var = af::array(arr);

    jlong raw_pointer = 0;
    af_array af_p = (af_array)raw_pointer;

    char const *className = "java/lang/RuntimeException";
    jclass exClass = env->FindClass(className);

    af_retain_array(&arr, var.get());
    try {
        af_retain_array(&af_p, khiva::dimensionality::PAA(var, bins).get());
    } catch (std::invalid_argument &ia) {
        char const *message =
            "PAA invalid argument. Khiva array with two columns expected (x axis and y axis). PAA algorithm not "
            "applied.";
        env->ThrowNew(exClass, message);
    }
    tmp[0] = (jlong)arr;
    tmp[1] = (jlong)af_p;

    env->SetLongArrayRegion(pointers, 0, l, &tmp[0]);
    return pointers;
}

JNIEXPORT jlongArray JNICALL Java_io_shapelets_khiva_Dimensionality_pip(JNIEnv *env, jobject, jlong ref,
                                                                        jint numberIPs) {
    const jint l = 2;
    jlong tmp[l];
    jlongArray pointers = env->NewLongArray(l);

    af_array arr = (af_array)ref;
    af::array var = af::array(arr);

    jlong raw_pointer = 0;
    af_array af_p = (af_array)raw_pointer;

    char const *className = "java/lang/RuntimeException";
    jclass exClass = env->FindClass(className);

    af_retain_array(&arr, var.get());
    try {
        af_retain_array(&af_p, khiva::dimensionality::PIP(var, numberIPs).get());
    } catch (std::invalid_argument &ia) {
        char const *message =
            "PIP invalid argument. Khiva array with two columns expected (x axis and y axis). The number of important "
            "points should be a factor of the total number of points. PIP algorithm not applied.";
        env->ThrowNew(exClass, message);
    }

    tmp[0] = (jlong)arr;
    tmp[1] = (jlong)af_p;

    env->SetLongArrayRegion(pointers, 0, l, &tmp[0]);
    return pointers;
}

JNIEXPORT jlongArray JNICALL Java_io_shapelets_khiva_Dimensionality_PLABottomUp(JNIEnv *env, jobject, jlong ref,
                                                                                jfloat maxError) {
    const jint l = 2;
    jlong tmp[l];
    jlongArray pointers = env->NewLongArray(l);

    af_array arr = (af_array)ref;
    af::array var = af::array(arr);

    jlong raw_pointer = 0;
    af_array af_p = (af_array)raw_pointer;

    char const *className = "java/lang/RuntimeException";
    jclass exClass = env->FindClass(className);

    af_retain_array(&arr, var.get());
    try {
        af_retain_array(&af_p, khiva::dimensionality::PLABottomUp(var, maxError).get());
    } catch (std::invalid_argument &ia) {
        char const *message =
            "PLABottomUp invalid argument. Khiva array with two columns expected (x axis and y axis). PLABottomUp "
            "algorithm not applied.";
        env->ThrowNew(exClass, message);
    }

    tmp[0] = (jlong)arr;
    tmp[1] = (jlong)af_p;

    env->SetLongArrayRegion(pointers, 0, l, &tmp[0]);
    return pointers;
}

JNIEXPORT jlongArray JNICALL Java_io_shapelets_khiva_Dimensionality_PLASlidingWindow(JNIEnv *env, jobject, jlong ref,
                                                                                     jfloat maxError) {
    const jint l = 2;
    jlong tmp[l];
    jlongArray pointers = env->NewLongArray(l);

    af_array arr = (af_array)ref;
    af::array var = af::array(arr);

    jlong raw_pointer = 0;
    af_array af_p = (af_array)raw_pointer;

    char const *className = "java/lang/RuntimeException";
    jclass exClass = env->FindClass(className);

    af_retain_array(&arr, var.get());
    try {
        af_retain_array(&af_p, khiva::dimensionality::PLASlidingWindow(var, maxError).get());
    } catch (std::invalid_argument &ia) {
        char const *message =
            "PLASlidingWindow invalid argument. Khiva array with two columns expected (x axis and y axis). "
            "PLASlidingWindow algorithm not applied.";
        env->ThrowNew(exClass, message);
    }

    tmp[0] = (jlong)arr;
    tmp[1] = (jlong)af_p;

    env->SetLongArrayRegion(pointers, 0, l, &tmp[0]);
    return pointers;
}

JNIEXPORT jlongArray JNICALL Java_io_shapelets_khiva_Dimensionality_ramerDouglasPeucker(JNIEnv *env, jobject, jlong ref,
                                                                                        jdouble epsilon) {
    const jint l = 2;
    jlong tmp[l];
    jlongArray pointers = env->NewLongArray(l);

    af_array arr = (af_array)ref;
    af::array var = af::array(arr);

    jlong raw_pointer = 0;
    af_array af_p = (af_array)raw_pointer;

    char const *className = "java/lang/RuntimeException";
    jclass exClass = env->FindClass(className);

    af_retain_array(&arr, var.get());
    try {
        af_retain_array(&af_p, khiva::dimensionality::ramerDouglasPeucker(var, epsilon).get());
    } catch (std::invalid_argument &ia) {
        char const *message =
            "ramerDouglasPeucker invalid argument. Khiva array with two columns expected (x axis and y axis). "
            "ramerDouglasPeucker algorithm not applied.";
        env->ThrowNew(exClass, message);
    }

    tmp[0] = (jlong)arr;
    tmp[1] = (jlong)af_p;

    env->SetLongArrayRegion(pointers, 0, l, &tmp[0]);
    return pointers;
}

JNIEXPORT jlongArray JNICALL Java_io_shapelets_khiva_Dimensionality_sax(JNIEnv *env, jobject, jlong ref,
                                                                        jint alphabetSize) {
    const jint l = 2;
    jlong tmp[l];
    jlongArray pointers = env->NewLongArray(l);

    af_array arr = (af_array)ref;
    af::array var = af::array(arr);

    jlong raw_pointer = 0;
    af_array af_p = (af_array)raw_pointer;

    char const *className = "java/lang/RuntimeException";
    jclass exClass = env->FindClass(className);

    af_retain_array(&arr, var.get());
    try {
        af_retain_array(&af_p, khiva::dimensionality::SAX(var, alphabetSize).get());
    } catch (std::invalid_argument &ia) {
        char const *message =
            "sax invalid argument. Khiva array with two columns expected (x axis and y axis). sax algorithm not "
            "applied.";
        env->ThrowNew(exClass, message);
    }

    tmp[0] = (jlong)arr;
    tmp[1] = (jlong)af_p;

    env->SetLongArrayRegion(pointers, 0, l, &tmp[0]);
    return pointers;
}

JNIEXPORT jlongArray JNICALL Java_io_shapelets_khiva_Dimensionality_visvalingam(JNIEnv *env, jobject, jlong ref,
                                                                                jint numPoints) {
    const jint l = 2;
    jlong tmp[l];
    jlongArray pointers = env->NewLongArray(l);

    af_array arr = (af_array)ref;
    af::array var = af::array(arr);

    jlong raw_pointer = 0;
    af_array af_p = (af_array)raw_pointer;

    char const *className = "java/lang/RuntimeException";
    jclass exClass = env->FindClass(className);

    af_retain_array(&arr, var.get());
    try {
        af_retain_array(&af_p, khiva::dimensionality::visvalingam(var, numPoints).get());
    } catch (std::invalid_argument &ia) {
        char const *message =
            "visvalingam invalid argument. Khiva array with two columns expected (x axis and y axis). visvalingam "
            "algorithm not applied.";
        env->ThrowNew(exClass, message);
    }

    tmp[0] = (jlong)arr;
    tmp[1] = (jlong)af_p;

    env->SetLongArrayRegion(pointers, 0, l, &tmp[0]);
    return pointers;
}

#ifdef __cplusplus
}
#endif
