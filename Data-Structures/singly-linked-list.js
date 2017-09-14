function makeNode(value, succRef) {
	return {value: value, next: succRef};
}

const tail = makeNode(1);
const node1 = makeNode(2, tail);
const node2 = makeNode(3, node1);

var n = node2
while (n !== undefined) {
	console.log(n.value);
  n = n.next;
}