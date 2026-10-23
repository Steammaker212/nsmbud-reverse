/* sub_60998F7C
 * address: 0x60998F7C   size: 36   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60998F7C(int result)
{
  *(_BYTE *)result = 1;
  FIELD_U32(result, 4) = 0;
  FIELD_U16(result, 2) = 0;
  FIELD_U32(result, 8) = 0;
  FIELD_U32(result, 12) = 1;
  FIELD_U32(result, 24) = 0;
  return result;
}
