//
//  walker.cpp
//  walkerSketch
//
//  Created by Frankshammer42 on 1/31/19.
//

#include "walker.hpp"

walker::walker(){
}


walker::walker(ofPoint init_pos, ofPoint color){
	current_pos = init_pos;
	prev_pos = init_pos;
	trail_color = color;
	step_length = 100; 
	current_connection = connection(prev_pos, current_pos, trail_color);  
	trail.push_back(current_connection);
}


ofPoint walker::generate_next_step(){
	int which_dir = rand() % 6;
	switch(which_dir){
		case 0:
			return ofPoint(-1, 0);
			break;
		case 1:
			return ofPoint(0, 1);
			break;
		case 2:
			return ofPoint(1, 0);
			break;
		case 3:
			return ofPoint(0, -1);
			break;
		case 4:
			return ofPoint(0, 0, 1);
			break;
		case 5:
			return ofPoint(0, 0, -1);
			break;
	}
}


void walker::draw(){
	ofSetColor(trail_color.x, trail_color.y, trail_color.z);
	ofSpherePrimitive walker_node; 
	walker_node.setRadius(20);
	walker_node.setPosition(current_pos);
	walker_node.draw();
	for (auto &connection: trail){
		connection.draw();
	}
}

void walker::update(){
	ofPoint next_dir = generate_next_step(); 
	prev_pos = current_pos;
	current_pos = current_pos + step_length*next_dir;
	//current_pos.z = rand()%100;
	current_connection = connection(prev_pos, current_pos, trail_color);  
	trail.push_back(current_connection);
	for (auto &connection: trail){
		connection.update();
	}
}

