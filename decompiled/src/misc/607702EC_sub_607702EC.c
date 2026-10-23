/* sub_607702EC
 * address: 0x607702EC   size: 68   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607702EC(int a1)
{
  int v1; // r1

  v1 = 0;
  if ( (FIELD_U8(a1, 1217) & 0x10) == 0 && (FIELD_U8(a1, 6900) & 2) == 0 )
  {
    Player_changeState(a1, &stru_60CBF9F0, 0);
    return 1;
  }
  return v1;
}
