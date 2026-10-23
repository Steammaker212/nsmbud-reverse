/* sub_60878050
 * address: 0x60878050   size: 56   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60878050(int a1, int a2)
{
  int v4; // r6

  FIELD_U32(a1, 80) &= ~0x20u;
  v4 = sub_60878088(a1);
  sub_608782F4(a1, a2);
  return v4;
}
