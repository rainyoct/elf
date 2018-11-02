
#ifndef _ELF_H
#define _ELF_H

#define DIR_LENGTH 10
#define ENTRY_NUM 20
#define TNODE_LENGTH 2  // number of entries in T node

typedef long addr_type;
typedef int counter_type;


typedef struct path_tree_node_struct
{
	char dir_name[DIR_LENGTH * ENTRY_NUM];
	addr_type Tnode_root[ENTRY_NUM];
	addr_type sub_dir_node[ENTRY_NUM];

}path_tree_node;

// typedef struct Tnode_internal_struct
// {
// 	addr_type sub_Tnode[TNODE_LENGTH];
// }Tnode_internal;

typedef struct Tnode_struct
{
	addr_type chunk_val[TNODE_LENGTH];
}Tnode_leaf;



int init_from_boot();
int init_from_crash();



int insertChunk();

int double_Tnode();




path_tree_node* find_path_tree_node(path_tree_node *path_tree_root, char *curr_path);
path_tree_node* creat_new_path_tree_node();

//path_tree_node find_path;
int path_tree_insert(path_tree_node *path_tree_root, char *curr_path, char *dir_name, Tnode_leaf *Tnode);

int path_tree_insert_to_node(path_tree_node* curr_path,char dir_name, addr_type Tnode_root);



void *p = malloc(sizeof(Tnode_leaf) * N + 3 * sizeof(counter_type));







#endif