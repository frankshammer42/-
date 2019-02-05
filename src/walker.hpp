//
//  walker.hpp
//  walkerSketch
//
//  Created by Frankshammer42 on 1/31/19.
//

#ifndef walker_hpp
#define walker_hpp

#endif /* walker_hpp */
#include "ofMain.h"
#include "connection.hpp"

//class to produce connections
class walker {
	public:
		walker();
		walker(ofPoint init_pos, ofPoint color);
		void update();
		void draw(); 
		ofPoint generate_next_step();

		ofPoint current_pos; //TODO: could be used as anchor for changing  geometries 
		ofPoint prev_pos;
		ofPoint trail_color; //color to pass into connection color
		int step_length; 
		connection current_connection;
		vector<connection> trail;
};
