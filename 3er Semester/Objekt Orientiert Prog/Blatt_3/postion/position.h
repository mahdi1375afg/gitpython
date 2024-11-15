//
// Created by mahdi on 19.10.2024.
//

#ifndef POSITION_H
#define POSITION_H

#include <string>
namespace nsPosition
{
    class position
    {
    private:
        int x;
        int y;
        std::string name;
    public:
        position(const std::string &name, int x, int y);

        const std::string& getName() const;
        int getX() const;
        int getY() const;

        static void testPosition();
        int compare(const position& other)const;
    };
}
#endif //POSITION_H
