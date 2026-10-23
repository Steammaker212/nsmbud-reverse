/* sub_60276228
 * address: 0x60276228   size: 80   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60276228(int a1)
{
  FIELD_U32(a1, 108) = FIELD_U32(a1, 584);
  FIELD_U32(a1, 112) = FIELD_U32(a1, 588);
  FIELD_U32(a1, 116) = FIELD_U32(a1, 592);
  FIELD_F32(a1, 6496) = -FIELD_F32(a1, 6496);
  sub_6000F338(a1 + 6316);
  FIELD_U16(a1, 6510) = 20;
  return 6510;
}
