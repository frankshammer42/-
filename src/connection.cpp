//
//  connection.cpp
//  walkerSketch
//
//  Created by Frankshammer42 on 1/31/19.
//

#include "connection.hpp"

connection::connection(){
}


connection::connection(ofPoint start, ofPoint end, ofPoint color){
	start_point = start;
	end_point = end;
	connection_color = color;
	if (rand()%100>50){
		dir = 1;
	}
	else{
		dir = -1;
	}
}

void connection::update(){
	start_point.z += 0;
	end_point.z += 0;
}


void connection::draw(){
	ofSetColor(connection_color.x, connection_color.y, connection_color.z);
	ofPolyline line;
	line.addVertex(start_point);
	line.addVertex(end_point);
	line.draw();
	ofPopMatrix();
}

