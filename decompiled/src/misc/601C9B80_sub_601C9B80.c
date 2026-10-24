/* sub_601C9B80
 * address: 0x601C9B80   size: 856   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_601C9B80(int a1)
{
  float v2; // s2
  StateMethodExecuter *result; // r0
  float v4; // s20
  float v5; // s18
  float v6; // s22
  float v7; // s16
  float v8; // s0
  float v9; // s0
  int v10; // r7
  int v11; // r2
  int v12; // r3
  int v13; // r0
  int v14; // r5
  char v15; // r12
  _DWORD *i; // r6
  float *v17; // r0
  float v18; // s16
  float v19; // s18
  float v20; // s20
  double v21; // d0
  float v22; // s2
  int v23; // r5
  unsigned int *v24; // r0

  v2 = FIELD_F32(a1, 292);
  FIELD_F32(a1, 128) = v2 + FIELD_F32(a1, 128);
  FIELD_F32(a1, 132) = v2 + FIELD_F32(a1, 132);
  FIELD_F32(a1, 136) = v2 + FIELD_F32(a1, 136);
  result = (StateMethodExecuter *)sub_601C6BF0(a1);
  v4 = *(float *)&FIELD_U32(result + (4) * 12, 0x8);
  v5 = FIELD_F32(a1, 960) - FIELD_F32(a1, 84);
  v6 = FIELD_F32(a1, 956) - FIELD_F32(a1, 80);
  v7 = FIELD_F32(a1, 964) - FIELD_F32(a1, 88);
  v8 = sqrtf((float)((float)(v5 * v5) + (float)(v6 * v6)) + (float)(v7 * v7));
  if ( v8 <= v4 )
  {
    v10 = a1 + 956;
    v11 = FIELD_U32(a1, 960);
    v12 = FIELD_U32(a1, 964);
    FIELD_U32(a1, 80) = FIELD_U32(a1, 956);
    FIELD_U32(a1, 84) = v11;
    FIELD_U32(a1, 88) = v12;
    v13 = *((_DWORD *)sub_601C6BF0(a1) + 1);
    FIELD_U32(a1, 128) = v13;
    FIELD_U32(a1, 132) = v13;
    FIELD_U32(a1, 136) = v13;
    FIELD_U8(a1, 553) = 0;
    v14 = FIELD_U32(a1, 288);
    if ( v14 == *((__int16 *)sub_601C6BF0(a1) + 24) )
    {
      for ( i = (_DWORD *)a1;
            ;
            sub_601BC5FC(i, FIELD_U32(a1, 1228), (_DWORD *)(a1 + 1032), (_DWORD *)(a1 + 1044), 3, 0, 0, 0, 0, 0) )
      {
        i = (_DWORD *)i[68];
        if ( ((unsigned int)&dword_60C8AB28 & ~(1612487984 << v15) & 1) == 0 && _cxa_guard_acquire(&dword_60C8AB28) )
        {
          dword_60C8AB24 = (int)&off_60BD4BBC;
          _cxa_guard_release(&dword_60C8AB28);
        }
        if ( !i || (*(int (__fastcall **)(_DWORD *, int *))*i)(i, &dword_60C8AB24) != 1 )
          break;
      }
      ++FIELD_U32(a1, 1228);
      v10 = a1 + 956;
    }
    result = *(StateMethodExecuter **)(a1 + 288);
    FIELD_U32(a1, 288) = (char *)result - 1;
    if ( (int)result <= 0 )
    {
      FIELD_U32(a1, 1120) |= 1u;
      sub_6019EC34((_DWORD *)(a1 + 1044), (_DWORD *)(a1 + 1020));
      v17 = (float *)sub_601E0040(a1 + 1032);
      v18 = *v17;
      v19 = v17[1];
      v20 = v17[2];
      v21 = sub_6019B6EC(FIELD_U32(a1, 1092));
      FIELD_F32(a1, 956) = v18 + (float)(60.0 * *(float *)&v21);
      FIELD_F32(a1, 960) = v19 + (float)(60.0 * *((float *)&v21 + 1));
      FIELD_F32(a1, 964) = v20 + (float)(60.0 * v22);
      FIELD_U32(a1, 1120) |= 0x20u;
      sub_601D55A4(a1, 0, 7, v10);
      sub_6019EC34((_DWORD *)(a1 + 1080), (_DWORD *)(a1 + 1032));
      FIELD_U32(a1, 1108) = FIELD_U32(a1, 1092);
      sub_6019EC34((_DWORD *)(dword_60CC6D78 + 480), (_DWORD *)(a1 + 1032));
      FIELD_U32(dword_60CC6D78, 492) = FIELD_U32(a1, 1092);
      FIELD_U32(a1, 1120) &= ~0x10u;
      sub_601C6F70(a1);
      sub_601C6C14((_DWORD *)a1, a1 + 1032, FIELD_U32(a1, 1092));
      v23 = dword_60C88BC8;
      v24 = sub_601C6F34((_DWORD *)a1);
      sub_6017113C(v23, (_DWORD *)(a1 + 1032), v24);
      return sub_601B1FA4(a1, (StateBase *)&dword_60C8A950);
    }
  }
  else
  {
    v9 = 1.0 / v8;
    FIELD_F32(a1, 80) = FIELD_F32(a1, 80) + (float)(v4 * (float)(v6 * v9));
    FIELD_F32(a1, 84) = FIELD_F32(a1, 84) + (float)(v4 * (float)(v5 * v9));
    FIELD_F32(a1, 88) = FIELD_F32(a1, 88) + (float)(v4 * (float)(v7 * v9));
  }
  return result;
}
