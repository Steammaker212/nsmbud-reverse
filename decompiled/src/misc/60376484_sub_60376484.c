/* sub_60376484
 * address: 0x60376484   size: 84   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60376484(int a1)
{
  int result; // r0

  FIELD_U32(a1, 80) = 1;
  FIELD_F32(a1, 120) = (float)-1;
  FIELD_U32(a1, 124) = -1082130432;
  FIELD_U32(a1, 128) = 0;
  result = **(_DWORD **)(FIELD_U32(a1, 6300) + 12);
  FIELD_U32(result, 24) = 1077936128;
  return result;
}
