#include <iostream>
using namespace std;
#define NO_OF_ALPHABETS 26
#define MAX_WORD_SIZE 100
// TrieNode structure
struct TrieNode
{
   TrieNode* child[NO_OF_ALPHABETS];
   bool isEndOfWord;
   // Default constructor, set all the child nodes to NULL
   TrieNode():isEndOfWord(false){
      for(int i=0; i<NO_OF_ALPHABETS; i++)
         child[i] = NULL;
   }
};
// Insert the word in Trie
void insert(TrieNode* root, char* word)
{
   for(int i=0; word[i] != '\0'; i++)
   {
      if(root->child[word[i]-'a'] == NULL)
      {
         root->child[word[i]-'a'] = new TrieNode;
      }
      root = root->child[word[i]-'a'];
   }
   root->isEndOfWord = true;
}
// Helper function to print the word found
void printWord(char* str, int n)
{
   cout<<endl;
   for(int i=0; i<n; i++)
   {
      cout<<str[i];
   }
}
// Print all words in Trie
void printAllWords(TrieNode* root, char* wordArray, int pos = 0)
{
   if(root == NULL)
      return;
   if(root->isEndOfWord)
   {
      printWord(wordArray, pos);
   }
   for(int i=0; i<NO_OF_ALPHABETS; i++)
   {
      if(root->child[i] != NULL)
      {
         wordArray[pos] = i+'a';
         printAllWords(root->child[i], wordArray, pos+1);
      }
   }
}
// Check if a word is present in the Trie or not
bool isValidWord(TrieNode* r, char* str)
{
   if(str == NULL )
      return true;
   if(*str == '\0')
      return r->isEndOfWord;
   if(r->child[*str - 'a'] == NULL)
      return false;
   else
      return isValidWord( r->child[*str - 'A'], str+1);
}
int main()
{
   TrieNode* root = new TrieNode;
   insert(root, "Bad");
   insert(root, "bed");
   insert(root, "beard");
   insert(root, "beautiful");
   insert(root, "beauty");
   insert(root, "bread");
   char wordArray[MAX_WORD_SIZE];
   printAllWords(root, wordArray);
}
