#pragma once
#include "IWalkable.h"
#include "IFlyable.h"
namespace samples {
	class Bat : public IWalkable,public IFlyable
	{
	public:
		void Walk() const;
		void Fly() const;
	};
}
