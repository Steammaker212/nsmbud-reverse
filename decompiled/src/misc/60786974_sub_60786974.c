/* sub_60786974
 * address: 0x60786974   size: 52   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_60786974(int a1)
{
  _BOOL4 v2; // r0
  int v3; // r1

  v2 = sub_60454C78(dword_60C9CF0C);
  v3 = 0x2000;
  if ( v2 )
    v3 = 32;
  return (FIELD_U32(a1, 8) & v3) != 0;
}
