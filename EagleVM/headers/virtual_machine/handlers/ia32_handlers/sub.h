#pragma once
#include "virtual_machine/handlers/vm_handler_entry.h"

class ia32_sub_handler : public vm_handler_entry
{
public:
    ia32_sub_handler(vm_register_manager* manager, vm_handler_generator* handler_generator)
        : vm_handler_entry(manager, handler_generator)
    {
        supported_sizes = { reg_size::bit64, reg_size::bit32, reg_size::bit16, reg_size::bit8 };
    };

private:
    virtual void construct_single(function_container& container, reg_size size) override;
};