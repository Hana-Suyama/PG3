#include <stdio.h>

template <typename Type>
Type min(Type a, Type b) {
	if (a > b) {
		return static_cast<Type>(b);
	} else {
		return static_cast<Type>(a);
	}
}

template <>
char min<char>(char a, char b) {
	printf("”šˆÈŠO‚Í‘ã“ü‚Å‚«‚Ü‚¹‚ñ\n");
	return 0;
}

int main(){

	min<int>(5, 3);
	min<float>(5.0f, 3.0f);
	min<double>(5.0f, 3.0f);
	min<char>('4', '2');

	return 0;
}