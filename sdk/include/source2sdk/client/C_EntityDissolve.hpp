#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_BaseModelEntity.hpp"
#include "source2sdk/client/EntityDisolveType_t.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0xf08
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "GameTime_t m_flStartTime"
        // static metadata: MNetworkVarNames "float32 m_flFadeInStart"
        // static metadata: MNetworkVarNames "float32 m_flFadeInLength"
        // static metadata: MNetworkVarNames "float32 m_flFadeOutModelStart"
        // static metadata: MNetworkVarNames "float32 m_flFadeOutModelLength"
        // static metadata: MNetworkVarNames "float32 m_flFadeOutStart"
        // static metadata: MNetworkVarNames "float32 m_flFadeOutLength"
        // static metadata: MNetworkVarNames "EntityDisolveType_t m_nDissolveType"
        // static metadata: MNetworkVarNames "Vector m_vDissolverOrigin"
        // static metadata: MNetworkVarNames "uint32 m_nMagnitude"
        #pragma pack(push, 1)
        class C_EntityDissolve : public source2sdk::client::C_BaseModelEntity
        {
        public:
            uint8_t _pad0ec0[0x8]; // 0xec0
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flStartTime; // 0xec8            
            // metadata: MNetworkEnable
            float m_flFadeInStart; // 0xecc            
            // metadata: MNetworkEnable
            float m_flFadeInLength; // 0xed0            
            // metadata: MNetworkEnable
            float m_flFadeOutModelStart; // 0xed4            
            // metadata: MNetworkEnable
            float m_flFadeOutModelLength; // 0xed8            
            // metadata: MNetworkEnable
            float m_flFadeOutStart; // 0xedc            
            // metadata: MNetworkEnable
            float m_flFadeOutLength; // 0xee0            
            source2sdk::entity2::GameTime_t m_flNextSparkTime; // 0xee4            
            // metadata: MNetworkEnable
            source2sdk::client::EntityDisolveType_t m_nDissolveType; // 0xee8            
            // metadata: MNetworkEnable
            Vector m_vDissolverOrigin; // 0xeec            
            // metadata: MNetworkEnable
            std::uint32_t m_nMagnitude; // 0xef8            
            bool m_bCoreExplode; // 0xefc            
            bool m_bLinkedToServerEnt; // 0xefd            
            uint8_t _pad0efe[0xa];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_EntityDissolve because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_EntityDissolve) == 0xf08);
    };
};
