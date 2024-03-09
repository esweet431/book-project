
class Product
{
    char* name;
    int ISBN;
};

class ProductInventory
{
    public:
        // Get the product by name
        Product searchByName(char const* name)
        {
            return Product();
        }

        // Get the product by ISBN
        Product searchByISBN(int ISBN)
        {
            return Product();
        }
};