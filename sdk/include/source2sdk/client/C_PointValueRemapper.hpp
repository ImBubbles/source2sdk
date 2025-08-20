#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_BaseEntity.hpp"
#include "source2sdk/client/ValueRemapperHapticsType_t.hpp"
#include "source2sdk/client/ValueRemapperInputType_t.hpp"
#include "source2sdk/client/ValueRemapperMomentumType_t.hpp"
#include "source2sdk/client/ValueRemapperOutputType_t.hpp"
#include "source2sdk/client/ValueRemapperRatchetType_t.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
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
        // Size: 0x670
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "bool m_bDisabled"
        // static metadata: MNetworkVarNames "bool m_bUpdateOnClient"
        // static metadata: MNetworkVarNames "ValueRemapperInputType_t m_nInputType"
        // static metadata: MNetworkVarNames "CHandle< CBaseEntity> m_hRemapLineStart"
        // static metadata: MNetworkVarNames "CHandle< CBaseEntity> m_hRemapLineEnd"
        // static metadata: MNetworkVarNames "float m_flMaximumChangePerSecond"
        // static metadata: MNetworkVarNames "float m_flDisengageDistance"
        // static metadata: MNetworkVarNames "float m_flEngageDistance"
        // static metadata: MNetworkVarNames "bool m_bRequiresUseKey"
        // static metadata: MNetworkVarNames "ValueRemapperOutputType_t m_nOutputType"
        // static metadata: MNetworkVarNames "CHandle< C_BaseEntity > m_hOutputEntities"
        // static metadata: MNetworkVarNames "ValueRemapperHapticsType_t m_nHapticsType"
        // static metadata: MNetworkVarNames "ValueRemapperMomentumType_t m_nMomentumType"
        // static metadata: MNetworkVarNames "float m_flMomentumModifier"
        // static metadata: MNetworkVarNames "float m_flSnapValue"
        // static metadata: MNetworkVarNames "ValueRemapperRatchetType_t m_nRatchetType"
        // static metadata: MNetworkVarNames "float m_flInputOffset"
        #pragma pack(push, 1)
        class C_PointValueRemapper : public source2sdk::client::C_BaseEntity
        {
        public:
            // metadata: MNetworkEnable
            bool m_bDisabled; // 0x5f8            
            bool m_bDisabledOld; // 0x5f9            
            // metadata: MNetworkEnable
            bool m_bUpdateOnClient; // 0x5fa            
            uint8_t _pad05fb[0x1]; // 0x5fb
            // metadata: MNetworkEnable
            source2sdk::client::ValueRemapperInputType_t m_nInputType; // 0x5fc            
            // metadata: MNetworkEnable
            // m_hRemapLineStart has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hRemapLineStart;
            char m_hRemapLineStart[0x4]; // 0x600            
            // metadata: MNetworkEnable
            // m_hRemapLineEnd has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hRemapLineEnd;
            char m_hRemapLineEnd[0x4]; // 0x604            
            // metadata: MNetworkEnable
            float m_flMaximumChangePerSecond; // 0x608            
            // metadata: MNetworkEnable
            float m_flDisengageDistance; // 0x60c            
            // metadata: MNetworkEnable
            float m_flEngageDistance; // 0x610            
            // metadata: MNetworkEnable
            bool m_bRequiresUseKey; // 0x614            
            uint8_t _pad0615[0x3]; // 0x615
            // metadata: MNetworkEnable
            source2sdk::client::ValueRemapperOutputType_t m_nOutputType; // 0x618            
            uint8_t _pad061c[0x4]; // 0x61c
            // metadata: MNetworkEnable
            // m_hOutputEntities has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // C_NetworkUtlVectorBase<CHandle<source2sdk::client::C_BaseEntity>> m_hOutputEntities;
            char m_hOutputEntities[0x18]; // 0x620            
            // metadata: MNetworkEnable
            source2sdk::client::ValueRemapperHapticsType_t m_nHapticsType; // 0x638            
            // metadata: MNetworkEnable
            source2sdk::client::ValueRemapperMomentumType_t m_nMomentumType; // 0x63c            
            // metadata: MNetworkEnable
            float m_flMomentumModifier; // 0x640            
            // metadata: MNetworkEnable
            float m_flSnapValue; // 0x644            
            float m_flCurrentMomentum; // 0x648            
            // metadata: MNetworkEnable
            source2sdk::client::ValueRemapperRatchetType_t m_nRatchetType; // 0x64c            
            float m_flRatchetOffset; // 0x650            
            // metadata: MNetworkEnable
            float m_flInputOffset; // 0x654            
            bool m_bEngaged; // 0x658            
            bool m_bFirstUpdate; // 0x659            
            uint8_t _pad065a[0x2]; // 0x65a
            float m_flPreviousValue; // 0x65c            
            source2sdk::entity2::GameTime_t m_flPreviousUpdateTickTime; // 0x660            
            Vector m_vecPreviousTestPoint; // 0x664            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_PointValueRemapper because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_PointValueRemapper) == 0x670);
    };
};
