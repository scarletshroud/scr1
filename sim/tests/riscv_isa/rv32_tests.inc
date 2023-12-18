
ARCH_lowercase = $(shell echo $(ARCH) | tr A-Z a-z)


rv32_isa_tests += isa/rv32ui/xor.S
             

ifneq (,$(findstring m,$(ARCH_lowercase)))
rv32_isa_tests += 
endif ## ifeq (m,$(findstring m,$(ARCH_lowercase)))

ifneq (,$(findstring c,$(ARCH_lowercase)))
rv32_isa_tests +=
endif ## ifeq (m,$(findstring c,$(ARCH_lowercase)))