var n = parseInt(readline())
var s = []

for (var i = 0; i < n; i++) {
	s.push(readline())
}

var res = []

for (var i = 0; i < n; i++) {
	for (var j = 0; j < s[i].length; j++) {
		if (s[i].indexOf(s[i][j]) != -1 && s[i].indexOf(s[i][j]) == s[i].lastIndexOf(s[i][j])) {
			res.push(s[i][j])
			break
		}
	}
}

for (var i = 0; i < res.length; i++) {
	print(res[i])
}