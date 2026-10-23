/* sub_60420960
 * address: 0x60420960   size: 68   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60420960(int a1, int a2, int a3, int a4)
{
  unsigned int v5; // r0
  int v7; // r1
  bool v8; // zf

  v5 = FIELD_U16(a1, 4);
  v7 = FIELD_U8(a2, 249);
  v8 = v7 == v5 >> 14;
  if ( v7 == v5 >> 14 )
    v8 = FIELD_U8(a2, 250) == a4;
  if ( !v8 )
    sub_6091380C(a2, v5 >> 14, a4);
  return sub_60871474(a3, a2 + 8);
}
