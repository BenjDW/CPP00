# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bde-wits <bde-wits@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/28 07:21:33 by bde-wits          #+#    #+#              #
#    Updated: 2024/11/30 06:46:53 by bde-wits         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Variables
CXX = c++                              # Compilateur
CXXFLAGS = -Wall -Wextra -std=c++98    # Options de compilation
TARGET = megaphone                     # Nom de l'exécutable final

# Liste des fichiers sources et objets
SRC = megaphone.cpp                    # Fichier source
OBJ = megaphone.o                      # Fichier objet

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
