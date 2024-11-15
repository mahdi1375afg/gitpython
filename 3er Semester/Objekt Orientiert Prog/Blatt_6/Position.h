//
// Created by mahdi on 19.10.2024.
//

#ifndef POSITION_H
#define POSITION_H

#include <string>
namespace MahdiHfu
{
    class Position
    {
    private:
        int x;
        int y;
        std::string name;
    public:
        Position(const std::string &name, int x, int y);

        const std::string& getName() const;
        int getX() const;
        int getY() const;
        static void testPosition();
        int compare(const Position& other)const;
        void test_compare();
    };
}
#endif //POSITION_H
