float addTax(float taxRate, float cost){
   float tax = (taxRate / 100.0) * cost;
   return cost + tax;
}