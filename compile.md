
Run the following line to compile the preprocessor
```
    g++ cc1plus.cpp -o cc1plus
```

And then this one to compile the test app using the preprocessor
```
    g++ -no-integrated-cpp -B$PWD main.cpp -o main
```

You will see the preprocessor doing things!