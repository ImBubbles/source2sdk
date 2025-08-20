#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/entity2/CEntityIOOutput.hpp"
#include "source2sdk/server/CBaseToggle.hpp"
#include "source2sdk/server/FuncDoorSpawnPos_t.hpp"
#include "source2sdk/server/locksound_t.hpp"

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
        // Size: 0xa78
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "bool m_bIsUsable"
        #pragma pack(push, 1)
        class CBaseDoor : public source2sdk::server::CBaseToggle
        {
        public:
            uint8_t _pad0868[0x10]; // 0x868
            QAngle m_angMoveEntitySpace; // 0x878            
            Vector m_vecMoveDirParentSpace; // 0x884            
            source2sdk::server::locksound_t m_ls; // 0x890            
            bool m_bForceClosed; // 0x8b0            
            bool m_bDoorGroup; // 0x8b1            
            bool m_bLocked; // 0x8b2            
            bool m_bIgnoreDebris; // 0x8b3            
            bool m_bNoNPCs; // 0x8b4            
            uint8_t _pad08b5[0x3]; // 0x8b5
            source2sdk::server::FuncDoorSpawnPos_t m_eSpawnPosition; // 0x8b8            
            float m_flBlockDamage; // 0x8bc            
            CUtlSymbolLarge m_NoiseMoving; // 0x8c0            
            CUtlSymbolLarge m_NoiseArrived; // 0x8c8            
            CUtlSymbolLarge m_NoiseMovingClosed; // 0x8d0            
            CUtlSymbolLarge m_NoiseArrivedClosed; // 0x8d8            
            CUtlSymbolLarge m_ChainTarget; // 0x8e0            
            source2sdk::entity2::CEntityIOOutput m_OnBlockedClosing; // 0x8e8            
            source2sdk::entity2::CEntityIOOutput m_OnBlockedOpening; // 0x910            
            source2sdk::entity2::CEntityIOOutput m_OnUnblockedClosing; // 0x938            
            source2sdk::entity2::CEntityIOOutput m_OnUnblockedOpening; // 0x960            
            source2sdk::entity2::CEntityIOOutput m_OnFullyClosed; // 0x988            
            source2sdk::entity2::CEntityIOOutput m_OnFullyOpen; // 0x9b0            
            source2sdk::entity2::CEntityIOOutput m_OnClose; // 0x9d8            
            source2sdk::entity2::CEntityIOOutput m_OnOpen; // 0xa00            
            source2sdk::entity2::CEntityIOOutput m_OnLockedUse; // 0xa28            
            bool m_bLoopMoveSound; // 0xa50            
            uint8_t _pad0a51[0x1f]; // 0xa51
            bool m_bCreateNavObstacle; // 0xa70            
            bool m_isChaining; // 0xa71            
            // metadata: MNetworkEnable
            bool m_bIsUsable; // 0xa72            
            uint8_t _pad0a73[0x5];
            
            // Datamap fields:
            // void m_nMovingSoundGUID; // 0xa54
            //  m_ls.sLockedSound; // 0x898
            //  m_ls.sUnlockedSound; // 0x8a0
            // void InputOpen; // 0x0
            // void InputClose; // 0x0
            // void InputToggle; // 0x0
            // void InputLock; // 0x0
            // void InputUnlock; // 0x0
            // float InputSetSpeed; // 0x0
            // float InputSetToggleState; // 0x0
            // bool InputSetNoNPCs; // 0x0
            // void CBaseDoorDoorTouch; // 0x0
            // void CBaseDoorDoorGoUp; // 0x0
            // void CBaseDoorDoorGoDown; // 0x0
            // void CBaseDoorDoorHitTop; // 0x0
            // void CBaseDoorDoorHitBottom; // 0x0
            // void CBaseDoorMovingSoundThink; // 0x0
            // void CBaseDoorCloseAreaPortalsThink; // 0x0
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CBaseDoor because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CBaseDoor) == 0xa78);
    };
};
