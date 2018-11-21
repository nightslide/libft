#!/bin/sh

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
	printf "${RED}[FAIL]\n${NC}"
else
	printf "${GREEN}[OK]\n${NC}"
fi

# testing make fclean
make fclean
IS_FCLEAN_OK="$(find . \( -name "*.o" -o -name "libft.a" \) -print)"
printf "make fclean:\t"
if [[ -n "$IS_FCLEAN_OK" ]]; then
	printf "${RED}[FAIL]\n${NC}"
else
	printf "${GREEN}[OK]\n${NC}"
fi

# testing make re
make re
IS_BUILD_OK="$(find . -name "libft.a" -print)"
printf "make re:\t"
if [[ -z "$IS_BUILD_OK" ]]; then
	printf "${RED}[FAIL]\n${NC}"
else
	printf "${GREEN}[OK]\n${NC}"
fi

# testing make clean
make clean
IS_CLEAN_OK="$(find . -name "*.o" -print)"
LIBFT_EXIST="$(find . -name "libft.a" -print)"
printf "make clean:\t"
if [[ -n "$IS_CLEAN_OK" || -z "$LIBFT_EXIST" ]]; then
	printf "${RED}[FAIL]\n${NC}"
	exit
else
	printf "${GREEN}[OK]\n${NC}"
fi

# ***************************** building tests ****************************** #

printf "${ORANGE}building tests...\n${NC}"

# building tests
cd ../libtest
cp ../libft/libft.h ./includes/
cp ../libft/libft.a .
cd ./src/crush_bin
CRUSH_BINS="$(find . -name "ft*" -print)"
# if [[ -z "$CRUSH_BINS" ]]; then
	CRUSH_SRCS="$(find ../crush_srcs -name "*.c" -print)"
	for SRC in $CRUSH_SRCS; do
		BIN="$(echo $SRC | rev | cut -d '.' -f 2 | cut -d '/' -f 1| rev)"
		DIR="$(echo $SRC | rev | cut -d '.' -f 2 | cut -d '/' -f 2| rev)"
		mkdir -p $DIR
		gcc -Wall -Wextra -Werror $SRC -I ../../includes/ -L../../ -lft -o $DIR/$BIN
	done
# fi
cd ../../
make re

# *************************** testing first part **************************** #

printf "${ORANGE}testing first part...\n${NC}"
./check