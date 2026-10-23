/* sub_60798D7C
 * address: 0x60798D7C   size: 112   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60798D7C(int a1)
{
  if ( (FIELD_U32(PlayerMgr_instance, 152) & (1 << FIELD_U8(a1, 84))) == 0 )
    return 0;
  sub_60766314(a1, &stru_60CBF37C, 1);
  FIELD_U32(a1, 1204) &= ~0x10u;
  Player_changeState(a1, (StateBase *)&dword_60CC4EEC, 3);
  return 1;
}
