/* sub_602C48E8
 * address: 0x602C48E8   size: 140   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_BYTE *__fastcall sub_602C48E8(int a1)
{
  int *v1; // r1
  _DWORD *v2; // r2
  int v3; // r3
  unsigned int v4; // r12
  unsigned int v5; // r2
  _BYTE *result; // r0
  int v7; // t1
  int v8; // r0
  _DWORD v9[4]; // [sp+0h] [bp-10h] BYREF

  v1 = (int *)(a1 + 6304);
  v2 = *(_DWORD **)(a1 + 6304);
  v3 = v2[3];
  v4 = v2[2];
  v5 = v2[17];
  if ( v4 > v5 )
    v3 += 4 * v5;
  *(_DWORD *)(*(_DWORD *)v3 + 24) = 1065353216;
  v7 = FIELD_U8(a1, 6334);
  result = (_BYTE *)(a1 + 6334);
  if ( v7 == 2 )
  {
    *result = 0;
    v8 = *v1;
    v9[0] = &sead__SafeStringBase__vtable;
    v9[1] = "dead";
    return (_BYTE *)sub_60421AE4(v8, v9, 1);
  }
  return result;
}
