/* sub_601C983C
 * address: 0x601C983C   size: 608   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_601C983C(int a1)
{
  StateMethodExecuter *result; // r0
  int v3; // r0
  int v4; // r0
  int *v5; // r1
  bool v6; // zf
  int v7; // r0
  char v8; // r12
  float v9; // s20
  float v10; // s18
  float v11; // s22
  float v12; // s16
  float v13; // s0
  float v14; // s0
  _DWORD *v15; // r6
  int v16; // r3
  int v17; // r0
  _DWORD v18[21]; // [sp+2Ch] [bp-54h] BYREF

  result = *(StateMethodExecuter **)(a1 + 288);
  FIELD_U32(a1, 288) = (char *)result - 1;
  if ( (int)result <= 0 )
  {
    v3 = FIELD_U32(a1, 1124);
    if ( v3 >= 2 )
    {
      FIELD_U32(a1, 1124) = v3 - 1;
      v4 = sub_601C46E4(a1);
      v5 = dword_601C9A9C;
      v6 = v4 == 5;
      v7 = FIELD_U32(a1, 1124);
      if ( v6 )
        v5 = &dword_601C9A9C[1];
      if ( v7 <= 1 )
        v7 = 1;
      FIELD_F32(a1, 296) = FIELD_F32(a1, 296)
                           + (float)((float)(*(float *)v5 - FIELD_F32(a1, 296)) * (float)(1.0 / (float)v7));
    }
    result = (StateMethodExecuter *)sub_601C6BF0(a1);
    v9 = *(float *)&FIELD_U32(result + (4) * 12, 0x8);
    v10 = FIELD_F32(a1, 960) - FIELD_F32(a1, 84);
    v11 = FIELD_F32(a1, 956) - FIELD_F32(a1, 80);
    v12 = FIELD_F32(a1, 964) - FIELD_F32(a1, 88);
    v13 = sqrtf((float)((float)(v10 * v10) + (float)(v11 * v11)) + (float)(v12 * v12));
    if ( v13 <= v9 )
    {
      v15 = (_DWORD *)a1;
      v16 = FIELD_U32(a1, 960);
      v17 = FIELD_U32(a1, 964);
      FIELD_U32(a1, 80) = FIELD_U32(a1, 956);
      FIELD_U32(a1, 84) = v16;
      FIELD_U32(a1, 88) = v17;
      memset(v18, 255, 12);
      while ( 1 )
      {
        v15 = (_DWORD *)v15[68];
        if ( ((unsigned int)&dword_60C8AB28 & ~(1612487192 << v8) & 1) == 0 && _cxa_guard_acquire(&dword_60C8AB28) )
        {
          dword_60C8AB24 = (int)&off_60BD4BBC;
          _cxa_guard_release(&dword_60C8AB28);
        }
        if ( !v15 || (*(int (__fastcall **)(_DWORD *, int *))*v15)(v15, &dword_60C8AB24) != 1 )
          break;
        sub_601BC5FC(v15, FIELD_U32(a1, 1228), v18, (_DWORD *)(a1 + 1032), 2, 0, 0, 0, 0, 0);
      }
      ++FIELD_U32(a1, 1228);
      FIELD_U8(a1, 216) |= 2u;
      return sub_601B1FA4(a1, (StateBase *)&dword_60C8AA70);
    }
    else
    {
      v14 = 1.0 / v13;
      FIELD_F32(a1, 80) = FIELD_F32(a1, 80) + (float)(v9 * (float)(v11 * v14));
      FIELD_F32(a1, 84) = FIELD_F32(a1, 84) + (float)(v9 * (float)(v10 * v14));
      FIELD_F32(a1, 88) = FIELD_F32(a1, 88) + (float)(v9 * (float)(v12 * v14));
    }
  }
  return result;
}
