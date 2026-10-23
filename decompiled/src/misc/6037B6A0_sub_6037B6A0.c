/* sub_6037B6A0
 * address: 0x6037B6A0   size: 360   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6037B6A0(int a1)
{
  unsigned __int8 *v2; // r6
  int result; // r0
  float v4; // s4
  float v5; // s0
  float v6; // s2
  float *v7; // r5
  float v8; // s6
  float *v9; // r7
  signed int v10; // [sp+4h] [bp-24h] BYREF
  signed int v11; // [sp+8h] [bp-20h] BYREF
  signed int v12; // [sp+Ch] [bp-1Ch] BYREF

  v2 = (unsigned __int8 *)(a1 + 7648);
  result = sub_606D4384(&v10, FIELD_U8(a1, 7648));
  if ( result )
  {
    if ( sub_606D4384(&v11, *v2) )
    {
      sub_606D45B8(a1 + 7652, a1 + 7632);
      v4 = FIELD_F32(a1, 7632);
      v5 = FIELD_F32(a1, 108);
      v6 = FIELD_F32(a1, 112);
      v7 = (float *)(a1 + 7644);
      v8 = FIELD_F32(a1, 7636);
      v9 = (float *)(a1 + 7640);
      FIELD_F32(a1, 7640) = v5 - v4;
      FIELD_F32(a1, 7644) = v6 - v8;
    }
    else
    {
      v5 = FIELD_F32(a1, 108);
      v6 = FIELD_F32(a1, 112);
      v7 = (float *)(a1 + 7644);
      v9 = (float *)(a1 + 7640);
      v8 = FIELD_F32(a1, 7636);
      v4 = FIELD_F32(a1, 7632);
    }
    FIELD_F32(a1, 7612) = sqrtf(
                              (float)((float)(v5 - v4) * (float)(v5 - v4))
                            + (float)((float)(v6 - v8) * (float)(v6 - v8)))
                          + -32.0;
    sub_606D4384(&v12, *v2);
    sub_606D465C(a1 + 7616, a1 + 7628);
    FIELD_U32(a1, 7660) = sub_6000F7B8(*v9, *v7);
    return (*(int (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C966EC);
  }
  return result;
}
