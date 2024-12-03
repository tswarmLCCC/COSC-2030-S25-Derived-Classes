#include <iostream>
#include <string>

using namespace std;
// Base class
class GenericItem {
   public:
      void SetName(string newName) { 
          itemName = newName; 
      }
   
      void SetQuantity(int newQty) {
          itemQuantity = newQty; 
      }
   
      void PrintItem() {
          cout << itemName << " " << itemQuantity << endl;
      }
   
   private:
      string itemName;
      int itemQuantity;
};

// Derived class inherits from GenericItem 
class ProduceItem : public GenericItem { 
   public:
      void SetExpiration(string newDate) { 
          expirationDate = newDate; 
      }
   
      string GetExpiration() { 
          return expirationDate; 
      }
   
   private:
      string expirationDate;
};

int main() {
   GenericItem miscItem;
   ProduceItem perishItem;
   
   miscItem.SetName("Crunchy Cereal");
   miscItem.SetQuantity(9);
   miscItem.PrintItem();
   
/*These methods are inherited. perishItem is both a ProduceItem AND a GenericItem.  setname and set quantity are built are available to 
perishItem because it is derived from GenericItem!
*/

   perishItem.SetName("Apples");
   perishItem.SetQuantity(40);

    /*These methods are  unique to the ProduceItem class*/

   perishItem.SetExpiration("Dec 5, 2019");
   perishItem.PrintItem();
   cout << "  (Expires: " << perishItem.GetExpiration()
        << ")" << endl;
   
   return 0;
}