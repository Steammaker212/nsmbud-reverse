/* sub_6048647C
 * address: 0x6048647C   size: 80   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6048647C(int result)
{
  *(_BYTE *)(FIELD_U32(result, 548) + 64) &= ~1u;
  *(_BYTE *)(FIELD_U32(result, 552) + 64) &= ~1u;
  *(_BYTE *)(FIELD_U32(result, 556) + 64) &= ~1u;
  *(_BYTE *)(FIELD_U32(result, 560) + 64) &= ~1u;
  FIELD_U8(result, 493) = 1;
  FIELD_U8(result, 494) = 1;
  return result;
}
