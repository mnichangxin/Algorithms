var strs = readline().split(' ')
var x1 = strs[0],
    k1 = parseInt(strs[1]),
    x2 = strs[2],
	k2 = parseInt(strs[3])

var s1 = '', s2 = ''

for (var i = 0; i < k1; i++) {
    s1 += x1
}
for (var i = 0; i < k2; i++) {
    s2 += x2
}

if (parseInt(s1) < parseInt(s2)) {
    print('Less')
} else if (parseInt(s1) == parseInt(s2)) {
    print('Equal')
} else {
    print('Greater')
}