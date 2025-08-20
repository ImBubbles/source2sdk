#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/resourcesystem/InfoForResourceTypeIParticleSystemDefinition.hpp"
#include "source2sdk/server/CBaseGrenade.hpp"

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
        // Size: 0xc20
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "Vector m_vInitialPosition"
        // static metadata: MNetworkVarNames "Vector m_vInitialVelocity"
        // static metadata: MNetworkVarNames "int m_nBounces"
        // static metadata: MNetworkVarNames "HParticleSystemDefinitionStrong m_nExplodeEffectIndex"
        // static metadata: MNetworkVarNames "int m_nExplodeEffectTickBegin"
        // static metadata: MNetworkVarNames "Vector m_vecExplodeEffectOrigin"
        #pragma pack(push, 1)
        class CBaseCSGrenadeProjectile : public source2sdk::server::CBaseGrenade
        {
        public:
            // metadata: MNetworkEnable
            Vector m_vInitialPosition; // 0xbb0            
            // metadata: MNetworkEnable
            Vector m_vInitialVelocity; // 0xbbc            
            // metadata: MNetworkEnable
            std::int32_t m_nBounces; // 0xbc8            
            uint8_t _pad0bcc[0x4]; // 0xbcc
            // metadata: MNetworkEnable
            // m_nExplodeEffectIndex has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CStrongHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition> m_nExplodeEffectIndex;
            char m_nExplodeEffectIndex[0x8]; // 0xbd0            
            // metadata: MNetworkEnable
            std::int32_t m_nExplodeEffectTickBegin; // 0xbd8            
            // metadata: MNetworkEnable
            Vector m_vecExplodeEffectOrigin; // 0xbdc            
            source2sdk::entity2::GameTime_t m_flSpawnTime; // 0xbe8            
            std::uint8_t m_unOGSExtraFlags; // 0xbec            
            bool m_bDetonationRecorded; // 0xbed            
            std::uint16_t m_nItemIndex; // 0xbee            
            Vector m_vecOriginalSpawnLocation; // 0xbf0            
            source2sdk::entity2::GameTime_t m_flLastBounceSoundTime; // 0xbfc            
            RotationVector m_vecGrenadeSpin; // 0xc00            
            Vector m_vecLastHitSurfaceNormal; // 0xc0c            
            std::int32_t m_nTicksAtZeroVelocity; // 0xc18            
            bool m_bHasEverHitEnemy; // 0xc1c            
            uint8_t _pad0c1d[0x3];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CBaseCSGrenadeProjectile because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CBaseCSGrenadeProjectile) == 0xc20);
    };
};
