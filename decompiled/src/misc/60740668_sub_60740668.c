/* sub_60740668
 * address: 0x60740668   size: 36   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60740668(int a1)
{
  float v1; // s0

  v1 = FIELD_F32(a1, 6344) * 0.75;
  FIELD_F32(a1, 144) = v1;
  FIELD_F32(a1, 148) = v1;
  FIELD_F32(a1, 152) = v1;
  return Enemy__vf234(a1);
}
