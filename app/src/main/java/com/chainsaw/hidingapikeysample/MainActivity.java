package com.chainsaw.hidingapikeysample;

import android.support.v7.app.AppCompatActivity;
import android.os.Bundle;
import android.widget.TextView;

public class MainActivity extends AppCompatActivity {

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);

        TextView tv = (TextView) findViewById(R.id.sample_text);
        tv.setText("Api Key from Native: " + ApiKeys.apiKey);
        TextView tv2 = (TextView) findViewById(R.id.sample_text_2);
        tv2.setText("Another Api Key from Native: " + ApiKeys.anotherApiKey);
    }
}
