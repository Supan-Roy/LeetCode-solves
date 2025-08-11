class Solution {
public:
    bool squareIsWhite(string coordinates) {
        if(coordinates == "a1" || coordinates == "a3" || coordinates == "a5" || coordinates == "a7" ||
    coordinates == "b2" || coordinates == "b4" || coordinates == "b6" || coordinates == "b8" ||
    coordinates == "c1" || coordinates == "c3" || coordinates == "c5" || coordinates == "c7" ||
    coordinates == "d2" || coordinates == "d4" || coordinates == "d6" || coordinates == "d8" ||
    coordinates == "e1" || coordinates == "e3" || coordinates == "e5" || coordinates == "e7" ||
    coordinates == "f2" || coordinates == "f4" || coordinates == "f6" || coordinates == "f8" ||
    coordinates == "g1" || coordinates == "g3" || coordinates == "g5" || coordinates == "g7" ||
    coordinates == "h2" || coordinates == "h4" || coordinates == "h6" || coordinates == "h8"){
            return false;
        }
        return true;
    }
}; //Emni