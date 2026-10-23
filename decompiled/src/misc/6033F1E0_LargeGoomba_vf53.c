/* LargeGoomba_vf53
 * address: 0x6033F1E0   size: 124   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall LargeGoomba_vf53(int a1, int a2, int a3, int a4)
{
  _DWORD *v5; // r0
  int *v6; // r1
  unsigned int v7; // r2
  unsigned int v8; // r0
  int result; // r0
  _DWORD v10[4]; // [sp+0h] [bp-10h] BYREF

  v10[0] = &sead__SafeStringBase__vtable;
  v10[1] = "walk";
  ((void (__fastcall *)(int, _DWORD *, int, int, float))sub_603407D0)(a1, v10, 1, a4, 0.0);
  v5 = *(_DWORD **)(a1 + 6304);
  v6 = (int *)v5[3];
  v7 = v5[2];
  v8 = v5[17];
  if ( v7 > v8 )
    v6 += v8;
  result = *v6;
  FIELD_U32(result, 20) = 1110704128;
  FIELD_U32(result, 28) |= 2u;
  return result;
}
