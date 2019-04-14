class ClasseA {
  private:
    int A1;
    float A2;
  public:
    int getA1(){
      return A1;
    }
    float getA2(){
      return A2; 
    }
    void MA1(){
      cout << "MA1" << endl;
    }
    void MA2(){
      cout << "MA1" << endl;
    }
	void MA3() {
		cout << "Altera��o a classe A partir do clone" << endl;
	  }
};
