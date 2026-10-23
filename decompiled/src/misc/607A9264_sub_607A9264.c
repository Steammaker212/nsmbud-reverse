/* sub_607A9264
 * address: 0x607A9264   size: 76   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607A9264(int a1, int a2, int a3)
{
  Player_changeState(a1, (StateBase *)&dword_60CC500C, 0);
  sub_60766314(a1, (StateBase *)&dword_60CC496C, 1);
  FIELD_U32(a1, 9776) = a2;
  FIELD_U32(a1, 9780) = a3;
  return 9780;
}
