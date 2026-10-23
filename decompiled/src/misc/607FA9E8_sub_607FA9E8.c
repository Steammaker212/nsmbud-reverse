/* sub_607FA9E8
 * address: 0x607FA9E8   size: 40   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607FA9E8(int result, int a2)
{
  *(_DWORD *)result = a2;
  FIELD_U32(result, 4) = 1065353216;
  FIELD_U32(result, 8) = 1065353216;
  FIELD_U32(result, 12) = 0;
  FIELD_U32(result, 16) = 0;
  FIELD_U32(result, 20) = 0;
  FIELD_U32(result, 24) = 0;
  FIELD_U8(result, 28) = 0;
  return result;
}
