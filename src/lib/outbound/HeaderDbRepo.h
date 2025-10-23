//
// Created by hongyaotang on 2025/10/23.
//

#ifndef CLOB_HEADERDBREPO_H
#define CLOB_HEADERDBREPO_H

#include "../domain/repo/IHeaderRepo.h"

class HeaderDbRepo : public IHeaderRepo {
public:
    void save() override;  // 显式标记为override
};


#endif //CLOB_HEADERDBREPO_H
