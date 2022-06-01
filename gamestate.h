#ifndef GAMESTATE_H
#define GAMESTATE_H

typedef struct{
	float x;
	float y;
} gamestate_t;

// Structure that holds the input values so that they can be read
typedef struct {
	int up;
	int down;
	int left;
	int right;
} input_t;

#endif // GAMESTATE_H