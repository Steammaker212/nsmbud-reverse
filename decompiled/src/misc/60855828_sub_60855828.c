/* sub_60855828
 * address: 0x60855828   size: 56   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60855828(int result, int a2)
{
  *(_DWORD *)result = &off_60C5A1F0;
  FIELD_U32(result, 4) = result + 4;
  FIELD_U32(result, 8) = result + 4;
  FIELD_U32(result, 12) = result + 12;
  FIELD_U32(result, 16) = result + 12;
  FIELD_U32(result, 20) = a2;
  FIELD_U8(result, 24) = 0;
  return result;
}
