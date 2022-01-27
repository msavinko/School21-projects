NAME	=	libft.a

SRCS	=	ft_atoi.c ft_bzero.c ft_isalnum.c ft_isalpha.c\

SRCS_B	=	ft_lstnew.c ft_lstadd_front.c ft_lstsize.c\
			ft_lstlast.c ft_lstadd_back.c ft_lstdelone.c\
			ft_lstclear.c ft_lstiter.c ft_lstmap.c\

HEADER	=	libft.h 

OBJ		=	$(patsubst %.c,%.o,$(SRCS))
OBJ_B	=	$(patsubst %.c,%.o,$(SRCS_B))

CC		=	cc
CFLAGS	=	-Wall -Wextra -Werror -I$(HEADER)
RM		= 	rm -f

.PHONY	:	all clean fclean re bonus

all		:	$(NAME)

$(NAME)	:	$(OBJ) $(HEADER)
	ar rcs $(NAME) $?

%.o		:	%.c $(HEADER)
	$(CC) $(CFLAGS) -c $< -o $@

bonus   :	$(OBJ_B) $(HEADER)
	@make OBJ="$(OBJ_B)" all
	
clean	:
	$(RM) $(OBJ) $(OBJ_B)

fclean	:	clean
	$(RM) $(NAME)

re		:	fclean all

++++++++++++++++++++++++++++++++++++++++++++++++

NAME			=	libft.a
DIRS			=	srcs/

LIST			=	ft_files.c\
					more_files.c
LIST_BONUS		=	ft_files_bonus.c

SOURCE			=	$(addprefix $(DIRS), $(LIST))
SOURCE_BONUS	=	$(addprefix $(DIRS), $(LIST_BONUS))

OBJ				=	$(patsubst %.c,%.o,$(SOURCE))
OBJ_BONUS		=	$(patsubst %.c,%.o,$(SOURCE_BONUS))

D_FILE			=	$(patsubst %.c,%.d,$(SOURCE))
D_FILE_BONUS	=	$(patsubst %.c,%.d,$(SOURCE_BONUS))

override D_ALL ?= $(D_FILE)
override OBJ_ALL?= $(OBJ)

INCLUDES		=	includes/
CFLAGS			=	-Wall -Wextra -Werror
CC				=	cc

.PHONY	: all clean fclean re bonus

all		:	$(NAME)

$(NAME)	:	$(OBJ)
	ar rcs $(NAME) $? 

%.o		: %.c
	$(CC) $(CFLAGS) $(OPFLAGS) -I$(INCLUDES) -c $< -o $@ -MD

bonus	: $(OBJ_BONUS)
	@make OBJ_ALL="$(OBJ) $(OBJ_BONUS)" D_ALL="$(D_FILE) $(D_FILE_BONUS)"all

include $(wildcard $(D_ALL))

clean	: 
	rm -f $(OBJ) $(OBJ_BONUS) $(D_FILE) $(D_FILE_BONUS)

fclean	:	clean
	rm -f $(NAME)

re		: fclean all
+++++++++++++++++++++++++++++


NAME	= libft.a	#имя архива, в который собираются все файлы

DIRS	= srcs/		#удобно все разложить по директориям, здесь лежат все исходные файлы

LIST	=	main.c\ 
			ft_printf.c\
			ft_atoi.c\		
#все файлы, которые надо компилировать

LIST_BONUS	=	main_bonus.c\ 
			ft_printf_bonus.c	
#все файлы бонусной части, которые надо компилировать

SOURCE	= $(addprefix $(DIRS), $(LIST)) #добавляет префикс srcs ко всем файлам в ЛИСТ
SOURCE_BONUS	= $(addprefix $(DIRS), $(LIST_BONUS))

OBJ			= $(patsubst %.c,%.o,$(SOURCE))	#patsubst заменяет все вхождения файлов. получаем объектные файлы. берет все файлы .с из ЛИСТ и заменяет на .о
OBJ_BONUS	= $(patsubst %.c,%.o,$(SOURCE_BONUS))

D_FILE			= $(patsubst %.c,%.d,$(SOURCE)) #получаем файлы с зависимостями .д 
D_FILE_BONUS	= $(patsubst %.c,%.d,$(SOURCE_BONUS))

override D_ALL ?= $(D_FILE) #если явно не указано, то заменить
override OBJ_ALL ?= $(OBJ)

INCLUDES = includes/	#здесь лежат хедеры

OPFLAGS = -O2 #флаг ускорения
	-O2 Moderate level of optimization which enables most optimizations.
CFLAGS	= -Wall -Wextra -Werror	#флаги компиляции

CC		= cc	#сама компиляция через gcc or cc or clang

