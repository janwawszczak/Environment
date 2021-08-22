#pragma once

#include <memory>
#include "Scheduler.hpp"
#include "HelloWorld.hpp"
#include <stdexcept>

namespace project //zmiana nowa cos tam
{	

struct CommandError: std::logic_error
{
    CommandError();
};

class SimpleProject
{
public:
    SimpleProject(Scheduler& scheduler, const std::string& command);
    SimpleProject(const SimpleProject& ) = delete;
    SimpleProject& operator=(const SimpleProject&) = delete;
    
private:
    Scheduler& msg_scheduler;
};

} // namespace project
