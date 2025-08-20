#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_BaseModelEntity.hpp"
#include "source2sdk/entity2/GameTick_t.hpp"
namespace source2sdk
{
    namespace client
    {
        struct C_BaseEntity;
    };
};

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
        // static metadata: MNetworkIncludeByName "m_fFlags"
        // static metadata: MNetworkOverride "m_fFlags C_BaseEntity"
        // static metadata: MNetworkOverride "m_vecX CNetworkOriginCellCoordQuantizedVector"
        // static metadata: MNetworkOverride "m_vecY CNetworkOriginCellCoordQuantizedVector"
        // static metadata: MNetworkOverride "m_vecZ CNetworkOriginCellCoordQuantizedVector"
        // static metadata: MNetworkOverride "m_angRotation CGameSceneNode"
        // static metadata: MNetworkVarNames "Vector m_vecMoveDirEntitySpace"
        // static metadata: MNetworkVarNames "float32 m_flTargetSpeed"
        // static metadata: MNetworkVarNames "GameTick_t m_nTransitionStartTick"
        // static metadata: MNetworkVarNames "int m_nTransitionDurationTicks"
        // static metadata: MNetworkVarNames "float32 m_flTransitionStartSpeed"
        // static metadata: MNetworkVarNames "EHANDLE m_hConveyorModels"
        #pragma pack(push, 1)
        class C_FuncConveyor : public source2sdk::client::C_BaseModelEntity
        {
        public:
            uint8_t _pad0ec0[0x8]; // 0xec0
            // metadata: MNetworkEnable
            Vector m_vecMoveDirEntitySpace; // 0xec8            
            // metadata: MNetworkEnable
            float m_flTargetSpeed; // 0xed4            
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTick_t m_nTransitionStartTick; // 0xed8            
            // metadata: MNetworkEnable
            std::int32_t m_nTransitionDurationTicks; // 0xedc            
            // metadata: MNetworkEnable
            float m_flTransitionStartSpeed; // 0xee0            
            uint8_t _pad0ee4[0x4]; // 0xee4
            // metadata: MNetworkEnable
            // m_hConveyorModels has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // C_NetworkUtlVectorBase<CHandle<source2sdk::client::C_BaseEntity>> m_hConveyorModels;
            char m_hConveyorModels[0x18]; // 0xee8            
            float m_flCurrentConveyorOffset; // 0xf00            
            float m_flCurrentConveyorSpeed; // 0xf04            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_FuncConveyor because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_FuncConveyor) == 0xf08);
    };
};
