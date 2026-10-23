/* sub_607C6E18
 * address: 0x607C6E18   size: 324   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall sub_607C6E18(int a1)
{
  float v2; // s16
  int v3; // r5
  float v4; // s18
  float v5; // s20
  float v6; // s22
  float v7; // s16
  int v8; // r1
  unsigned int v9; // r5
  int v10; // r0
  float v12; // [sp+4h] [bp-4Ch] BYREF
  Vec3i v13; // [sp+8h] [bp-48h] BYREF
  Vec3 v14; // [sp+14h] [bp-3Ch] BYREF

  v2 = FIELD_F32(a1, 108);
  v3 = a1 + 1328;
  v4 = FIELD_F32(a1, 112) + FIELD_F32(a1, 576);
  v14.y = v4;
  v5 = FIELD_F32(a1, 116) + FIELD_F32(a1, 580);
  v14.z = v5;
  v6 = flt_60B0A898[FIELD_U32(a1, 80)];
  v7 = v2 - (float)(FIELD_F32(a1, 6888) * v6);
  v14.x = v7;
  if ( !sub_60155B0C(a1 + 1328, (float *)(a1 + 108), 0, 0, v6 * -8.0) )
  {
    *(float *)&v13.x = v7 - (float)(v6 * 8.0);
    *(float *)&v13.y = v4;
    *(float *)&v13.z = v5;
    if ( sub_60155C38(v3, (float *)&v13.x, &v12, 0, 128.0) == 1
      && v12 < (float)(FIELD_F32(a1, 112) + FIELD_F32(a1, 1244)) )
    {
      v14.y = v12;
    }
  }
  v13.x = 0;
  v13.y = 0;
  v8 = -1073741824;
  if ( FIELD_U32(a1, 80) == 1 )
    v8 = 0x40000000;
  v13.z = v8;
  v9 = FIELD_S8(a1, 84);
  v10 = (*(int (__fastcall **)(int, _DWORD))(*(_DWORD *)a1 + 156))(a1, FIELD_U32(a1, 1320));
  return sub_60236E40(v9, dword_60B0CF1C[v10], &v14, &v13, 0);
}
