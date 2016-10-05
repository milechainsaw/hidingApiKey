//
// Created by Milenko Jovanovic on 10/5/16.
//

#include <string.h>
#include <jni.h>

// str1 is the actual API key that we use, but REVERSED
// so the actual API key is YXBpIGtleSBmb3IgZ29vZ2xlIA==
char str1[] = "==AIlx2Zv92ZgI3bmBSeltGIpBXY";

// str is a fake string that needs to have the same length
// as our api key
char str[] =  "IkM5QkVvcDFCMS1ERDMxMjhEQiI=";

// function that takes the reversed api key and reverses it :)
char *makekey() {
    strcpy(str, str1);
    char temp;
    int i, j = 0;
    i = 0;
    j = strlen(str) - 1;

    while (i < j) {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
        i++;
        j--;
    }

    return (str);
}

jstring
Java_com_chainsaw_hidingapikeysample_ApiKeys_getApiKey(JNIEnv *env,
                                                         jobject thiz) {
    return (*env)->NewStringUTF(env, makekey());
}


// function that makes an api key char by char.
// this method is a bit more complex do disassemble.
jstring Java_com_chainsaw_hidingapikeysample_ApiKeys_getAnotherApiKey(JNIEnv *env, jobject thiz) {
    char str[14];
    str[0] = 'a';
    str[1] = 'e';
    str[2] = 'v';
    str[3] = '3';
    str[4] = '#';
    str[5] = 'F';
    str[6] = 'F';
    str[7] = 'f';
    str[8] = 'y';
    str[9] = 't';
    str[10] = 'n';
    str[11] = '0';
    str[12] = '=';
    str[13] = '\0'; //don't forget to terminate string
    return (*env)->NewStringUTF(env, str);
}
