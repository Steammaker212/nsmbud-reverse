/* sub_601AF1CC
 * address: 0x601AF1CC   size: 156   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601AF1CC(int a1)
{
  int result; // r0
  int v3; // r5
  bool v4; // zf
  _DWORD *v5; // r0
  int v6; // r1
  unsigned int v7; // r2
  unsigned int v8; // r0
  int v9; // r0
  bool v10; // cc
  int v11; // r0

  FIELD_U32(a1, 572) = 0;
  result = 2;
  if ( FIELD_U8(a1, 600) == 1 )
  {
    v3 = (*(int (__fastcall **)(_DWORD))(**(_DWORD **)(a1 + 296) + 8))(FIELD_U32(a1, 296));
    v4 = v3 == (*(int (**)(void))(dword_60C8A72C + 8))();
    result = 0;
    if ( v4 )
    {
      v5 = *(_DWORD **)(a1 + 372);
      v6 = v5[3];
      v7 = v5[2];
      v8 = v5[17];
      if ( v7 > v8 )
        v6 += 4 * v8;
      v9 = (int)(float)(*(float *)(*(_DWORD *)v6 + 8) - *(float *)(*(_DWORD *)v6 + 20));
      v10 = v9 < 11;
      v11 = v9 - 11;
      if ( v10 )
        v11 = 0;
      FIELD_U32(a1, 572) = v11;
      result = 1;
    }
  }
  FIELD_U32(a1, 576) = result;
  return result;
}
