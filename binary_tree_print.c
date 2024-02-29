#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "binary_trees.h"

// Function to calculate the height of a binary tree
size_t _height(const binary_tree_t *tree) {
    if (tree == NULL)
        return 0;
    size_t left_height = _height(tree->left);
    size_t right_height = _height(tree->right);
    return 1 + (left_height > right_height ? left_height : right_height);
}

// Function to print a binary tree
void print_t(const binary_tree_t *tree, int level, int is_left, char **s) {
    if (tree == NULL)
        return;
    char b[10];
    int width = 5;
    sprintf(b, "(%03d)", tree->n);
    int left = is_left ? 1 : 0;
    int right = !is_left ? 1 : 0;
    print_t(tree->left, level + 1, left, s);
    for (int i = 0; i < width; i++)
        s[level][6 * level + 3 + i] = b[i];
    print_t(tree->right, level + 1, right, s);
}

// Your original binary_tree_print function remains unchanged
void binary_tree_print(const binary_tree_t *tree) {
    char **s;
    size_t height, i, j;
    if (!tree)
        return;
    height = _height(tree);
    s = malloc(sizeof(*s) * (height + 1));
    if (!s)
        return;
    for (i = 0; i < height + 1; i++) {
        s[i] = malloc(sizeof(**s) * 255);
        if (!s[i])
            return;
        memset(s[i], 32, 255);
    }
    print_t(tree, 0, 0, s);
    for (i = 0; i < height + 1; i++) {
        for (j = 254; j > 1; --j) {
            if (s[i][j] != ' ')
                break;
            s[i][j] = '\0';
        }
        printf("%s\n", s[i]);
        free(s[i]);
    }
    free(s);
}

