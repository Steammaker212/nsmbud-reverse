/* sub_60908478
 * address: 0x60908478   size: 48   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60908478(int a1, nn__os **a2)
{
  nn__os *v3; // r0
  int v4; // r5

  v3 = *a2;
  FIELD_U32(a1, 124) = *a2;
  v4 = FIELD_U32(a1, 124);
  nn__os__GetThreadAvailableCoreMask(v3);
  return nn__os__SetThreadCoreMask(FIELD_U32(a1, 128), -1, v4, 0);
}
