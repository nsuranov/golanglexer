package main

import (
	"fmt"
	"os"
)

type Person struct {
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
	fmt.Println(z())

}


func z() bool {
	return a:=true
}