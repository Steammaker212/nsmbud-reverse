/* SE_SYS_DECIDE_ref_48371C
 * address: 0x6048371C   size: 76   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall SE_SYS_DECIDE_ref_48371C(int a1)
{
  StateMethodExecuter *result; // r0

  result = (StateMethodExecuter *)*(unsigned __int8 *)(FIELD_U32(a1, 3640) + 5);
  if ( ((unsigned __int8)result & 0x20) != 0 )
  {
    sub_60807EF0(SoundSystem_instance, "SE_SYS_DECIDE", 0, 1);
    return StateMgr__changeState((StateMgr *)(a1 + 24), (StateBase *)&dword_60C9F0B8);
  }
  return result;
}
