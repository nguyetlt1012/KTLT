//Tran Van Phuc 20194354
 #include <iostream>
 #include <map>
 #include<vector>

 using namespace std;

template<class T>
map<T, double> fuzzy_set_union(const map<T, double> &a, const map<T, double> &b) {
    map<T,double> temp;
	typename map<T,double>::const_iterator ita = a.begin();
    typename map<T,double>::const_iterator itb = b.begin();
    while(ita!=a.end() || itb!=b.end()){
		if(ita==a.end()){
			temp.insert(make_pair(itb->first,itb->second));
			if(itb!=b.end()) itb++;
			continue;
		}
		if(itb==b.end()){
			temp.insert(make_pair(ita->first,ita->second));
    		if(ita != a.end()) ita++;
    		continue;
		}
    	if(ita->first<itb->first){
    		temp.insert(make_pair(ita->first,ita->second));
    		if(ita != a.end()) ita++;
		}
		else if(ita->first>itb->first){
			temp.insert(make_pair(itb->first,itb->second));
			if(itb!=b.end()) itb++;
		}
		else{
			if(ita->second>itb->second) {
				temp.insert(make_pair(ita->first,ita->second));
			}
			else {
				temp.insert(make_pair(itb->first,itb->second));
			}
			ita++;
			itb++;
		}
	}
	return temp;
}

template<class T>
map<T, double> fuzzy_set_intersection(const map<T, double> &a, const map<T, double> &b) {
	map<T,double> tmp;
	typename map<T,double>::const_iterator ita = a.begin();
    typename map<T,double>::const_iterator itb = b.begin();
    while(ita!=a.end() &&itb!=b.end()){
    	if(ita->first<itb->first){
    		ita++;
		}
		else if(itb->first<ita->first){
			itb++;
		}
		else{
			if(ita->second<itb->second) {
				tmp.insert(make_pair(ita->first,ita->second));
			}
			else {
				tmp.insert(make_pair(itb->first,itb->second));
			}
			ita++;
			itb++;
		}
	}
	return tmp;
}

 template<class T>
 void print_fuzzy_set(const std::map<T, double> &a) {
     cout << "{ ";
     for (const auto &x : a) {
         std::cout << "(" << x.first << ", " << x.second << ") ";
     }
     cout << "}";
     std::cout << std::endl;
 }

 int main() {
     std::map<int, double> a = {{1, 0.2}, {2, 0.5}, {3, 1}, {4, 0.6}, {5, 0.7}};
     std::map<int, double> b = {{1, 0.5}, {2, 0.4}, {4, 0.9}, {5, 0.4}, {6, 1}};
     std::cout << "A = "; print_fuzzy_set(a);
     std::cout << "B = "; print_fuzzy_set(b);
     std::map<int, double> c = fuzzy_set_union(a, b);
     std::map<int, double> d = fuzzy_set_intersection(a, b);
     std::cout << "Union: "; print_fuzzy_set(c);
     std::cout << "Intersection: "; print_fuzzy_set(d);
 }
