/* Actor_Wiggler_2_build_helper
 * address: 0x602CE894   size: 400   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall Actor_Wiggler_2_build_helper(int a1, ActorBuildInfo *a2)
{
  Enemy__ctor((Enemy *)a1, a2);
  *(_DWORD *)a1 = off_60BE6034;
  sub_602D1614(
    a1 + 6316,
    FIELD_U32(a1, 156),
    FIELD_U32(a1, 160),
    FIELD_U32(a1, 164),
    FIELD_F32(a1, 108),
    FIELD_F32(a1, 112),
    1500.0,
    a1);
  FIELD_U32(a1, 6316) = off_60BE62DC;
  EffectWrapper_ctor((EffectWrapper *)(a1 + 6440));
  FIELD_U32(a1, 6440) = off_60BC1450;
  FIELD_U32(a1, 6544) = 0;
  FIELD_U8(a1, 6548) = 1;
  FIELD_U32(a1, 6560) = 0;
  FIELD_U16(a1, 6564) = 0;
  FIELD_U16(a1, 6556) = 0;
  FIELD_U16(a1, 6554) = 0;
  FIELD_U16(a1, 6552) = 0;
  FIELD_U16(a1, 6550) = 0;
  FIELD_U32(a1, 6568) = 1065353216;
  FIELD_U16(a1, 6572) = 0;
  FIELD_U16(a1, 6574) = 0;
  FIELD_U32(a1, 6576) = -1;
  FIELD_U32(a1, 6588) = 0;
  FIELD_U32(a1, 6592) = 0;
  FIELD_U32(a1, 6596) = 0;
  ActiveCollider_ctor((ActiveCollider *)(a1 + 6600));
  ActiveCollider_ctor((ActiveCollider *)(a1 + 6904));
  ActiveCollider_ctor((ActiveCollider *)(a1 + 7208));
  ActiveCollider_ctor((ActiveCollider *)(a1 + 7512));
  ActiveCollider_ctor((ActiveCollider *)(a1 + 7816));
  ActiveCollider_ctor((ActiveCollider *)(a1 + 8120));
  ActiveCollider_ctor((ActiveCollider *)(a1 + 8424));
  ActiveCollider_ctor((ActiveCollider *)(a1 + 8728));
  ActiveCollider_ctor((ActiveCollider *)(a1 + 9032));
  ActiveCollider_ctor((ActiveCollider *)(a1 + 9336));
  FIELD_U32(a1, 9640) = off_60BE635C;
  return a1;
}
