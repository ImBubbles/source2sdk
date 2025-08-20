#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/entity2/CEntityIOOutput.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/resourcesystem/InfoForResourceTypeIParticleSystemDefinition.hpp"
#include "source2sdk/server/CItem.hpp"
namespace source2sdk
{
    namespace server
    {
        struct CBaseFilter;
    };
};
namespace source2sdk
{
    namespace server
    {
        struct CItemGenericTriggerHelper;
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
        // Size: 0xcc8
        // Has VTable
        #pragma pack(push, 1)
        class CItemGeneric : public source2sdk::server::CItem
        {
        public:
            uint8_t _pad0b50[0x14]; // 0xb50
            bool m_bHasTriggerRadius; // 0xb64            
            bool m_bHasPickupRadius; // 0xb65            
            uint8_t _pad0b66[0x2]; // 0xb66
            float m_flPickupRadiusSqr; // 0xb68            
            float m_flTriggerRadiusSqr; // 0xb6c            
            source2sdk::entity2::GameTime_t m_flLastPickupCheck; // 0xb70            
            bool m_bPlayerCounterListenerAdded; // 0xb74            
            bool m_bPlayerInTriggerRadius; // 0xb75            
            uint8_t _pad0b76[0x2]; // 0xb76
            // m_hSpawnParticleEffect has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CStrongHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition> m_hSpawnParticleEffect;
            char m_hSpawnParticleEffect[0x8]; // 0xb78            
            CUtlSymbolLarge m_pAmbientSoundEffect; // 0xb80            
            bool m_bAutoStartAmbientSound; // 0xb88            
            uint8_t _pad0b89[0x7]; // 0xb89
            CUtlSymbolLarge m_pSpawnScriptFunction; // 0xb90            
            // m_hPickupParticleEffect has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CStrongHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition> m_hPickupParticleEffect;
            char m_hPickupParticleEffect[0x8]; // 0xb98            
            CUtlSymbolLarge m_pPickupSoundEffect; // 0xba0            
            CUtlSymbolLarge m_pPickupScriptFunction; // 0xba8            
            // m_hTimeoutParticleEffect has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CStrongHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition> m_hTimeoutParticleEffect;
            char m_hTimeoutParticleEffect[0x8]; // 0xbb0            
            CUtlSymbolLarge m_pTimeoutSoundEffect; // 0xbb8            
            CUtlSymbolLarge m_pTimeoutScriptFunction; // 0xbc0            
            CUtlSymbolLarge m_pPickupFilterName; // 0xbc8            
            // m_hPickupFilter has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseFilter> m_hPickupFilter;
            char m_hPickupFilter[0x4]; // 0xbd0            
            uint8_t _pad0bd4[0x4]; // 0xbd4
            source2sdk::entity2::CEntityIOOutput m_OnPickup; // 0xbd8            
            source2sdk::entity2::CEntityIOOutput m_OnTimeout; // 0xc00            
            source2sdk::entity2::CEntityIOOutput m_OnTriggerStartTouch; // 0xc28            
            source2sdk::entity2::CEntityIOOutput m_OnTriggerTouch; // 0xc50            
            source2sdk::entity2::CEntityIOOutput m_OnTriggerEndTouch; // 0xc78            
            CUtlSymbolLarge m_pAllowPickupScriptFunction; // 0xca0            
            float m_flPickupRadius; // 0xca8            
            float m_flTriggerRadius; // 0xcac            
            CUtlSymbolLarge m_pTriggerSoundEffect; // 0xcb0            
            bool m_bGlowWhenInTrigger; // 0xcb8            
            Color m_glowColor; // 0xcb9            
            bool m_bUseable; // 0xcbd            
            uint8_t _pad0cbe[0x2]; // 0xcbe
            // m_hTriggerHelper has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CItemGenericTriggerHelper> m_hTriggerHelper;
            char m_hTriggerHelper[0x4]; // 0xcc0            
            uint8_t _pad0cc4[0x4];
            
            // Datamap fields:
            // void CItemGenericItemGenericTouch; // 0x0
            // void InputStartAmbientSound; // 0x0
            // void InputStopAmbientSound; // 0x0
            // void InputToggleAmbientSound; // 0x0
            // void m_hAmbientSound; // 0xb50
            // float auto_remove_timeout; // 0x7fffffff
            // float drag_override; // 0x7fffffff
            // float damping_override; // 0x7fffffff
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CItemGeneric because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CItemGeneric) == 0xcc8);
    };
};
