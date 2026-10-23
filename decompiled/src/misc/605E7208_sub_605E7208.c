/* sub_605E7208
 * address: 0x605E7208   size: 376   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall sub_605E7208(int a1)
{
  float v2; // s2
  int v3; // s0
  float v4; // s2
  float v5; // s12
  float v6; // s4
  float v7; // s6
  float v8; // s8
  float v9; // s10
  Vec3 a3; // [sp+14h] [bp-1Ch] BYREF

  StateMgr__execute((StateMgr *)(a1 + 6084));
  sub_605E7054(a1);
  if ( FIELD_U32(a1, 6248) == 2 )
  {
    a3.x = FIELD_F32(a1, 108) + FIELD_F32(a1, 572);
    a3.y = FIELD_F32(a1, 112) + FIELD_F32(a1, 576);
    a3.z = FIELD_F32(a1, 116) + FIELD_F32(a1, 580);
    LightSource_update1((LightSource *)(a1 + 6172), 9, &a3, 0, 0, 0, 0, 0, 0);
    LightSource_unkUpdate3((LightSource *)(a1 + 6172));
  }
  if ( FIELD_U8(a1, 6244) )
  {
    v2 = FIELD_F32(a1, 6268) + FIELD_F32(a1, 6264);
    v3 = 1098907648;
    FIELD_F32(a1, 6264) = v2;
    if ( v2 >= 16.0 )
    {
      v3 = LODWORD(v2);
      if ( v2 > 200.0 )
        v3 = 1128792064;
    }
    FIELD_U32(a1, 6264) = v3;
    v4 = FIELD_F32(a1, 572);
    v5 = FIELD_F32(a1, 108);
    v6 = FIELD_F32(a1, 576);
    v7 = FIELD_F32(a1, 580);
    v8 = FIELD_F32(a1, 112);
    v9 = FIELD_F32(a1, 116);
    FIELD_U32(a1, 6136) = v3;
    FIELD_F32(a1, 6144) = v5 + v4;
    FIELD_F32(a1, 6148) = v8 + v6;
    FIELD_F32(a1, 6152) = v9 + v7;
    LightMask__update((LightMask *)(a1 + 6132));
  }
  StageActor__cullCheck((StageActor *)a1, 4);
  return 1;
}
