#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CBaseEntity.hpp"

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
        // Size: 0x728
        // Has VTable
        // 
        // static metadata: MNetworkIncludeByUserGroup "Origin"
        // static metadata: MNetworkVarNames "float32 m_flFadeInDuration"
        // static metadata: MNetworkVarNames "float32 m_flFadeOutDuration"
        // static metadata: MNetworkVarNames "float32 m_flMaxWeight"
        // static metadata: MNetworkVarNames "bool m_bEnabled"
        // static metadata: MNetworkVarNames "bool m_bMaster"
        // static metadata: MNetworkVarNames "bool m_bClientSide"
        // static metadata: MNetworkVarNames "bool m_bExclusive"
        // static metadata: MNetworkVarNames "float32 m_MinFalloff"
        // static metadata: MNetworkVarNames "float32 m_MaxFalloff"
        // static metadata: MNetworkVarNames "float32 m_flCurWeight"
        // static metadata: MNetworkVarNames "char m_netlookupFilename"
        #pragma pack(push, 1)
        class CColorCorrection : public source2sdk::server::CBaseEntity
        {
        public:
            // metadata: MNetworkEnable
            float m_flFadeInDuration; // 0x4f0            
            // metadata: MNetworkEnable
            float m_flFadeOutDuration; // 0x4f4            
            float m_flStartFadeInWeight; // 0x4f8            
            float m_flStartFadeOutWeight; // 0x4fc            
            source2sdk::entity2::GameTime_t m_flTimeStartFadeIn; // 0x500            
            source2sdk::entity2::GameTime_t m_flTimeStartFadeOut; // 0x504            
            // metadata: MNetworkEnable
            float m_flMaxWeight; // 0x508            
            bool m_bStartDisabled; // 0x50c            
            // metadata: MNetworkEnable
            bool m_bEnabled; // 0x50d            
            // metadata: MNetworkEnable
            bool m_bMaster; // 0x50e            
            // metadata: MNetworkEnable
            bool m_bClientSide; // 0x50f            
            // metadata: MNetworkEnable
            bool m_bExclusive; // 0x510            
            uint8_t _pad0511[0x3]; // 0x511
            // metadata: MNetworkEnable
            float m_MinFalloff; // 0x514            
            // metadata: MNetworkEnable
            float m_MaxFalloff; // 0x518            
            // metadata: MNetworkEnable
            float m_flCurWeight; // 0x51c            
            // metadata: MNetworkEnable
            char m_netlookupFilename[512]; // 0x520            
            CUtlSymbolLarge m_lookupFilename; // 0x720            
            
            // Datamap fields:
            // void CColorCorrectionFadeInThink; // 0x0
            // void CColorCorrectionFadeOutThink; // 0x0
            // void m_netlookupFilename; // 0x520
            // void InputEnable; // 0x0
            // void InputDisable; // 0x0
            // float InputSetFadeInDuration; // 0x0
            // float InputSetFadeOutDuration; // 0x0
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CColorCorrection because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CColorCorrection) == 0x728);
    };
};
