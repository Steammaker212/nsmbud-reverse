/* sub_6025A764
 * address: 0x6025A764   size: 416   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6025A764(int a1)
{
  char v1; // r12
  _DWORD *v3; // r0
  int v4; // t1
  _DWORD *v5; // r0
  int *v6; // r1
  unsigned int v7; // r2
  unsigned int v8; // r0
  int v9; // r5
  float *v10; // r0
  float v11; // s2
  float v12; // s0
  int v13; // s4
  int v14; // r1

  v4 = FIELD_U32(a1, 6360);
  v3 = (_DWORD *)(a1 + 6360);
  if ( v4 )
  {
    *v3 = 0;
    sub_60421AD4(FIELD_U32(a1, 6352));
  }
  else
  {
    v5 = *(_DWORD **)(a1 + 6352);
    v6 = (int *)v5[3];
    v7 = v5[2];
    v8 = v5[17];
    if ( v7 > v8 )
      v6 += v8;
    v9 = *v6;
    if ( (float)(*(float *)(*v6 + 24) + *(float *)(*v6 + 24)) < 0.0 )
      sub_6041838C((ModelAnimation *)(v9 + 4));
    FIELD_U32(v9, 24) = 0x40000000;
  }
  if ( FIELD_U32(a1, 6444) > 1u )
  {
    v13 = 0;
    v11 = 1.25;
    v12 = -0.75;
  }
  else
  {
    if ( ((unsigned int)&unk_60C8E350 & ~(1613080592 << v1) & 1) == 0 && _cxa_guard_acquire((__guard *)&unk_60C8E350) )
    {
      unk_60C8E380 = 1069547520;
      unk_60C8E384 = 1074790400;
      unk_60C8E388 = 0;
      unk_60C8E38C = 1067869798;
      unk_60C8E390 = 1083179008;
      dword_60C8E394 = 0;
      _cxa_guard_release((__guard *)&unk_60C8E350);
    }
    v10 = (float *)((char *)&unk_60C8E350 + 12 * FIELD_U32(a1, 6448));
    v11 = v10[12];
    v12 = v10[13];
    v13 = *((_DWORD *)v10 + 14);
  }
  v14 = 8;
  FIELD_F32(a1, 120) = v11 * (float)byte_60AFE3F4[FIELD_U32(a1, 80)];
  FIELD_F32(a1, 124) = v12;
  FIELD_U32(a1, 128) = v13;
  FIELD_U32(a1, 100) = -1103101952;
  if ( FIELD_U8(dword_60CC6D8C, 17) )
    v14 = 3;
  FIELD_U32(a1, 6452) = v14;
  FIELD_U32(a1, 6464) = 0;
  return 6464;
}
