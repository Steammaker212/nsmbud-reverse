/* sub_6015CD5C
 * address: 0x6015CD5C   size: 296   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6015CD5C(int a1, int a2, int a3, int a4)
{
  char v4; // r12
  int (__fastcall ***v7)(_DWORD, int *); // r6
  int v8; // r0
  int v9; // r3
  float *v10; // r0
  float v11; // s0
  float v12; // s6
  float v13; // s10
  int result; // r0
  float v15[6]; // [sp+8h] [bp-18h] BYREF

  v7 = *(int (__fastcall ****)(_DWORD, int *))(a2 + 144);
  if ( v7 )
  {
    if ( ((unsigned int)&dword_60C88A58 & ~(1612041608 << v4) & 1) == 0 && _cxa_guard_acquire(&dword_60C88A58) )
    {
      dword_60C88A54 = (int)&off_60BD48EC;
      _cxa_guard_release(&dword_60C88A58);
    }
    if ( (**v7)(v7, &dword_60C88A54) == 1 )
    {
      v8 = (*(int (__fastcall **)(int, int, int))(*(_DWORD *)a3 + 32))(a3, a2, 2);
      sub_60589E88(v7, FIELD_U32(v8, 8), a3);
    }
  }
  else
  {
    v9 = FIELD_U8(a4, 2);
    if ( (v9 | 1) == 1 )
    {
      v10 = *(float **)(a2 + 152);
      v11 = FIELD_F32(a2, 176);
      v12 = FIELD_F32(a2, 192);
      v13 = v10[1];
      v15[0] = (float)(*v10 + FIELD_F32(a2, 172)) + FIELD_F32(a2, 188);
      v15[1] = (float)(v13 + v11) + v12;
      ((void (__fastcall *)(int, float *, _DWORD, int, int))sub_6058262C)(dword_60CAF15C, v15, 0, v9, a3);
    }
  }
  result = FIELD_U32(a2, 140) | 0x20;
  FIELD_U32(a2, 140) = result;
  return result;
}
