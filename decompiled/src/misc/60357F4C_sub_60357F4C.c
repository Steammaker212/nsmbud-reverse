/* sub_60357F4C
 * address: 0x60357F4C   size: 104   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60357F4C(int a1)
{
  _BYTE *v2; // r0
  int v3; // t1
  _BYTE *v4; // r2

  v3 = FIELD_U8(a1, 6432);
  v2 = (_BYTE *)(a1 + 6432);
  if ( v3 == 1 )
  {
    FIELD_U32(a1, 6252) = 0;
    FIELD_U8(a1, 6433) = 2;
    *v2 = 0;
    v4 = *(_BYTE **)(a1 + 632);
    if ( v4 )
      *v4 |= 4u;
    *v2 = 0;
    sub_60355C1C(a1, FIELD_U32(a1, 6300));
  }
  return Enemy__vf234(a1);
}
