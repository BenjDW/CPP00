# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bde-wits <bde-wits@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/30 06:49:33 by bde-wits          #+#    #+#              #
#    Updated: 2024/12/18 09:47:50 by bde-wits         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Variables
# Compilateur
CXX = c++
# Options de compilation
CXXFLAGS = -Wall -Wextra -std=c++98
# Nom de l'exécutable final
TARGET = phonebook

# Liste des fichiers sources et objets
SRC = phonebook.cpp                      # Fichier source
OBJ = phonebook.o                      # Fichier objet

# Règle principale
all: $(TARGET)

# Création de l'exécutable
$(TARGET): $(OBJ)
	$(CXX) $(CXXFLAGS) -o $@ $(OBJ)

# Compilation des fichiers objets
%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Nettoyage des fichiers objets et de l'exécutable
clean:
	rm -rf $(TARGET) $(OBJ)

.PHONY: all clean
