#include <iostream>
#include <map>
#include <string>
#include <vector>


using namespace std;


map<char,int> mapOfOccurencesFromString(string text){
	map<char,int>* occurenceMapPtr = new map<char,int>();	
	map<char,int> occurenceMap = *occurenceMapPtr;
	map<char,int>::iterator iter;
	for (char c : text){
		iter = occurenceMap.find(c);
		if(iter != occurenceMap.end()){
			iter -> second += 1;
		}
		else{
			occurenceMap[c] = 1;
		}	
	
	}
	return occurenceMap;

}


void printMap(map<char,int> printableMap){
	cout << endl;
	map<char,int>::iterator iter = printableMap.begin();
	while(iter != printableMap.end()){
		cout << iter->first << ':' << iter->second << endl;
	  	iter++;	
	}


}

struct treeNode{
	struct treeNode* leftNode;
	struct treeNode* rightNode;
	char value;
	int sum_of_occurences;

};





typedef struct treeNode treeNode;





treeNode* generateHuffmanTreeFromMap(map<char,int> occurenceMap){
	//haftreegeneratenow!
	vector<treeNode> oldNodes;
	vector<treeNode> newNodes;

	map<char,int>::iterator iter_map = occurenceMap.begin();
	while(iter_map != occurenceMap.end()){
	  	treeNode* newNode = new treeNode;
		newNode->value = iter->first;
		newNode->sum_of_occurences = iter->second;
		newNodes.push_back(*newNode);
		iter_map++;	
	}


	vector<treeNode>::iterator iter_vector;

	while (newNodes.size()  > 1){
		oldNodes = newNodes;		
		newNodes.clear();
		while (oldNode.size() != 0){
				treeNode* 
		}
		newNodes = oldNodes;
	}


}


int main(){
	cout << "Input text: ";
	string s;
	getline(cin,s);
	map<char,int> occurenceMap = mapOfOccurencesFromString(s);
	printMap(occurenceMap);
	treeNode* tree = generateHuffmanTreeFromMap(occurenceMap);
}

