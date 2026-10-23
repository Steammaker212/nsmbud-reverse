/* sub_60631EB0
 * address: 0x60631EB0   size: 304   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60631EB0(int a1, float *a2, int a3, float a4)
{
  float v5; // s0
  float v6; // s2
  signed int v7; // r3
  float v8; // s4
  int v9; // r12
  float *v10; // r0
  float *v11; // r0
  int v12; // s2
  int result; // r0
  SolidOnTopColliderInfo info; // [sp+8h] [bp-48h] BYREF
  float v15[4]; // [sp+20h] [bp-30h] BYREF
  int v16; // [sp+30h] [bp-20h] BYREF

  v5 = a4 + 16.0;
  v6 = v5 + -8.0;
  if ( FIELD_U8(a1, 6570) )
  {
    v7 = 2;
    v8 = 8.0;
    v9 = 1;
    v10 = v15;
    v5 = v6 + 4.0;
    v6 = -(float)(v6 + 4.0);
  }
  else
  {
    v7 = 4;
    v9 = 3;
    v15[0] = -v5;
    v15[1] = 0.0;
    v15[2] = -v6;
    v8 = 0.0;
    v15[3] = 8.0;
    v10 = (float *)&v16;
  }
  *v10 = v6;
  v10[1] = 8.0;
  v11 = &v15[2 * v9];
  *v11 = v5;
  v11[1] = v8;
  *(float *)&v12 = a2[1] - FIELD_F32(a1, 112);
  info.field_0 = *a2 - FIELD_F32(a1, 108);
  info.field_4 = v12;
  info.field_8 = 0;
  info.field_C = 0.0;
  info.points = (Vec2 *)v15;
  info.rotation = a3;
  SolidOnTopCollider_init2((SolidOnTopCollider *)(a1 + 6104), (StageActor *)a1, &info, v7, 0);
  sub_60160630((ColliderBase *)(a1 + 6104), 2);
  result = FIELD_U8(dword_60CC6D8C, 17);
  if ( FIELD_U8(dword_60CC6D8C, 17) )
  {
    result = FIELD_U8(a1, 26);
    if ( (result & 1) != 0 )
    {
      FIELD_U32(a1, 6328) = 4;
      return 6328;
    }
  }
  return result;
}
