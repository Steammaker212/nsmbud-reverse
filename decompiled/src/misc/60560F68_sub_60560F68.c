/* sub_60560F68
 * address: 0x60560F68   size: 108   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60560F68(int a1, _DWORD *a2)
{
  int result; // r0
  bool v5; // zf
  int v6; // r0
  unsigned int v7; // r0
  _BYTE v8[120]; // [sp+0h] [bp-78h] BYREF

  result = FIELD_U8(a1, 53);
  v5 = result == 0;
  if ( result )
  {
    result = FIELD_U32(a1, 40);
    v5 = result == 8;
  }
  if ( !v5 )
  {
    v6 = sub_6090B350(v8);
    v8[88] = 8;
    sub_6090B4B0(v6, a2[10]);
    v7 = FIELD_U32(a1, 68);
    if ( v7 >= 9 )
      v7 = 0;
    return sub_60473B88((_DWORD *)(a1 + 3548 * v7 + 76), a2, 0);
  }
  return result;
}
