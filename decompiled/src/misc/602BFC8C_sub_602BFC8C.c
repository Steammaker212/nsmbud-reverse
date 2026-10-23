/* sub_602BFC8C
 * address: 0x602BFC8C   size: 372   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_602BFC8C(int a1)
{
  _BYTE *v2; // r0
  int v3; // r1
  int v4; // t1
  int v5; // r1
  int v6; // r2
  float v7; // s12
  unsigned int v8; // r1
  float *v9; // r2
  float v10; // s14
  float v11; // s0
  float v12; // s10
  int result; // r0
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
  v7 = FIELD_F32(a1, 88);
  v8 = FIELD_U32(a1, 164) + 0x40000000;
  v9 = (float *)((char *)sinLutTable + ((v8 >> 20) & 0xFF0));
  v10 = (float)(v8 & 0xFFFFFF);
  v11 = *v9 + (float)((float)(v10 * v9[1]) * 0.000000059605);
  v12 = FIELD_F32(a1, 108) - (float)(v7 * (float)(v9[2] + (float)((float)(v10 * v9[3]) * 0.000000059605)));
  FIELD_F32(a1, 108) = v12;
  FIELD_F32(a1, 112) = FIELD_F32(a1, 112) - (float)(v7 * v11);
  FIELD_F32(a1, 116) = FIELD_F32(a1, 116) + 0.0;
  if ( v12 < (float)(FIELD_F32(a1, 6420) + -6.0) )
  {
    FIELD_U32(a1, 108) = FIELD_U32(a1, 584);
    FIELD_U32(a1, 112) = FIELD_U32(a1, 588);
  }
  speed = 0x800000;
  moveValueTo((int *)(a1 + 164), (int *)(a1 + 6464), &speed);
  if ( sub_602C22A8(a1, 0.0) == 1 && !sub_602C2494(a1) )
    return (*(int (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C9143C);
  result = sub_602C22A8(a1, 48.0);
  if ( !result )
    return (*(int (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C913DC);
  return result;
}
