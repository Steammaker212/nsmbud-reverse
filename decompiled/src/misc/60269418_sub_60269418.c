/* sub_60269418
 * address: 0x60269418   size: 212   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60269418(int a1)
{
  float v2; // r1
  float v3; // r2
  float v4; // s2
  Vec3 v6; // [sp+8h] [bp-18h] BYREF

  ActorScaler_execute((ActorScaler *)(a1 + 6312));
  StateMgr__execute((StateMgr *)(a1 + 6084));
  v2 = FIELD_F32(a1, 112);
  v3 = FIELD_F32(a1, 116);
  v6.x = FIELD_F32(a1, 108);
  v6.y = v2;
  v6.z = v3;
  v4 = FIELD_F32(dword_60CC6484, 112);
  if ( v6.x >= (float)(v4 + -128.0) && v6.x <= (float)((float)(v4 + FIELD_F32(dword_60CC6484, 104)) + 128.0) )
  {
    v6.z = 4500.0;
    EffectWrapper_update((EffectWrapper *)(a1 + 6808), 655, &v6, 0, 0);
  }
  sub_60268E04(a1);
  if ( FIELD_U8(a1, 6970) != 1 )
    StageActor__cullCheck((StageActor *)a1, 0);
  return 1;
}
