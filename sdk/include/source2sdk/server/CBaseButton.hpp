#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/entity2/CEntityIOOutput.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CBaseToggle.hpp"
#include "source2sdk/server/locksound_t.hpp"
namespace source2sdk
{
    namespace server
    {
        struct CBaseModelEntity;
    };
};

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
        // Size: 0x9b8
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "CHandle< CBaseModelEntity> m_glowEntity"
        // static metadata: MNetworkVarNames "bool m_usable"
        // static metadata: MNetworkVarNames "string_t m_szDisplayText"
        #pragma pack(push, 1)
        class CBaseButton : public source2sdk::server::CBaseToggle
        {
        public:
            QAngle m_angMoveEntitySpace; // 0x868            
            bool m_fStayPushed; // 0x874            
            bool m_fRotating; // 0x875            
            uint8_t _pad0876[0x2]; // 0x876
            source2sdk::server::locksound_t m_ls; // 0x878            
            CUtlSymbolLarge m_sUseSound; // 0x898            
            CUtlSymbolLarge m_sLockedSound; // 0x8a0            
            CUtlSymbolLarge m_sUnlockedSound; // 0x8a8            
            CUtlSymbolLarge m_sOverrideAnticipationName; // 0x8b0            
            bool m_bLocked; // 0x8b8            
            bool m_bDisabled; // 0x8b9            
            uint8_t _pad08ba[0x2]; // 0x8ba
            source2sdk::entity2::GameTime_t m_flUseLockedTime; // 0x8bc            
            bool m_bSolidBsp; // 0x8c0            
            uint8_t _pad08c1[0x7]; // 0x8c1
            source2sdk::entity2::CEntityIOOutput m_OnDamaged; // 0x8c8            
            source2sdk::entity2::CEntityIOOutput m_OnPressed; // 0x8f0            
            source2sdk::entity2::CEntityIOOutput m_OnUseLocked; // 0x918            
            source2sdk::entity2::CEntityIOOutput m_OnIn; // 0x940            
            source2sdk::entity2::CEntityIOOutput m_OnOut; // 0x968            
            std::int32_t m_nState; // 0x990            
            CEntityHandle m_hConstraint; // 0x994            
            CEntityHandle m_hConstraintParent; // 0x998            
            bool m_bForceNpcExclude; // 0x99c            
            uint8_t _pad099d[0x3]; // 0x99d
            CUtlSymbolLarge m_sGlowEntity; // 0x9a0            
            // metadata: MNetworkEnable
            // m_glowEntity has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseModelEntity> m_glowEntity;
            char m_glowEntity[0x4]; // 0x9a8            
            // metadata: MNetworkEnable
            bool m_usable; // 0x9ac            
            uint8_t _pad09ad[0x3]; // 0x9ad
            // metadata: MNetworkEnable
            CUtlSymbolLarge m_szDisplayText; // 0x9b0            
            
            // Datamap fields:
            //  m_ls.sLockedSound; // 0x880
            //  m_ls.sUnlockedSound; // 0x888
            // void CBaseButtonButtonTouch; // 0x0
            // void CBaseButtonButtonSpark; // 0x0
            // void CBaseButtonTriggerAndWait; // 0x0
            // void CBaseButtonButtonReturn; // 0x0
            // void CBaseButtonButtonBackHome; // 0x0
            // void CBaseButtonButtonUse; // 0x0
            // void CBaseButtonActivateTouch; // 0x0
            // void InputLock; // 0x0
            // void InputUnlock; // 0x0
            // void InputPress; // 0x0
            // void InputPressIn; // 0x0
            // void InputPressOut; // 0x0
            // void InputEnable; // 0x0
            // void InputDisable; // 0x0
            // CUtlString displaytext; // 0x7fffffff
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CBaseButton because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CBaseButton) == 0x9b8);
    };
};
