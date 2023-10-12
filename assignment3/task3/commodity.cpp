#include "commodity.hpp"

Commodity::Commodity(std::string name, int id, double price) : name(name), id(id), price_without_sales_tax(price) {}

std::string Commodity::get_name() const
{
    return name;
}

int Commodity::get_id() const
{
    return id;
}

double Commodity::get_price(double quantity) const
{
    return price_without_sales_tax * quantity;
}

double Commodity::get_price_with_sales_tax(double quantity) const
{
    return price_without_sales_tax * (1 + SALES_TAX) * quantity;
}

void Commodity::set_price(double new_price)
{
    price_without_sales_tax = new_price;
}
