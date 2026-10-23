/* sub_6015CB9C
 * address: 0x6015CB9C   size: 416   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6015CB9C(int a1, int a2, _BYTE *a3, __int64 *a4)
{
  float *v7; // r0
  float v8; // s0
  int result; // r0
  char v10; // r12
  int v11; // r4
  int v12; // r1
  __int64 v13; // r2
  int (__fastcall ***v14)(_DWORD, int *); // r6
  bool v15; // zf
  float v16[8]; // [sp+10h] [bp-20h] BYREF

  v7 = *(float **)(a2 + 152);
  v8 = (float)(v7[1] + FIELD_F32(a2, 176)) + FIELD_F32(a2, 192);
  v16[0] = (float)(*v7 + FIELD_F32(a2, 172)) + FIELD_F32(a2, 188);
  v16[1] = v8;
  result = (*(int (__fastcall **)(_BYTE *))(*(_DWORD *)a3 + 28))(a3);
  v11 = result;
  v12 = FIELD_U8(result, 84);
  if ( v12 == 255 )
    return result;
  v13 = *a4;
  v14 = *(int (__fastcall ****)(_DWORD, int *))(a2 + 144);
  if ( !v14 )
  {
    if ( (a3[2544] & 8) != 0 )
      ((void (__fastcall *)(int, int, float *, _DWORD, _DWORD))sub_60584938)(
        dword_60CAF15C,
        result,
        v16,
        (char)v12,
        **(unsigned __int8 **)(a2 + 160));
    goto LABEL_15;
  }
  v15 = BYTE2(v13) == 0;
  if ( BYTE2(v13) )
    v15 = BYTE2(v13) == 2;
  if ( v15 )
  {
    SE_OBJ_GET_COIN_ref_2(dword_60CAF15C, result, v16, (char)v12, v13, HIDWORD(v13));
    goto LABEL_15;
  }
  if ( BYTE2(v13) != 1 )
  {
LABEL_15:
    FIELD_U8(a2, 220) = 1;
    result = FIELD_U32(a2, 140) | 1;
    FIELD_U32(a2, 140) = result;
    return result;
  }
  FIELD_U8(a2, 220) = 1;
  FIELD_U32(a2, 140) |= 1u;
  if ( ((unsigned int)&dword_60C88A50 & ~(1612041296 << v10) & 1) == 0 && _cxa_guard_acquire(&dword_60C88A50) )
  {
    dword_60C88A4C = (int)&off_60BC00C8;
    _cxa_guard_release(&dword_60C88A50);
  }
  result = (**v14)(v14, &dword_60C88A4C);
  if ( result == 1 )
    return sub_606C8408(v14, v11);
  return result;
}
