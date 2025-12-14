RISCOF=riscof
CONFIG=config-3-pipeline.ini
SUITE=riscv-arch-test/riscv-test-suite/rv32i_m/I
ENV=riscv-arch-test/riscv-test-suite/env
WORK=riscof_work_3pl

compliance:
	cd ../tests && $(RISCOF) run --config $(CONFIG) --suite $(SUITE) --env $(ENV) --work-dir $(WORK)
