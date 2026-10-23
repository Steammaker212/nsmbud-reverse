/* sub_603CE08C
 * address: 0x603CE08C   size: 324   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_603CE08C(int a1)
{
  int v2; // r6
  float v3; // s2
  float v4; // s4
  int v5; // s16
  float v6; // s18
  int v7; // r6
  _BYTE *v8; // r0
  TileCheck_Result v10; // [sp+8h] [bp-B0h] BYREF
  TileCheck v11; // [sp+30h] [bp-88h] BYREF
  TileCheck_Param v12; // [sp+7Ch] [bp-3Ch] BYREF
  Vec2 positionOffset; // [sp+88h] [bp-30h] BYREF
  Vec2 a3; // [sp+90h] [bp-28h] BYREF

  v2 = 0;
  v3 = FIELD_F32(dword_60CC6484, 112);
  v4 = FIELD_F32(dword_60CC6484, 132);
  *(_WORD *)&v12.field_0 = 0;
  *(float *)&v5 = v3 + -48.0;
  a3.x = v3 + -48.0;
  positionOffset.x = v3 + -48.0;
  a3.y = v4 + 48.0;
  positionOffset.y = v4 + -96.0;
  v12.field_2 = FIELD_U8(a1, 86);
  v12.field_3 = FIELD_U8(a1, 87);
  v12.field_4 = 0;
  v12.field_8 = 0;
  TileCheck_ctor(&v11, &v12);
  v10.field_C = 0;
  v10.field_10 = 0;
  if ( TileCheck_check(&v11, &v10, &a3, &positionOffset, 8) == 1 )
  {
    v6 = v10.field_8;
    v7 = FIELD_U32(a1, 20);
    memset(&v11.field_4, 0, 40);
    *(_DWORD *)&v11.field_0 = v7 & 0xF1 | 0x100;
    v11.field_8 = FIELD_U32(a1, 8);
    v11.field_C = (int)Profile__get(0x1FEu);
    v11.field_10 = v5;
    v2 = 0;
    *(float *)&v11.field_14 = v6 + 16.0;
    v11.field_18 = 1153138688;
    v8 = ActorMgr__create((void *)ActorMgr__instance, (ActorBuildInfo *)&v11, 0);
    if ( v8 )
    {
      v2 = 1;
      FIELD_U32(a1, 6104) = *((_DWORD *)v8 + 2);
    }
  }
  return v2;
}
