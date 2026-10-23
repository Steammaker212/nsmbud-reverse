/* sub_60756E58
 * address: 0x60756E58   size: 124   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60756E58(int a1)
{
  int result; // r0
  int v3; // r1
  int v4; // r5
  int v5; // [sp+4h] [bp-44h] BYREF
  float32x2_t v6[8]; // [sp+8h] [bp-40h] BYREF

  result = FIELD_U32(a1, 300);
  if ( result == 5 )
  {
    v3 = FIELD_U32(a1, 372);
    if ( v3 >= 0 )
    {
      v4 = **(_DWORD **)(a1 + 24);
      sub_604302C8(v4, v3, (int)v6);
      v5 = -FIELD_U32(a1, 484);
      Mtx34_rotateX(v6, (unsigned int *)&v5);
      return (*(int (__fastcall **)(int, _DWORD, float32x2_t *, int *))(*(_DWORD *)v4 + 96))(
               v4,
               FIELD_U32(a1, 372),
               v6,
               &dword_60B3B98C);
    }
  }
  return result;
}
