#!/bin/sh

# commands
gf="gcc -Wall -Wextra -Werror -L. -l_libft"

# colors
RED='\033[0;31m'
GREEN='\033[0;32m'
NC='\033[0m'
ORANGE='\033[0;33m'

# **************************** testing Makefile ***************************** #
cd ../libft/

# testing make
printf "${ORANGE}testing makefile...\n${NC}"
make
IS_BUILD_OK="$(find . -name "libft.a" -print)"
printf "make:\t\t"
if [[ -z "$IS_BUILD_OK" ]]; then
	printf "${RED}FAIL\n${NC}"
else
	printf "${GREEN}OK\n${NC}"
fi

# testing make fclean
make fclean
IS_FCLEAN_OK="$(find . \( -name "*.o" -o -name "libft.a" \) -print)"
printf "make fclean:\t"
if [[ -n "$IS_FCLEAN_OK" ]]; then
	printf "${RED}FAIL\n${NC}"
else
	printf "${GREEN}OK\n${NC}"
fi

# testing make re
make re
IS_BUILD_OK="$(find . -name "libft.a" -print)"
printf "make re:\t"
if [[ -z "$IS_BUILD_OK" ]]; then
	printf "${RED}FAIL\n${NC}"
else
	printf "${GREEN}OK\n${NC}"
fi

# testing make clean
make clean
IS_CLEAN_OK="$(find . -name "*.o" -print)"
LIBFT_EXIST="$(find . -name "libft.a" -print)"
printf "make clean:\t"
if [[ -n "$IS_CLEAN_OK" || -z "$LIBFT_EXIST" ]]; then
	printf "${RED}FAIL\n${NC}"
	exit
else
	printf "${GREEN}OK\n${NC}"
fi

# *************************** testing first part **************************** #

printf "${ORANGE}testing first part...\n${NC}"

# building tests
cd ../libtest
cp ../libft/libft.h ./includes/
cp ../libft/libft.a .
make