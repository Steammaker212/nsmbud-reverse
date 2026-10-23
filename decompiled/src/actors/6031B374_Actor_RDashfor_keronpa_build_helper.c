/* Actor_RDashfor_keronpa_build_helper
 * address: 0x6031B374   size: 340   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall Actor_RDashfor_keronpa_build_helper(int a1, ActorBuildInfo *a2)
{
  int v3; // r5
  int v4; // r2
  int v5; // r3
  int v6; // r3
  int v7; // r2
  int v8; // r6

  Enemy__ctor((Enemy *)a1, a2);
  *(_DWORD *)a1 = off_60BEA6E8;
  sub_6000BAC8((_DWORD *)(a1 + 6300), FIELD_U32(a1, 8));
  FIELD_U32(a1, 6300) = off_60BEA6B4;
  v3 = 0;
  FIELD_U32(a1, 6336) = 0;
  FIELD_U32(a1, 6348) = 0;
  FIELD_U32(a1, 6344) = 0;
  FIELD_U32(a1, 6340) = 0;
  FIELD_U32(a1, 6864) = 0;
  FIELD_U32(a1, 7124) = 0;
  sub_601531B4((CollisionMgr *)(a1 + 7128));
  EffectWrapper_ctor((EffectWrapper *)(a1 + 12480));
  FIELD_U32(a1, 12480) = off_60BC1450;
  FIELD_U32(a1, 12608) = 0;
  FIELD_U8(a1, 12604) = 0;
  FIELD_U32(a1, 12600) = 0;
  FIELD_U32(a1, 12596) = 0;
  FIELD_U32(a1, 12592) = 0;
  FIELD_U32(a1, 12588) = 0;
  FIELD_U32(a1, 12584) = 0;
  ActiveCollider_ctor((ActiveCollider *)(a1 + 12612));
  FIELD_U32(a1, 12916) = off_60BEA9E0;
  LightSource__ctor((LightSource *)(a1 + 12920));
  FIELD_U32(a1, 6336) = 0;
  FIELD_U32(a1, 6340) = 0;
  FIELD_U32(a1, 6344) = 0;
  FIELD_U32(a1, 6348) = 0;
  v4 = a1 + 6360;
  do
  {
    v5 = v4 + v3;
    *(_DWORD *)(v5 - 8) = 0;
    *(_DWORD *)(v5 - 4) = 0;
    *(_DWORD *)(v4 + v3) = 0;
    v3 += 16;
    FIELD_U32(v5, 4) = 0;
  }
  while ( v3 != 512 );
  v6 = 0;
  v7 = a1 + 6876;
  do
  {
    v8 = v7 + v6;
    *(_DWORD *)(v8 - 8) = 0;
    *(_DWORD *)(v8 - 4) = 0;
    *(_DWORD *)(v7 + v6) = 0;
    v6 += 16;
    FIELD_U32(v8, 4) = 0;
  }
  while ( v6 != 256 );
  return a1;
}
