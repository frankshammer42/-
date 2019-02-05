#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
	ofBackground(255, 255, 255);
	ofSetVerticalSync(true);
	ofSetFrameRate(40);
	ofSetWindowShape(1000, 1000);
    cam.setDistance(100);
	cam.setNearClip(0.1);
	cam.setFarClip(200000);
	cam.setDistance(5000);
	//ofPoint init_pos = ofPoint(250, 250, 0);
	//walker my_walker = walker(init_pos, ofPoint(0, 0, 0));
	//walkers.push_back(my_walker);
	//ofPoint second_init_pos = ofPoint(750, 750, 0);
	//walker my_walker_second = walker(second_init_pos, ofPoint(255, 0, 0));
	//walkers.push_back(my_walker_second);
	generate_walkers(100);
}

//--------------------------------------------------------------
void ofApp::update(){
	for (auto &walker: walkers){
		walker.update();
	}
	//for (auto &connection: walker_trail){
		//connection.update();
	//}
	//for (auto &connection: walker_second_trail){
		//connection.update();
	//}
	//my_walker.update();
	//my_walker_second.update();
	//walker_trail.push_back(my_walker.current_connection);
	//walker_second_trail.push_back(my_walker_second.current_connection);
}

//--------------------------------------------------------------
void ofApp::draw(){
	cam.begin();
	//my_walker.draw();
	//my_walker_second.draw();
	//for (auto &connection: walker_trail){
		//connection.draw();
	//}
	//for (auto &connection: walker_second_trail){
		//connection.draw();
	//}
	for (auto &walker: walkers){
		walker.draw();
	}
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
	if (key == ' '){
		reset(100);
	}
}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}

//Global Management Code
void ofApp::generate_walkers(int num){
	for (int i=0; i<num; i++){
		walker current_walker = walker(create_random_point(500), create_random_point(255));
		walkers.push_back(current_walker);
	}
}

ofPoint ofApp::create_random_point(int limit){
	int x = rand()%limit;
	int y = rand()%limit;
	int z = rand()%limit;
	return ofPoint(x, y, z);
}

void ofApp::reset(int num){
	walkers.clear();
	generate_walkers(num);
}

























