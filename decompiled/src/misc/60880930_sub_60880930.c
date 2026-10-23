/* sub_60880930
 * address: 0x60880930   size: 140   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60880930(int a1, int a2)
{
  int v2; // r2
  _BYTE *v3; // r1
  int v4; // r3
  int v5; // r1

  v2 = 0;
  if ( a2 == 2 )
  {
    v3 = (_BYTE *)(a1 + 9);
    if ( !FIELD_U8(a1, 9) && !FIELD_U8(a1, 10) )
      return v2;
  }
  else
  {
    if ( a2 != 1 )
      return v2;
    v3 = (_BYTE *)(a1 + 9);
  }
  v4 = 2;
  *v3 = 0;
  FIELD_U8(a1, 10) = 0;
  if ( *(_BYTE *)(*(_DWORD *)(FIELD_U32(a1, 116) + 24) + 30) )
    v4 = 3;
  v5 = (FIELD_U32(a1, 48) + 1) % v4;
  FIELD_U32(a1, 48) = v5;
  v2 = 1;
  FIELD_U32(a1, 156) = a1 + 44 * v5 + 160;
  return v2;
}
