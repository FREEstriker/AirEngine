#pragma once
#include "ManagerBase.hpp"
#include <memory>
#include <rttr/type.h>

namespace AirEngine
{
	namespace Runtime
	{
		namespace Core
		{
			namespace Scene
			{
				class Scene;
			}
			namespace Manager
			{
				class DLL_API ThirdPartyLibraryManager
					: public ManagerBase
				{
				private:
					NO_COPY_MOVE(ThirdPartyLibraryManager)
				protected:
					virtual std::vector<Boot::ManagerInitializerWrapper> OnGetManagerInitializers() override;
					virtual void OnFinishInitialize() override;
				public:
					ThirdPartyLibraryManager();
					virtual ~ThirdPartyLibraryManager();
				};
			}
		}
	}
}