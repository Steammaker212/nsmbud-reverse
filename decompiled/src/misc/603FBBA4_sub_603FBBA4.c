/* sub_603FBBA4
 * address: 0x603FBBA4   size: 36   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_603FBBA4(int a1)
{
  int v1; // r0

  v1 = FIELD_U32(a1, 256);
  return v1 && FIELD_U32(v1, 52) == 8;
}
