/* sub_603E9B40
 * address: 0x603E9B40   size: 80   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_603E9B40(int a1)
{
  unsigned int v2; // r0
  StateMethodExecuter *result; // r0

  v2 = FIELD_U32(a1, 36);
  if ( v2 >= 4 )
    v2 = 0;
  result = (StateMethodExecuter *)sub_60793DD4(*(_DWORD *)(*(_DWORD *)(*(_DWORD *)(PlayerMgr_instance + 4 * v2 + 32)
                                                                     + 648)
                                                         + 4));
  if ( result == (StateMethodExecuter *)1 )
    return StateMgr__changeState((StateMgr *)(a1 + 108), (StateBase *)&dword_60C999C0);
  return result;
}
