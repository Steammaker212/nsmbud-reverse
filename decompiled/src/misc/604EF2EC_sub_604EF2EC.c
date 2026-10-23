/* sub_604EF2EC
 * address: 0x604EF2EC   size: 80   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604EF2EC(int a1)
{
  unsigned int v2; // r5
  int v3; // r0

  v2 = FIELD_U32(a1, 47116);
  sub_6047EE74(a1 + 46128, v2);
  v3 = a1 + 46088;
  if ( v2 < 0x100 )
    v3 += v2;
  FIELD_U8(v3, 500) = 0;
  FIELD_U8(a1, 47135) = 1;
  FIELD_U8(a1, 47133) = 1;
  return 47133;
}
