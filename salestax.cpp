//CRUSH IT

//Given a tax rate (as a percent) and a base cost of an item, 
   //calculates the total cost of the item including tax
float addTax(float taxRate, float cost){
   float tax = (taxRate / 100.0) * cost;
   return cost + tax;
}