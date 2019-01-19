var n = parseInt(read_line())

var obj = {}
for (var i = 0; i < n; i++) {
	var key = read_line()
	obj[key] = 0
}


var m = parseInt(read_line())
for (var i = 0; i < m; i++) {
	var key = read_line()
	obj[key]++
}

var res = []
for (var i in obj) {
	if (obj[i] == 0) {
		res.push(i)
	} 
}
res.sort()
for (var i = 0; i < res.length; i++) {
	if (i == res.length - 1) {
		printsth(res[i])
	} else {
		print(res[i])
	}
}


