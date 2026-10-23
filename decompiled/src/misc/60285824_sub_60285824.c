/* sub_60285824
 * address: 0x60285824   size: 380   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60285824(int a1)
{
  unsigned __int8 *v2; // r6
  int result; // r0
  float v4; // s0
  float v5; // s6
  float v6; // s2
  float v7; // s4
  float v8; // s10
  float *v9; // r7
  float *v10; // r5
  float v11; // s8
  signed int v12; // [sp+4h] [bp-24h] BYREF
  signed int v13; // [sp+8h] [bp-20h] BYREF
  signed int v14; // [sp+Ch] [bp-1Ch] BYREF

  v2 = (unsigned __int8 *)(a1 + 6340);
  result = sub_606D4384(&v12, FIELD_U8(a1, 6340));
  if ( result )
  {
    if ( sub_606D4384(&v13, *v2) )
    {
      sub_606D45B8(a1 + 6344, a1 + 6324);
      v4 = FIELD_F32(a1, 112);
      v5 = FIELD_F32(a1, 576);
      v6 = FIELD_F32(a1, 108);
      v7 = FIELD_F32(a1, 572);
      v8 = FIELD_F32(a1, 6324);
      v9 = (float *)(a1 + 6336);
      v10 = (float *)(a1 + 6332);
      v11 = FIELD_F32(a1, 6328);
      FIELD_F32(a1, 6332) = (float)(v6 + v7) - v8;
      FIELD_F32(a1, 6336) = (float)(v4 + v5) - v11;
    }
    else
    {
      v4 = FIELD_F32(a1, 112);
      v6 = FIELD_F32(a1, 108);
      v7 = FIELD_F32(a1, 572);
      v5 = FIELD_F32(a1, 576);
      v9 = (float *)(a1 + 6336);
      v10 = (float *)(a1 + 6332);
      v11 = FIELD_F32(a1, 6328);
      v8 = FIELD_F32(a1, 6324);
    }
    FIELD_F32(a1, 6348) = sqrtf(
                              (float)((float)((float)(v7 + v6) - v8) * (float)((float)(v7 + v6) - v8))
                            + (float)((float)((float)(v5 + v4) - v11) * (float)((float)(v5 + v4) - v11)));
    sub_606D4384(&v14, *v2);
    sub_606D465C(a1 + 6308, a1 + 6320);
    FIELD_U32(a1, 6352) = sub_6000F7B8(*v10, *v9);
    return (*(int (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C8F158);
  }
  return result;
}
