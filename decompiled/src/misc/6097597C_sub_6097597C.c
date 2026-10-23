/* sub_6097597C
 * address: 0x6097597C   size: 264   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6097597C(int a1, int a2)
{
  int result; // r0
  int *v5; // r6
  int v6; // r2
  unsigned int v7; // r6
  int v8; // r7
  unsigned int v9; // r3
  _DWORD v10[17]; // [sp+14h] [bp-44h] BYREF

  result = FIELD_U32(a1, 3616);
  if ( result )
  {
    v5 = (int *)(a1 + 8);
    sub_60958528((int)v10, a2, FIELD_U8(a1, 4), FIELD_U32(a1, 8));
    v10[0] = FIELD_U8(a1, 4);
    result = FIELD_U32(a1, 3616);
    if ( (FIELD_U8(result, 32) & 1) != 0 )
      result = (**(int (__fastcall ***)(int, _DWORD *))(result + 36))(result + 36, v10);
  }
  else
  {
    v5 = (int *)(a1 + 8);
  }
  v6 = *v5;
  if ( *v5 )
  {
    if ( (FIELD_U8(a1, 2352) & 0x80) != 0 )
    {
      v7 = FIELD_U32(a1, 2376);
      v8 = FIELD_U32(v6, 60);
      sub_6090B260(v6);
      v9 = v7 & 0xFFFFFFFD;
      if ( v8 )
        v9 = v7;
      sub_6091A804(FIELD_U32(a1, 8), a2, 0, v9, FIELD_F32(a1, 2396), a1 + 2380, FIELD_U32(a1, 2400), a1 + 2328);
    }
    else
    {
      sub_6090E560(a1 + 2328, a2, (float *)v6);
    }
    result = FIELD_U8(a1, 2404);
    if ( FIELD_U8(a1, 2404) )
    {
      FIELD_U8(a1, 2404) = 0;
      return 0;
    }
  }
  return result;
}
