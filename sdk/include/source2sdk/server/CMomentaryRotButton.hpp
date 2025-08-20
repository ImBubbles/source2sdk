#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/entity2/CEntityIOOutput.hpp"
#include "source2sdk/server/CRotButton.hpp"

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
        // Size: 0xab8
        // Has VTable
        #pragma pack(push, 1)
        class CMomentaryRotButton : public source2sdk::server::CRotButton
        {
        public:
            // m_Position has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEntityOutputTemplate<float> m_Position;
            char m_Position[0x28]; // 0x9b8            
            source2sdk::entity2::CEntityIOOutput m_OnUnpressed; // 0x9e0            
            source2sdk::entity2::CEntityIOOutput m_OnFullyOpen; // 0xa08            
            source2sdk::entity2::CEntityIOOutput m_OnFullyClosed; // 0xa30            
            source2sdk::entity2::CEntityIOOutput m_OnReachedPosition; // 0xa58            
            std::int32_t m_lastUsed; // 0xa80            
            QAngle m_start; // 0xa84            
            QAngle m_end; // 0xa90            
            float m_IdealYaw; // 0xa9c            
            CUtlSymbolLarge m_sNoise; // 0xaa0            
            bool m_bUpdateTarget; // 0xaa8            
            uint8_t _pad0aa9[0x3]; // 0xaa9
            std::int32_t m_direction; // 0xaac            
            float m_returnSpeed; // 0xab0            
            float m_flStartPosition; // 0xab4            
            
            // Datamap fields:
            // bool m_bSolidBsp; // 0x8c0
            // void CMomentaryRotButtonUseMoveDone; // 0x0
            // void CMomentaryRotButtonReturnMoveDone; // 0x0
            // void CMomentaryRotButtonSetPositionMoveDone; // 0x0
            // void CMomentaryRotButtonUpdateThink; // 0x0
            // float InputSetPosition; // 0x0
            // float InputSetPositionImmediately; // 0x0
            // void InputDisableUpdateTarget; // 0x0
            // void InputEnableUpdateTarget; // 0x0
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CMomentaryRotButton because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CMomentaryRotButton) == 0xab8);
    };
};
