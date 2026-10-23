/* SE_SYS_CB_TOTAL_COIN_NUM_ref_2
 * address: 0x60524D94   size: 84   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall SE_SYS_CB_TOTAL_COIN_NUM_ref_2(int a1)
{
  StateMethodExecuter *result; // r0

  result = (StateMethodExecuter *)*(unsigned __int8 *)(sub_6047482C(a1 + 44, 9u) + 51);
  if ( ((unsigned __int8)result & 1) != 0 )
  {
    sub_60807EF0(SoundSystem_instance, "SE_SYS_CB_TOTAL_COIN_NUM", 0, 1);
    return StateMgr__changeState((StateMgr *)(a1 + 24), &stru_60CA9D64);
  }
  return result;
}
