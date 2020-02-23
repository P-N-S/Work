package main

import (
	"testing"
)

func TestCalculate(t *testing.T) {
	if calculate(2) != 4 {
		t.Error("Exepecteted 2 + 2 to equal 4")
	}
}
