/* sub_608ADEC0
 * address: 0x608ADEC0   size: 292   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608ADEC0(int *a1, int a2, int *a3)
{
  int v6; // r8
  int v7; // r9
  int v8; // r0
  int v9; // r7
  void *v10; // r0
  unsigned int v11; // r0
  unsigned int v12; // r1
  int result; // r0
  int v14; // r1
  _BYTE v15[4]; // [sp+0h] [bp-28h] BYREF
  int v16; // [sp+4h] [bp-24h]

  byte_60C5AF16 = FIELD_U8(a2, 72);
  v6 = *a3;
  if ( byte_60C5AF16 )
  {
    v7 = a3[1];
    v15[0] = FIELD_U8(a2, 93);
    v15[1] = FIELD_U8(a2, 94);
    v16 = FIELD_U32(a2, 96);
    v8 = sub_608C7FF0(v16, &byte_60C5AF16);
    v9 = sub_608C8078(v8, 2 * FIELD_U32(a2, 44), v15);
    v10 = sub_608065A0();
    v11 = (v9 + sub_608B5328(v10, FIELD_U32(a2, 44)) + 4095) & 0xFFFFF000;
    v12 = (*a3 + 4095) & 0xFFFFF000;
    *a1 = v12 + v11;
    a1[1] = v7 + v6 - (v12 + v11);
    a1[2] = v12;
  }
  else
  {
    *a1 = v6;
    a1[1] = a3[1];
    a1[2] = a3[2];
    v11 = a3[3];
  }
  a1[3] = v11;
  if ( FIELD_U8(a2, 73) )
  {
    if ( FIELD_U8(a2, 55) )
    {
      result = sub_608AD5AC(a2);
      v14 = *a1;
      *a1 += result;
      a1[1] -= result;
      a1[4] = v14;
    }
    else
    {
      result = 0;
      a1[4] = 0;
    }
  }
  else
  {
    a1[4] = a3[4];
    result = a3[5];
  }
  a1[5] = result;
  return result;
}
