/* jump_quake2_ref_2
 * address: 0x60108F3C   size: 144   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall jump_quake2_ref_2(_DWORD *a1)
{
  int result; // r0

  sub_60421AD4(a1[1774]);
  a1[30] = 0;
  a1[31] = 0;
  a1[32] = 0;
  a1[25] = -1097229926;
  a1[34] = -1061158912;
  result = a1[800] | 0x4000200;
  a1[800] = result;
  return result;
}
