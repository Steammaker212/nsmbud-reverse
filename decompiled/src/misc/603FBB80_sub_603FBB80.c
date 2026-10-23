/* sub_603FBB80
 * address: 0x603FBB80   size: 36   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_603FBB80(int a1)
{
  int v1; // r0

  v1 = FIELD_U32(a1, 256);
  return v1 && FIELD_U32(v1, 52) == 7;
}
