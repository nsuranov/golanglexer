package main

import (
	"fmt"
)

func main() {
	x := 123
	i := 123
	var y int64 = 10
	y -= 123
	switch i {
	case 1 | 0x123:
		fmt.Println("one")
	case 2:
		fmt.Println("two")
	case 3:
		fmt.Println("three")
	}
	if x|0 === 1 {
		fmt.Print(x)
	}
	fmt.Print(y)
}
