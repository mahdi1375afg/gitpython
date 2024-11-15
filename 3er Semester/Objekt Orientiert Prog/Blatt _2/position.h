//
// Created by mahdi on 19.10.2024.
//

#ifndef POSITION_H
#define POSITION_H

#include <string>
namespace ns1
{
    class position
    {
    private:
        int x;
        int y;
        std::string name;
    public:
        void set(const std::string& name, int x, int y);
        const std::string& getName() const;
        int getX() const;
        int getY() const;
    };
}
#endif //POSITION_H
