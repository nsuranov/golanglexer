package main

import (
	"fmt"
	"os"
)

type Person struct {
	name string
	age  int
}

type Runnable interface {
	run() string
	walk()
}

func main() {
	fmt.Println("Hello world!")
	os.CreateTemp("2323", "skdjx")
	a := true
	if a {

	}
}
