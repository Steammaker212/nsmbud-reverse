/* GiantWiggler_vf56
 * address: 0x60257A60   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall GiantWiggler_vf56(int a1)
{
  int v2; // r5
  int v3; // r5
  int v4; // r5

  sub_60257BE8(a1 + 6316);
  v2 = FIELD_U32(a1, 6500);
  sub_60257BE8(v2);
  v3 = FIELD_U32(v2, 184);
  sub_60257BE8(v3);
  v4 = FIELD_U32(v3, 184);
  sub_60257BE8(v4);
  return sub_60257BE8(FIELD_U32(v4, 184));
}
