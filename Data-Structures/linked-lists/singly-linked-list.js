function mkNode(value, succRef) {
	return {value: value, next: succRef};
}

function rmNode(head, nodeToRm) {
	if (nodeToRm === head.value) {
  	const output = head.value;
    nodeToRm = null;
    return output;
  }
  var prevNode = head;
  var currentNode = head.next;
  while (currentNode !== undefined) {
  	if (currentNode.value === nodeToRm) {
    	prevNode.next = currentNode.next;
      const output = currentNode.value;
      currentNode = null;
      return output;
    }
  }
  throw new Error("Node to remove not found");
}


//Make the linked list
const tail = mkNode(1);
const node1 = mkNode(2, tail);
const node2 = mkNode(3, node1);


//Remove last node in linked list
console.log(rmNode(node2, 1));


//Print each value in linked list
var n = node2
while (n !== undefined) {
	console.log(n.value);
  n = n.next;
}