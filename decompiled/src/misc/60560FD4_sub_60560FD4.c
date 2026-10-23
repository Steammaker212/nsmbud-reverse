/* sub_60560FD4
 * address: 0x60560FD4   size: 180   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60560FD4(int a1, _DWORD *a2)
{
  int result; // r0
  bool v5; // zf
  int v6; // r0
  unsigned int v7; // r0
  _DWORD *v8; // r0
  int v9; // r0
  unsigned int v10; // r0
  _BYTE v11[88]; // [sp+0h] [bp-78h] BYREF
  char v12; // [sp+58h] [bp-20h]

  result = FIELD_U8(a1, 53);
  v5 = result == 0;
  if ( result )
  {
    result = FIELD_U32(a1, 40);
    v5 = result == 8;
  }
  if ( !v5 )
  {
    if ( result == 4 )
    {
      v6 = sub_6090B350(v11);
      v12 = 8;
      sub_6090B4B0(v6, a2[10]);
      v7 = FIELD_U32(a1, 32024);
      if ( v7 >= 9 )
        v7 = 0;
      v8 = (_DWORD *)(a1 + 3548 * v7 + 32032);
    }
    else
    {
      v9 = sub_6090B350(v11);
      v12 = 8;
      sub_6090B4B0(v9, a2[10]);
      v10 = FIELD_U32(a1, 68);
      if ( v10 >= 9 )
        v10 = 0;
      v8 = (_DWORD *)(a1 + 3548 * v10 + 76);
    }
    return sub_60473B88(v8, a2, 0);
  }
  return result;
}
