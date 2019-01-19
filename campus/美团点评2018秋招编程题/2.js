var n1 = parseInt(read_line())
var n2 = parseInt(read_line())

if (n1 < n2) {
	if (n2 - n1 < (360 - n2 + n1)) {
		printsth(n2 - n1)
	} else if (n2 - n1 > (360 - n2 + n1)) {
		printsth(-(360 - n2 + n1))
	} else {
		printsth(Math.abs(n2 - n1))
	}
} else if (n1 > n2) {
	if (n1 - n2 > (360 - n1 + n2)) {
		printsth(360 - n1 + n2)
	} else if (n1 - n2 < (360 - n1 + n2)) {
        printsth(-(n1 - n2))
	} else {
		printsth(Math.abs(n1 - n2))
	}
} else {
	printsth(0)
}