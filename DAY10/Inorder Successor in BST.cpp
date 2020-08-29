node* inOrderSuccessor( 
	node* root, 
	node* n) 
{ 
	
	if (n->right != NULL) 
		return minValue(n->right); 

	node* succ = NULL; 
	while (root != NULL) { 
		if (n->data < root->data) { 
			succ = root; 
			root = root->left; 
		} 
		else if (n->data > root->data) 
			root = root->right; 
		else
			break; 
	} 
	return succ; 
} 

