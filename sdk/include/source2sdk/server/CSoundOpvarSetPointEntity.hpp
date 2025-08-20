#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/entity2/CEntityIOOutput.hpp"
#include "source2sdk/server/CSoundOpvarSetPointBase.hpp"

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x6a8
        // Has VTable
        #pragma pack(push, 1)
        class CSoundOpvarSetPointEntity : public source2sdk::server::CSoundOpvarSetPointBase
        {
        public:
            source2sdk::entity2::CEntityIOOutput m_OnEnter; // 0x598            
            source2sdk::entity2::CEntityIOOutput m_OnExit; // 0x5c0            
            bool m_bAutoDisable; // 0x5e8            
            uint8_t _pad05e9[0x43]; // 0x5e9
            float m_flDistanceMin; // 0x62c            
            float m_flDistanceMax; // 0x630            
            float m_flDistanceMapMin; // 0x634            
            float m_flDistanceMapMax; // 0x638            
            float m_flOcclusionRadius; // 0x63c            
            float m_flOcclusionMin; // 0x640            
            float m_flOcclusionMax; // 0x644            
            float m_flValSetOnDisable; // 0x648            
            bool m_bSetValueOnDisable; // 0x64c            
            bool m_bReloading; // 0x64d            
            uint8_t _pad064e[0x2]; // 0x64e
            std::int32_t m_nSimulationMode; // 0x650            
            std::int32_t m_nVisibilitySamples; // 0x654            
            Vector m_vDynamicProxyPoint; // 0x658            
            float m_flDynamicMaximumOcclusion; // 0x664            
            CEntityHandle m_hDynamicEntity; // 0x668            
            uint8_t _pad066c[0x4]; // 0x66c
            CUtlSymbolLarge m_iszDynamicEntityName; // 0x670            
            float m_flPathingDistanceNormFactor; // 0x678            
            Vector m_vPathingSourcePos; // 0x67c            
            Vector m_vPathingListenerPos; // 0x688            
            Vector m_vPathingDirection; // 0x694            
            std::int32_t m_nPathingSourceIndex; // 0x6a0            
            uint8_t _pad06a4[0x4];
            
            // Datamap fields:
            // void InputSetDisabledValue; // 0x0
            // void CSoundOpvarSetPointEntitySetOpvarThink; // 0x0
            // float InputSetDistanceMapMin; // 0x0
            // float InputSetDistanceMapMax; // 0x0
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CSoundOpvarSetPointEntity because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CSoundOpvarSetPointEntity) == 0x6a8);
    };
};
