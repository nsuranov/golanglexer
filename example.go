package main

import (
	"fmt"
)

func main() {
	x := false
	var y int64 = 10
	y -= 123
	x = !x
	fmt.Print(x)
	fmt.Print(y)
}
