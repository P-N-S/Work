/*
Example to compare Println vs Printf
https://www.golangprograms.com/golang-package-examples/example-to-compare-println-vs-printf.html
SGVP525100|25Jan20
*/
package main

import (
	"fmt"
	""
)

func main() {
	a, b, c := 10, 20, 30

	fmt.Println(
		"(a + b = c) :", a, "+", b, "=", c,
	)

	fmt.Printf(
		"(a + b = c) : %d + %d = %d\n", a, b, c,
	)

	//helloWorld()
}
