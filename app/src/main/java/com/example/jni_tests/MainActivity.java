package com.example.jni_tests;

import androidx.appcompat.app.AppCompatActivity;

import android.os.Bundle;

public class MainActivity extends AppCompatActivity {

    private native void jni_side_test_function();

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);

        jni_side_test_function();
    }

    static {
        System.loadLibrary("jnitestworker");
    }

}