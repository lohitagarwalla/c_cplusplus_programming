.PHONY: clean All

All:
	@echo "----------Building project:[ 09friend - Debug ]----------"
	@cd "09friend" && "$(MAKE)" -f  "09friend.mk"
clean:
	@echo "----------Cleaning project:[ 09friend - Debug ]----------"
	@cd "09friend" && "$(MAKE)" -f  "09friend.mk" clean
