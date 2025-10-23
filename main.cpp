#include <iostream>

#include "src/lib/domain/Header.h"
#include "src/lib/domain/Order.h"
#include "src/lib/outbound/HeaderDbRepo.h"


// TIP 要<b>Run</b>代码，请按 <shortcut actionId="Run"/> 或点击装订区域中的 <icon src="AllIcons.Actions.Execute"/> 图标。
int main() {
    Order order = {23, 33, 33, false};
    order.print();
    lob::Header header = {33, 33, 33, false};;
    header.print();

    HeaderDbRepo repo = HeaderDbRepo();
    repo.save();



    for (int i = 1; i <= 5; i++) {
        // TIP 按 <shortcut actionId="Debug"/> 开始调试代码。我们已为您设置了一个 <icon src="AllIcons.Debugger.Db_set_breakpoint"/> 断点，但您可以随时按 <shortcut actionId="ToggleLineBreakpoint"/> 添加更多断点。
        std::cout << "i = " << i << std::endl;
    }

    return 0;
}
