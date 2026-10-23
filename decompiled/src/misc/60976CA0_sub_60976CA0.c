/* sub_60976CA0
 * address: 0x60976CA0   size: 76   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60976CA0(int a1, int a2)
{
  int v4; // r0
  int v5; // r0
  int result; // r0

  sub_60918E4C(a1, a2);
  v4 = FIELD_U32(a1, 592);
  FIELD_U32(a2, 596) = FIELD_U32(a1, 596);
  FIELD_U32(a2, 592) = v4;
  v5 = FIELD_U32(a1, 600);
  FIELD_U32(a2, 604) = FIELD_U32(a1, 604);
  FIELD_U32(a2, 600) = v5;
  FIELD_U32(a2, 584) = FIELD_U32(a1, 584);
  FIELD_U8(a2, 608) = FIELD_U8(a1, 608);
  result = FIELD_U32(a1, 588);
  FIELD_U32(a2, 588) = result;
  return result;
}
