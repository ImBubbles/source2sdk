#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CBaseEntity.hpp"
namespace source2sdk
{
    namespace server
    {
        struct CBaseEntity;
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
        // Size: 0x530
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "CHandle< CBaseEntity> m_hEntAttached"
        // static metadata: MNetworkVarNames "bool m_bCheapEffect"
        #pragma pack(push, 1)
        class CEntityFlame : public source2sdk::server::CBaseEntity
        {
        public:
            // metadata: MNetworkEnable
            // m_hEntAttached has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hEntAttached;
            char m_hEntAttached[0x4]; // 0x4f0            
            // metadata: MNetworkEnable
            bool m_bCheapEffect; // 0x4f4            
            uint8_t _pad04f5[0x3]; // 0x4f5
            float m_flSize; // 0x4f8            
            bool m_bUseHitboxes; // 0x4fc            
            uint8_t _pad04fd[0x3]; // 0x4fd
            std::int32_t m_iNumHitboxFires; // 0x500            
            float m_flHitboxFireScale; // 0x504            
            source2sdk::entity2::GameTime_t m_flLifetime; // 0x508            
            // m_hAttacker has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hAttacker;
            char m_hAttacker[0x4]; // 0x50c            
            float m_flDirectDamagePerSecond; // 0x510            
            std::int32_t m_iCustomDamageType; // 0x514            
            uint8_t _pad0518[0x18];
            
            // Datamap fields:
            // void m_hPlayingSound; // 0x518
            // void CEntityFlameFlameThink; // 0x0
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CEntityFlame because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CEntityFlame) == 0x530);
    };
};
