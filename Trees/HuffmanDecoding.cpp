// Huffman Decoding

// Huffman coding assigns variable length codewords to fixed length input characters based on their frequencies. 
// More frequent characters are assigned shorter codewords and less frequent characters are assigned longer codewords. 
// All edges along the path to a character contain a code digit. If they are on the left side of the tree, they will be a 0 (zero). 
// If on the right, they'll be a 1 (one). Only the leaves will contain a letter and its frequency count. 
// All other nodes will contain a null instead of a character, and the count of the frequency of all of it and its descendant characters.

// Input characters are only present in the leaves. Internal nodes have a character value of ϕ (NULL). We can determine that our values for characters are:

// A - 0
// B - 111
// C - 1100
// D - 1101
// R - 10
// Our Huffman encoded string is:

// A  B  R  A C    A D    A B   R  A
// 0 111 10 0 1100 0 1101 0 111 10 0
// or
// 01111001100011010111100

// To avoid ambiguity, Huffman encoding is a prefix free encoding technique. No codeword appears as a prefix of any other codeword.

// To decode the encoded string, follow the zeros and ones to a leaf and return the character there.

// You are given pointer to the root of the Huffman tree and a binary coded string to decode. You need to print the decoded string.

// Sample Input
// s="1001011"

// Sample Output
// ABACA

// Explanation

// S="1001011"
// Processing the string from left to right.
// S[0]='1' : we move to the right child of the root. We encounter a leaf node with value 'A'. We add 'A' to the decoded string.
// We move back to the root.

// S[1]='0' : we move to the left child. 
// S[2]='0' : we move to the left child. We encounter a leaf node with value 'B'. We add 'B' to the decoded string.
// We move back to the root.

// S[3] = '1' : we move to the right child of the root. We encounter a leaf node with value 'A'. We add 'A' to the decoded string.
// We move back to the root.

// S[4]='0' : we move to the left child. 
// S[5]='1' : we move to the right child. We encounter a leaf node with value C'. We add 'C' to the decoded string.
// We move back to the root.

//  S[6] = '1' : we move to the right child of the root. We encounter a leaf node with value 'A'. We add 'A' to the decoded string.
// We move back to the root.

// Decoded String = "ABACA"

// The structure of the node is

typedef struct node 
{
  int freq;
  char data;
  node * left;
  node * right;

}
node;

void decode_huff(node * root, string s) 
{
  node * treeroot = root;
  // char *result = (char*)malloc(sizeof(char)*len);
  int i = 0, k = 0;
  while (s[i]!='\0') 
  {
    //   printf("s[%d]%c\n", i, s[i]);
    if (s[i]=='1') 
    {
      root = root -> right;
      if (root->data!='\0') 
      {
        printf("%c", root->data);
        root = treeroot;
      }
      i++;
    } 
    else 
    {
      root = root -> left;
      if (root->data!='\0') 
      {
        printf("%c", root->data);
        root = treeroot;
      }
      i++;
    }
  }
}