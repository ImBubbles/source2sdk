#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_PhysicsProp.hpp"
#include "source2sdk/client/shard_model_desc_t.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: 0x10
        // Alignment: 0x10
        // Standard-layout class: false
        // Size: 0x13b0
        // Has VTable
        // 
        // static metadata: MNetworkExcludeByName "m_hModel"
        // static metadata: MNetworkVarNames "shard_model_desc_t m_ShardDesc"
        #pragma pack(push, 1)
        class C_ShatterGlassShardPhysics : public source2sdk::client::C_PhysicsProp
        {
        public:
            uint8_t _pad1320[0x8]; // 0x1320
            // metadata: MNetworkEnable
            source2sdk::client::shard_model_desc_t m_ShardDesc; // 0x1328            
            uint8_t _pad13a8[0x8];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_ShatterGlassShardPhysics because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_ShatterGlassShardPhysics) == 0x13b0);
    };
};
