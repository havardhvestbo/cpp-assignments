#ifndef COMMODITY_HPP
#define COMMODITY_HPP

#include <string>

const double SALES_TAX = 0.25; // 25% sales tax

class Commodity
{
private:
    std::string name;
    int id;
    double price_without_sales_tax;

public:
    Commodity(std::string name, int id, double price);

    std::string get_name() const;

    int get_id() const;

    double get_price(double quantity = 1) const;

    double get_price_with_sales_tax(double quantity = 1) const;

    void set_price(double new_price);
};

#endif // COMMODITY_HPP
