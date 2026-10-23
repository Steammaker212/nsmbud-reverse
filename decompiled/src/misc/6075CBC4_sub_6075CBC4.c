/* sub_6075CBC4
 * address: 0x6075CBC4   size: 40   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6075CBC4(int a1)
{
  int result; // r0

  sub_6078D210();
  ModelWrapper_updateAnims(*(ModelWrapper **)(a1 + 1176));
  result = FIELD_U32(a1, 504) - FIELD_U32(a1, 508);
  FIELD_U32(a1, 504) = result;
  return result;
}
