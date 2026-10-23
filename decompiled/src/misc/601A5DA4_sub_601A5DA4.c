/* sub_601A5DA4
 * address: 0x601A5DA4   size: 132   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601A5DA4(int a1)
{
  int result; // r0
  _DWORD *v3; // r0
  int v4; // r1
  _DWORD *v5; // r0
  int *v6; // r1
  unsigned int v7; // r2
  unsigned int v8; // r0
  _DWORD v9[4]; // [sp+0h] [bp-10h] BYREF

  result = FIELD_U8(a1, 368);
  if ( result == 5 )
  {
    v3 = *(_DWORD **)(a1 + 408);
    v4 = FIELD_U32(a1, 412);
    v9[0] = &sead__SafeStringBase__vtable;
    v9[1] = "wait2";
    sub_60421938(v3, v4, (int)v9);
    v5 = *(_DWORD **)(a1 + 408);
    v6 = (int *)v5[3];
    v7 = v5[2];
    v8 = v5[17];
    if ( v7 > v8 )
      v6 += v8;
    result = *v6;
    FIELD_U32(result, 20) = 1110179840;
    FIELD_U32(result, 28) |= 2u;
  }
  return result;
}
