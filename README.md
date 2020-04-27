# Clothes_Images_Classification
## Basic Classification of Apparels into 10 Categories :

### 0	T-shirt/top
### 1	Trouser
### 2	Pullover
### 3	Dress
### 4	Coat
### 5	Sandal
### 6	Shirt
### 7	Sneaker
### 8	Bag
### 9	Ankle boot

It is a multiclass Classification , using Sequential Model.

I Have demonstrated,by creating two Sequential models :

1.) Only Using Dense and Flatten layers
   It Gives Accuracy of 91.2 % on training Set and 87.8 % on Test Set. 
   So we can see this diifference of 3.4% is due to Overfitting , that leads to less accuracy when it comes to prediction on unseen data .
   So we can add Dropout with varying parameter.
   
2.) Using Dropout to Prevent Overfitting and adding 2-D Layers such as MaxPooling2d , Conv2D . It requires 4-dimension input .
    It Gives accuracy of 89.45 % on training set and 89.13 % on testing set . Its pretty good as compared to previous model .
    We reduced the overfitting.
