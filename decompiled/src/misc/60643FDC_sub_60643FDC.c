/* sub_60643FDC
 * address: 0x60643FDC   size: 184   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60643FDC(int a1)
{
  int result; // r0
  _BYTE *v3; // r6
  unsigned int v4; // r2
  _DWORD *i; // r7
  char v6; // r1
  _BYTE v7[88]; // [sp+0h] [bp-58h] BYREF

  v3 = (_BYTE *)(a1 + 6628);
  result = FIELD_U8(a1, 6628);
  if ( result )
    *v3 = --result;
  if ( !result )
  {
    memset(v7, 0, 64);
    v4 = 0;
    for ( i = *(_DWORD **)(a1 + 6392); i; i = (_DWORD *)i[1] )
    {
      if ( *i )
        v4 = sub_606C5B88(v7, *(_DWORD *)(*i + 2196), v4, 0);
    }
    result = a1 + 6629;
    if ( v4 != FIELD_U8(a1, 6629) )
    {
      v6 = v4;
      if ( v4 >= 0xFF )
        v6 = -1;
      FIELD_U8(a1, 6109) = v6;
      *(_BYTE *)result = v4;
      *v3 = 4;
      return 4;
    }
  }
  return result;
}
