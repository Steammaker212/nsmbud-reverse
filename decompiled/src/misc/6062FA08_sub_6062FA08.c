/* sub_6062FA08
 * address: 0x6062FA08   size: 276   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6062FA08(_DWORD *a1, int a2)
{
  float v4; // s0
  float v5; // s6
  float v6; // s4
  float v7; // s8
  float v8; // s16
  float v9; // s18
  int v10; // r1
  int result; // r0
  int v12; // r7
  unsigned int v13; // r6
  _DWORD v14[21]; // [sp+4h] [bp-54h] BYREF

  v4 = *(float *)a2;
  v5 = FIELD_F32(dword_60CC6484, 120);
  v6 = FIELD_F32(dword_60CC6484, 112);
  v7 = FIELD_F32(dword_60CC6484, 124);
  a1[1531] = ((unsigned __int8)a1[1531] + 1) & 3;
  v8 = (float)(v5 * (float)(1.0 - v4)) + (float)(v6 * v4);
  v9 = v7 + 16.0;
  v10 = sub_6062FB30(a1, v8, v7 + 16.0, 1500.0);
  result = 0;
  if ( v10 == 1 )
  {
    v12 = FIELD_U32(a2, 8);
    v13 = a1[5];
    memset(&v14[1], 0, 40);
    v14[0] = dword_60B06AFC[2 * v12] | (16 * dword_60B06AFC[2 * v12 + 1]) | (v13 >> 8) & 0x3000;
    v14[2] = a1[2];
    v14[3] = Profile__get(0x23Eu);
    *(float *)&v14[4] = v8;
    *(float *)&v14[5] = v9;
    v14[6] = 1153138688;
    sub_600080BC((_DWORD *)ActorMgr__instance, v14);
    return 1;
  }
  return result;
}
