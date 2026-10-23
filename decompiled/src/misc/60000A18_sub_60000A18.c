/* sub_60000A18
 * address: 0x60000A18   size: 40   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60000A18(StageActor *a1)
{
  int v1; // r2
  int v2; // r1

  v1 = FIELD_U32(a1, 0x234);
  v2 = v1 + 1;
  if ( v1 > 6 )
    v2 = 8;
  FIELD_U32(a1, 0x234) = v2;
  return sub_6040A298(dword_60C9A1F0);
}
