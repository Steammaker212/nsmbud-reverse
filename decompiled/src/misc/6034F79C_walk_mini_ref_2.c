/* walk_mini_ref_2
 * address: 0x6034F79C   size: 124   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall walk_mini_ref_2(int a1)
{
  _DWORD *v2; // r0
  int *v3; // r1
  unsigned int v4; // r2
  unsigned int v5; // r0
  int result; // r0
  _DWORD v7[4]; // [sp+0h] [bp-10h] BYREF

  v7[0] = &sead__SafeStringBase__vtable;
  v7[1] = "walk_mini";
  sub_603407D0(a1, (int)v7, 1);
  v2 = *(_DWORD **)(a1 + 6304);
  v3 = (int *)v2[3];
  v4 = v2[2];
  v5 = v2[17];
  if ( v4 > v5 )
    v3 += v5;
  result = *v3;
  FIELD_U32(result, 20) = 1110704128;
  FIELD_U32(result, 28) |= 2u;
  return result;
}
