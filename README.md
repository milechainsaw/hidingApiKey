# The problem of hiding API keys in Android.
This little sample is covering the issue of leaking API keys, and is inspired by this post:

[How to hide your API Key in Android](http://www.androidauthority.com/how-to-hide-your-api-key-in-android-600583/)

If you keep your keys in strings.xml, or you hardcode them in Java it's trivial to decompile your APK and recover them.

EDIT:
There's a great repo about this topic [here] (https://github.com/pillfill/hiding-passwords-android)

# Using CMAKE with Android Studio
You can follow [this](https://developer.android.com/ndk/guides/index.html) guide to set up your ide.

# The solution
One of the solutions mentioned in the post above is hiding your keys in NDK.

```
jstring Java _ com _ riis _ apindk _ MainActivity _ invokeNativeFunction(JNIEnv* env, jobject javaThis) {
    return (*env)->NewStringUTF(env, "your_api_key");
}
```

I've upgraded the solution a bit, so that it's even harder to get the key from reading the binary.
I hardcode the api key in a reversed string, and use a simple C function to reverse it back.
Another approach I take is manually inserting characters of the key in an array. 

Neither approach is 100% secure, someone could just get our SO files and invoke the functions to get the keys, but it's one extra step to discourage the attacker.
