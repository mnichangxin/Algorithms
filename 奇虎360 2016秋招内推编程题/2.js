var t = parseInt(readline())

var res = []

for (var i = 0; i < t; i++) {
	var lineis = readline()
	var n = parseInt(lineis[0])
	var m = parseInt(lineis[1])

	var g = new Array(n)
	for (var j = 1; j <= n; j++) {
		g[j] = []
		g[j].push(j)
	}

	for (var j = 0; j < m; j++) {
		var linejs = readline()
		var a = parseInt(linejs[0])
		var b = parseInt(linejs[1])
		g[a].push(b)
	}

	var res_child = []

	for (var j = 0; j < n; j++) {
		if (g[j].length == 1) {
			var count = 0;
			for (var k = 0; k < n; k++) {
				if (g[k].indexOf(g[j]) == -1) {
					break 
				} else {
					count++
				}
			}
			if (count == n) {
				res_child.push(g[j])
			} 
		}
	}

	res.push(res_child)
}

for (var i = 0; i < res.length; i++) {
	if (res[i].length == 0) {
		print(0)
		print(' ')
	} else {
		print(res[i].length)
		for (var j = 0; j < res[i].length; j++) {
			print(res[i][j])
		}
	}
}