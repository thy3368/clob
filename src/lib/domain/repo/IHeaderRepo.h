//
// Created by hongyaotang on 2025/10/23.
//

#ifndef CLOB_IHEADERREPO_H
#define CLOB_IHEADERREPO_H


class IHeaderRepo {
public:
    virtual void save() =0;

    virtual ~IHeaderRepo() = default;
};


#endif //CLOB_IHEADERREPO_H
