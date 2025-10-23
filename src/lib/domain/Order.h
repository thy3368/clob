//
// Created by hongyaotang on 2025/10/23.
//

#ifndef CLOB_ORDER_H
#define CLOB_ORDER_H
#include <cstdint>
#include <iostream>


class Order {
public:
    uint64_t orderId;
    double price;
    uint64_t quantity;
    bool isBuy;

    Order(uint64_t order_id, double price, uint64_t quantity, bool is_buy)
        : orderId(order_id),
          price(price),
          quantity(quantity),
          isBuy(is_buy) {
    }

    void print() const {
        std::cout << "Hello and welcome to " << orderId << "!\n";
    }
};


#endif //CLOB_ORDER_H
