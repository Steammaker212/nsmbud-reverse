/* sub_603FC56C
 * address: 0x603FC56C   size: 16   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_603FC56C(int result, int a2)
{
  int v2; // r1

  v2 = a2 << 12;
  FIELD_U32(result, 20) = v2;
  FIELD_U32(result, 24) = v2;
  return result;
}
