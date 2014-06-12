> Insomnia has murdered sleep, and therefore your computer shall sleep no more.
>
> -- <cite>Snakespeare</cite>

Essentially this is a rudimentary Haxe wrapper around some system functions that handle processes.

### Features:
* Set process priority
* Keep the computer/display from falling asleep

### Ex:
* Insomnia.setThreadExecutionState(ES_CONTINUOUS | ES_SYSTEM_REQUIRED | ES_AWAYMODE_REQUIRED);
* Insomnia.setProcessPriority(Insomnia.P_REALTIME_PRIORITY_CLASS);
Open up src/Main.hx for a full example or run bin/Main.exe to see the example in action.
To use this library in your own project, grab src/insomnia/Insomnia.hx and bin/Insomnia.ndll. It's also possible that you may have to grab bin/libgcc_s_dw2-1.dll.

### Notes:
Note that this is Windows-only for now. Use with native/Neko builds.
To use it in your project, grab src/insomnia/Insomnia.hx

### TODO:
* Port to Linux
* Port to Android
* Port to Mac
