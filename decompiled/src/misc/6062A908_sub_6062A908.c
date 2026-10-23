/* sub_6062A908
 * address: 0x6062A908   size: 56   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_6062A908(_DWORD *result)
{
  int v1; // r1

  v1 = result[1639];
  FIELD_U32(v1, 20) = 0;
  FIELD_U32(v1, 28) |= 2u;
  result[1645] = 0;
  result[1644] = 0;
  result[1647] = 0;
  return result;
}
