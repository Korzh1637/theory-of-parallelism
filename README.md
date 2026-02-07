# Выбор типа массива (из основной директории)
Для выбора типа float при сборке нужно указать

     mkdir build   
     cmake . -DFLOAT=ON   
     cmake --build build
     tst1   
Для выбора типа double при сборке нужно указать

     mkdir build   
     cmake .. -DFLOAT=OFF
     cmake --build build
     tst1
# Результаты при float и double
При использовании типа float результат: 0.039351   
При использовании типа double результат: 5.62236e-12



