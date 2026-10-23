/* sub_607FFF80
 * address: 0x607FFF80   size: 24   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607FFF80(int result, int a2)
{
  *(_DWORD *)result = a2;
  FIELD_U8(result, 4) = 0;
  FIELD_U32(result, 8) = 0;
  FIELD_U32(result, 12) = 0;
  return result;
}
