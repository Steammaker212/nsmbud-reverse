/* sub_606CA41C
 * address: 0x606CA41C   size: 176   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_606CA41C(int a1, int a2)
{
  int result; // r0

  sub_606D465C(a1 + 108, a1 + 164);
  FIELD_U32(a1, 6100) = FIELD_U32(a2, 108);
  FIELD_U32(a1, 6104) = FIELD_U32(a2, 112);
  FIELD_U32(a1, 6108) = FIELD_U32(a2, 116);
  FIELD_F32(a1, 6112) = FIELD_F32(a2, 108) - FIELD_F32(a2, 584);
  FIELD_F32(a1, 6116) = FIELD_F32(a2, 112) - FIELD_F32(a2, 588);
  FIELD_F32(a1, 6120) = FIELD_F32(a2, 116) - FIELD_F32(a2, 592);
  result = FIELD_U32(a1, 164);
  FIELD_U32(a1, 6132) = result;
  return result;
}
