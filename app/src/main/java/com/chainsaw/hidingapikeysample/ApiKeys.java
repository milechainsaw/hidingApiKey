package com.chainsaw.hidingapikeysample;

/**
 * Created by milenkojovanovic on 10/5/16.
 */

public class ApiKeys {

    static {
        System.loadLibrary("keyhide");
    }

    public static String apiKey = getApiKey();
    public static String anotherApiKey = getAnotherApiKey();

    public static native String getApiKey();

    public static native String getAnotherApiKey();

}
