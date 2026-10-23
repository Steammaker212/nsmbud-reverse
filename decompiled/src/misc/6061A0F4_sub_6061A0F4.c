/* sub_6061A0F4
 * address: 0x6061A0F4   size: 220   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

ModelWrapper *__fastcall sub_6061A0F4(int a1)
{
  _BYTE *v2; // r0
  int v3; // t1
  int v4; // r1
  _DWORD *v5; // r0
  int v6; // r0
  int v7; // r1
  _DWORD *i; // r0
  int v9; // t1

  v3 = FIELD_U8(a1, 7172);
  v2 = (_BYTE *)(a1 + 7172);
  if ( !v3 && (FIELD_U8(a1, 20) & 1) != 0 )
  {
    *v2 = 1;
    v4 = 256;
    v5 = (_DWORD *)(a1 + 6152);
    do
    {
      v4 -= 2;
      *(v5 - 1) = FIELD_U32(a1, 164);
      *v5 = FIELD_U32(a1, 164);
      v5 += 2;
    }
    while ( v4 );
  }
  sub_60677174(a1);
  v6 = FIELD_U32(a1, 6144);
  if ( (FIELD_U8(a1, 6128) & 0xFE) == 2 )
    v6 -= FIELD_U32(a1, 6120);
  FIELD_U32(a1, 164) = v6;
  if ( (FIELD_U8(a1, 20) & 1) != 0 )
  {
    v7 = 119;
    for ( i = (_DWORD *)(a1 + 6624); ; i[1] = v9 )
    {
      *i = *(i - 1);
      if ( v7 <= 1 )
        break;
      v9 = *(i - 2);
      i -= 2;
      v7 -= 2;
    }
    FIELD_U32(a1, 6148) = FIELD_U32(a1, 164);
  }
  return ModelWrapper_updateAnims(*(ModelWrapper **)(a1 + 6136));
}
