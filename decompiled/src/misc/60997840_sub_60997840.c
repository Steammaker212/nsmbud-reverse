/* sub_60997840
 * address: 0x60997840   size: 152   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60997840(int a1, int a2, int a3)
{
  int v5; // r5
  int v6; // r4

  v5 = FIELD_U32(a1, 16);
  v6 = 0;
  if ( sub_6098BDC8(v5)
    && (*(_BYTE *)(FIELD_U32(v5, 28) + 28) & 2) != 0
    && (*(_BYTE *)(FIELD_U32(a1, 12) + 30) & 0x10) != 0
    && sub_6098BED8(v5) == a2
    && (a3 != 1 || (*(_BYTE *)(FIELD_U32(a1, 12) + 30) & 0x80) != 0) )
  {
    return sub_60992D4C(FIELD_U32(v5, 28)) ^ 1;
  }
  return v6;
}