.PHONY	: all clean fclean re bonus	#какие правила содержатся в данном файле (чтобы данные слова воспринимала именно как правила)

# ПРАВИЛА
# цель	: пререквизит
# 	команды

all		: $(NAME)	#собирает весь архив, проверяет есть ли изменения

$(NAME)	: $(OBJ)	#если объектники изменились по отношению к .с файлам, то нужно пересобрать библиотеку
	ar rcs $(NAME) $? 
#$? изменяет только те, что изменились
#$?		Имена всех пререквизитов (разделенные пробелами), которые являются "более новыми", чем цель
	ar -- create and maintain library archives
	-r      Replace or add the specified files to the archive.  If the archive does not exist a new
             archive file is created.
	-c      Whenever an archive is created, an informational message to that effect is written to
             standard error.
	-s      Write an object-file index into the archive, or update an existing one, even if no
             other change is made to the archive.  You may use this modifier flag either with any
             operation, or alone.  Running `ar s' on an archive is equivalent to running `ranlib' on
             it.
	-s OR ranlib $(NAME)

%.o		: %.c	#проверяет зависимости .о от .с, если обновились, то нужно пересобрать .о
	$(CC) $(CFLAGS) $(OPFLAGS) -I$(INCLUDES) -c $< -o $@ -MD
	
# -I подключает везде доп папки, все хедеры
# -c     Run all of the above, plus the assembler, generating a target ".o" object file.
# $< - Имя первой зависимости обрабатываемого правила (имя первого пререквизита)
# -o <file>
#           Write output to file.
# $@ - имя архивного файла (цели)
# -MD генерирует все файловые зависимости и кидает их в Д файл (там хранятся зависимости с папками .о файлами хедерами и тд)

bonus	: $(OBJ_BONUS)
	@make OBJ_ALL="$(OBJ) $(OBJ_BONUS)" D_ALL="$(D_FILE) $(D_FILE_BONUS)"all 
#использовать OBJ_BONUS вместо OBJ везде
#@make это тихий запуск, который не отображается в терминале при выполнении

OR
bonus	:	$(NAME) $(OBJECTS) $(OBJECTS_B)
			@touch bonus
			ar rcs $(NAME) $(OBJECTS_B)

include $(wildcard $(D_ALL)) #включаем д файлы при первом запуске

clean	: 
	rm -f $(OBJ) $(OBJ_BONUS) $(D_FILE) $(D_FILE_BONUS)	
#удаляет все кроме скомпилированного файла 
#-f удаляет папки и все что в них

fclean	: clean
	rm -f $(NAME)
#все удаляет полностью

re		: fclean all
#рекомпилирует библиотеку


+++++++++++++++++++++

#Makefile для проекта с использованием Libft 

#имя выходного файла
NAME	=	test

#путь к текущей папке
#PWD = $(shell pwd)

#Все директории в которых будем искать си файлы для компиляции
DIRS	=	srcs/

#Списки включаемых файлов
LIST	=	main.c

#Добавляем префикс ко всем файлам: "srcs/main.c"
SOURCE	=	$(addprefix $(DIRS), $(LIST))

#Создаем объектные файлы из си файлов 
OBJ		=	$(patsubst %.c,%.o,$(SOURCE))

#Создаем файли зависимости из си файлов
D_FILE	=	$(patsubst %.c,%.d,$(SOURCE)) 

#Включаем хедеры для основной части и включаем библиотеку 
#ma(также в основном хедере прописать #include "libft.h")
INCLUDES=	-I includes -I libft/includes

#Флаги компиляции
CFLAGS			=	-Wall -Wextra -Werror

#Сама компиляция
CC				=	cc

#Прописываем правила
.PHONY	: all clean fclean re bonus

#Первое правило для сборки
all		:	$(NAME)

#Если что то изменилось в библиотеке, то заново компилируем
$(NAME)	:	$(OBJ) libft/libft.a
	#ar rcs $(NAME) $?
	gcc $(FLAGS) $(OPFLAGS) $(OBJ) -o $(NAME) libft/libft.a

#Подключаем мейк -С - подключаем директорию либфт
libft/libft.a:
	make -C libft

#Правило, которое компилирует файлы с флагами и зависимостями
%.o		: %.c
	$(CC) $(CFLAGS) $(OPFLAGS) $(INCLUDES) -c $< -o $@ -MD

#Нужно для создания зависимых файлов .д
include $(D_FILE)

#Удаляем все объектные и зависимые файлы
clean	: 
	rm -f $(OBJ) $(D_FILE)
	make -C libft clean

#Удаляем все файлы
fclean	:	clean
	rm -f $(NAME) $(OBJ) $(D_FILE)
	make -C libft fclean

#Очистим все и скомпилируем заново
re		: fclean all