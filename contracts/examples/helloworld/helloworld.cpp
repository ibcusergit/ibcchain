#include <graphenelib/contract.hpp>
#include <graphenelib/dispatcher.hpp>
#include <graphenelib/print.hpp>
#include <graphenelib/types.h>

using namespace graphene;

class helloworld : public contract
{
  public:
    helloworld(uint64_t id)
        : contract(id)
    {
    }

    /// @abi action
    void hi(std::string user)
	{
		print("hi, ", user, "\n");
    }
};

GRAPHENE_ABI(helloworld, (hi))
