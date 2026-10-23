/* SE_SYS_DECIDE_ref_4EDBC4
 * address: 0x604EDBC4   size: 76   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall SE_SYS_DECIDE_ref_4EDBC4(int a1)
{
  StateMethodExecuter *result; // r0

  result = (StateMethodExecuter *)FIELD_U8(a1, 10841);
  if ( ((unsigned __int8)result & 0x20) != 0 )
  {
    sub_60807EF0(SoundSystem_instance, "SE_SYS_DECIDE", 0, 1);
    return StateMgr__changeState((StateMgr *)(a1 + 24), (StateBase *)&dword_60CA6260);
  }
  return result;
}
