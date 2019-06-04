RCH_lowercase = $(shell echo $(ARCH) | tr A-Z a-z)

rv32_isa_tests += isa/rv32ui/sgnj.S
# rv32_isa_tests += isa/rv32um/mulh.S         \
#          		  isa/rv32ui/jalr.S         \
#              	  isa/rv32ui/slti.S