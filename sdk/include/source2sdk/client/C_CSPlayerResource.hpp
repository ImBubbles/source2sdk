#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_BaseEntity.hpp"

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
        // Size: 0x690
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "bool m_bHostageAlive"
        // static metadata: MNetworkVarNames "bool m_isHostageFollowingSomeone"
        // static metadata: MNetworkVarNames "CEntityIndex m_iHostageEntityIDs"
        // static metadata: MNetworkVarNames "Vector m_bombsiteCenterA"
        // static metadata: MNetworkVarNames "Vector m_bombsiteCenterB"
        // static metadata: MNetworkVarNames "int m_hostageRescueX"
        // static metadata: MNetworkVarNames "int m_hostageRescueY"
        // static metadata: MNetworkVarNames "int m_hostageRescueZ"
        // static metadata: MNetworkVarNames "bool m_bEndMatchNextMapAllVoted"
        #pragma pack(push, 1)
        class C_CSPlayerResource : public source2sdk::client::C_BaseEntity
        {
        public:
            // metadata: MNetworkEnable
            bool m_bHostageAlive[12]; // 0x5f8            
            // metadata: MNetworkEnable
            bool m_isHostageFollowingSomeone[12]; // 0x604            
            // metadata: MNetworkEnable
            CEntityIndex m_iHostageEntityIDs[12]; // 0x610            
            // metadata: MNetworkEnable
            Vector m_bombsiteCenterA; // 0x640            
            // metadata: MNetworkEnable
            Vector m_bombsiteCenterB; // 0x64c            
            // metadata: MNetworkEnable
            std::int32_t m_hostageRescueX[4]; // 0x658            
            // metadata: MNetworkEnable
            std::int32_t m_hostageRescueY[4]; // 0x668            
            // metadata: MNetworkEnable
            std::int32_t m_hostageRescueZ[4]; // 0x678            
            // metadata: MNetworkEnable
            bool m_bEndMatchNextMapAllVoted; // 0x688            
            bool m_foundGoalPositions; // 0x689            
            uint8_t _pad068a[0x6];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_CSPlayerResource because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_CSPlayerResource) == 0x690);
    };
};
