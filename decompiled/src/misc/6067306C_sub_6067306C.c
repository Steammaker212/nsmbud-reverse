/* sub_6067306C
 * address: 0x6067306C   size: 208   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6067306C(int a1, int a2, int a3)
{
  int v5; // r6
  int result; // r0
  int v7; // r0
  int v8; // t1
  unsigned int v9; // r1
  bool v10; // zf
  int v11; // r0
  int v12; // r1
  int v13; // t1
  int v14; // r2

  v5 = (*(int (__fastcall **)(int, int))(*(_DWORD *)a2 + 32))(a2, a1);
  result = FIELD_U8(v5, 533);
  if ( result != 3 )
  {
    if ( result != 1 )
      return result;
    v7 = FIELD_U32(a1, 144);
    v8 = FIELD_S8(v7, 7625);
    result = v7 + 7625;
    v9 = v8 + byte_60AFD9A0[a3];
    goto LABEL_4;
  }
  result = (*(int (__fastcall **)(int))(*(_DWORD *)v5 + 80))(v5);
  v10 = (FIELD_U8(result, 2528) & 0x40) == 0;
  if ( (FIELD_U8(result, 2528) & 0x40) != 0 )
  {
    result = FIELD_U8(result, 2536);
    v10 = (result & 0x40) == 0;
  }
  if ( !v10 )
  {
    v11 = FIELD_U32(a1, 144);
    v13 = FIELD_S8(v11, 7625);
    result = v11 + 7625;
    v12 = v13;
    v14 = 32;
    if ( (float)(FIELD_F32(v5, 112) + FIELD_F32(v5, 576)) < *(float *)(result - 7513) )
      v14 = -32;
    if ( a3 == 1 )
      v14 = -v14;
    v9 = v14 + v12;
LABEL_4:
    *(_BYTE *)result = __ssat(8u, v9);
  }
  return result;
}
