#define TABLESIZE 500
#define LENGTH 45
bool load(const char* dictionary)
{
 node* hashtable[TABLESIZE];    
FILE* dict = fopen(dictionary, "r");
  if (dict == NULL)
  {
    printf("Could not open file.");
    return false;
  }
  char* dword = calloc(LENGTH+ 1,sizeof(char)); 
  while(fscanf(dict, "%s", dword) != EOF)
  {
  node* new_node = malloc(sizeof(node));
  strcpy(new_node->word,dword);
  unsigned int hashkey= 0;
  for (int counter = 0; dword[counter]!= '\0'; counter++)
  {
  hashkey = (hashkey*dword[counter] + dword[counter] + counter)%TABLESIZE;
  }
  if (hashtable[hashkey] == NULL)
  {    
  hashtable[hashkey] = new_node;
  new_node->next = NULL;
  }
  else
  {
    new_node->next = hashtable[hashkey];
     hashtable[hashkey] = new_node;
    }       
  nwords++;
}
fclose(dict);
return true;    
}
