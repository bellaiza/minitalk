# minitalk

## About the project

> _The purpose of this project is to code a small data exchange program using UNIX signals.

## Usage

### Requirements

The function is written in C language and thus needs the **`gcc` compiler** and some standard **C libraries** to run.

### Instructions

**1. Compiling**

To compile, go to the project path and run:

```shell
$ make
```


## Testing

To test the program you just need to launch the "server" and the "client" in different shell tabs with the following:

```shell
$ ./server
```

This will show your PID to make the client work and will stay waiting to receive a message from the "client"

```shell
$ ./client "PID" "Your message string"
```
