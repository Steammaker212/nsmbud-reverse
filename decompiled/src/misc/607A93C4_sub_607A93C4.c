/* sub_607A93C4
 * address: 0x607A93C4   size: 120   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_607A93C4(int a1)
{
  sub_603FBAD0(dword_60C99DD4);
  sub_6078AA44(PlayerMgr_instance);
  Player_changeState(a1, (StateBase *)&dword_60CBF7F8, 0);
  if ( (FIELD_U8(a1, 1231) & 4) != 0 )
    return sub_60766314(a1, (StateBase *)&unk_60CC49EC, 0);
  else
    return sub_60766314(a1, (StateBase *)&unk_60CC49CC, 4);
}
