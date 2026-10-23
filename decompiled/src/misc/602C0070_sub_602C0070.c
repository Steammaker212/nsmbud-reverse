/* sub_602C0070
 * address: 0x602C0070   size: 312   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_602C0070(int a1)
{
  _BYTE *v2; // r0
  int v3; // r1
  int v4; // t1
  int v5; // r1
  int v6; // r2
  int result; // r0
  float v8; // s10
  unsigned int v9; // r1
  float *v10; // r2
  float v11; // s14
  float v12; // s2
  float v13; // s0
  float v14; // s2
  int speed; // [sp+4h] [bp-Ch] BYREF

  v4 = FIELD_U8(a1, 6485);
  v2 = (_BYTE *)(a1 + 6485);
  v3 = v4;
  if ( v4 )
  {
    v5 = v3 - 1;
    if ( v5 )
      v6 = FIELD_U32(a1, 160) + dword_60C911E4;
    else
      v6 = 0;
    FIELD_U32(a1, 160) = v6;
    *v2 = v5;
  }
  speed = 0x800000;
  result = moveValueTo((int *)(a1 + 164), (int *)(a1 + 6464), &speed);
  v8 = FIELD_F32(a1, 88);
  v9 = FIELD_U32(a1, 164) + 0x40000000;
  v10 = (float *)((char *)sinLutTable + ((v9 >> 20) & 0xFF0));
  v11 = (float)(v9 & 0xFFFFFF);
  v12 = *v10 + (float)((float)(v11 * v10[1]) * 0.000000059605);
  FIELD_F32(a1, 108) = FIELD_F32(a1, 108)
                       + (float)(v8 * (float)(v10[2] + (float)((float)(v11 * v10[3]) * 0.000000059605)));
  v13 = FIELD_F32(a1, 112) + (float)(v8 * v12);
  FIELD_F32(a1, 112) = v13;
  FIELD_F32(a1, 116) = FIELD_F32(a1, 116) + 0.0;
  v14 = FIELD_F32(a1, 6424);
  if ( v13 > v14 )
  {
    v13 = FIELD_F32(a1, 6424);
    FIELD_U32(a1, 108) = FIELD_U32(a1, 6420);
    FIELD_F32(a1, 112) = v14;
  }
  if ( v13 >= v14 )
  {
    result ^= 1u;
    if ( !result )
      return (*(int (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C9141C);
  }
  return result;
}
