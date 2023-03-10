#include "Object.hpp"
#include <rttr/registration>

RTTR_REGISTRATION
{
	rttr::registration::class_<AirEngine::Runtime::Core::Object>("AirEngine::Runtime::Core::Object");
}

AirEngine::Runtime::Core::Object::Object()
{
}

AirEngine::Runtime::Core::Object::~Object()
{
}

rttr::type AirEngine::Runtime::Core::Object::Type()
{
	return rttr::type::get(*this);
}