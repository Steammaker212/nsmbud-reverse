/* sub_60387FB8
 * address: 0x60387FB8   size: 340   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60387FB8(int a1)
{
  int v2; // r0
  unsigned int v3; // r0
  int v4; // r0
  float v5; // r1
  float v6; // s2
  float v7; // r0
  float v8; // s0
  float v9; // s0
  Vec2 v11[3]; // [sp+0h] [bp-18h] BYREF

  FIELD_U8(a1, 6693) = 1;
  v2 = FIELD_U32(a1, 6304);
  LODWORD(v11[0].x) = &sead__SafeStringBase__vtable;
  LODWORD(v11[0].y) = "ready";
  sub_6040F4B8(v2, v11, 1);
  FIELD_U32(a1, 120) = 0;
  FIELD_U32(a1, 124) = 0;
  FIELD_U32(a1, 128) = 0;
  FIELD_U32(a1, 132) = 0;
  FIELD_U32(a1, 136) = 0;
  FIELD_U32(a1, 140) = 0;
  v3 = StageActor__distanceToPlayer((StateActor *)a1, v11);
  if ( v3 != -1 )
  {
    FIELD_U32(a1, 8128) = v3;
    if ( v3 >= 4 )
      v3 = 0;
    v4 = *(_DWORD *)(PlayerMgr_instance + 4 * v3 + 32);
    if ( v4 )
    {
      v5 = FIELD_F32(v4, 108);
      FIELD_F32(a1, 8144) = v5;
      v6 = v5;
      v7 = FIELD_F32(v4, 112);
      FIELD_F32(a1, 8148) = v7;
      v8 = v7;
      FIELD_U32(a1, 8152) = FIELD_U32(a1, 116);
    }
    else
    {
      v8 = FIELD_F32(a1, 8148);
      v6 = FIELD_F32(a1, 8144);
    }
    v9 = v8 - (float)(FIELD_F32(a1, 112) + -48.0);
    FIELD_F32(a1, 8156) = v6 - FIELD_F32(a1, 108);
    FIELD_F32(a1, 8160) = v9;
  }
  FIELD_U32(a1, 6684) = 1099431936;
  FIELD_U32(a1, 6688) = 0;
  return (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 640))(a1);
}
