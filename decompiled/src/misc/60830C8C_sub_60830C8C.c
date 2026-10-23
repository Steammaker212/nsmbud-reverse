/* sub_60830C8C
 * address: 0x60830C8C   size: 268   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_60830C8C(int a1)
{
  StateMethodExecuter *result; // r0

  FIELD_U32(dword_60CC6484, 264) = FIELD_U32(a1, 6108);
  result = (StateMethodExecuter *)sub_6077A158();
  if ( result == (StateMethodExecuter *)1 )
  {
    if ( Player_getActorSlotChecked(PlayerMgr_instance, 0) )
      ((void (__fastcall *)(float, float))loc_60768E4C)(1016.0, 3.0);
    if ( Player_getActorSlotChecked(PlayerMgr_instance, 1u) )
      ((void (__fastcall *)(float, float))loc_60768E4C)(952.0, 3.0);
    if ( Player_getActorSlotChecked(PlayerMgr_instance, 2u) )
      ((void (__fastcall *)(float, float))loc_60768E4C)(888.0, 3.0);
    if ( Player_getActorSlotChecked(PlayerMgr_instance, 3u) )
      ((void (__fastcall *)(float, float))loc_60768E4C)(824.0, 3.0);
    return StateMgr__changeState((StateMgr *)(a1 + 6084), &stru_60CC71A8);
  }
  return result;
}
