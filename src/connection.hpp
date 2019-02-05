//
//  connection.hpp
//  walkerSketch
//
//  Created by Frankshammer42 on 1/31/19.
//

#ifndef connection_hpp
#define connection_hpp

#include <stdio.h>

#endif /* connection_hpp */
#include "ofMain.h"

class connection{
	public:
		connection(); 
		connection(ofPoint start_point, ofPoint end_point, ofPoint color);
		void draw();
		void update(); //rotate or move the connection

		int time_stamp; //store when it was being created
		int dir;
		ofPoint connection_color;
		ofPoint start_point;
		ofPoint end_point;
};



