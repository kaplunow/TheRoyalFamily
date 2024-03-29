#pragma once
#include "Piece.h"

namespace TheRoyalFamily
{
    class Pawn :
        public Piece
    {
    public:
        Pawn(char file, int rank, char colour, char code = 'p');
        bool move(std::string target_pos);
    };
}
