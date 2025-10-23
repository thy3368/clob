//
// Created by hongyaotang on 2025/10/23.
//

#ifndef CLOB_HEADER_H
#define CLOB_HEADER_H
#include <cstdint>
#include <iostream>

namespace lob {
    struct Header {
        uint64_t orderId;
        double price;
        uint64_t quantity;
        bool isBuy;

        Header(uint64_t order_id, double price, uint64_t quantity, bool is_buy)
            : orderId(order_id),
              price(price),
              quantity(quantity),
              isBuy(is_buy) {
        }

        void print() {
            std::cout << "Hello and welcome to " << orderId << "!\n";
        };
    };
} // lob

#endif //CLOB_HEADER_H
