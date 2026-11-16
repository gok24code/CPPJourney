    #include <iostream>
    using namespace std;

    struct goruntu_Karesi{
        const int pixel_degerleri[10][10] = {
            {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
            {0, 255, 255, 255, 255, 255, 255, 255, 255, 0},
            {0, 255, 0, 0, 0, 0, 0, 0, 255, 0},
            {0, 255, 0, 255, 255, 255, 255, 0, 255, 0},
            {0, 255, 0, 255, 0, 0, 255, 0, 255, 0},
            {0, 255, 0, 255, 255, 255, 255, 0, 255, 0},
            {0, 255, 0, 0, 0, 0, 0, 0, 255, 0},
            {0, 255, 255, 255, 255, 255, 255 ,255 ,255 ,0},
            {0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0}
        };
        
    };

    class computer_Vision{
        public: 
            computer_Vision(){
                cout << "Computer Vision nesnesi olusturuldu." << endl;
            }

            void goruntu_isle(goruntu_Karesi &goruntu){
                goruntu_Karesi* goruntu_pointer = &goruntu;
                for (int i = 0; i < 10; i++){
                    for (int j = 0; j < 10; j++){
                        cout << goruntu_pointer->pixel_degerleri[i][j] << " ";
                    }
                    cout << endl;
                }
            }
        
    };

    int main(){
        computer_Vision cv = computer_Vision();
        goruntu_Karesi goruntu = goruntu_Karesi();
        cv.goruntu_isle(goruntu);
    }