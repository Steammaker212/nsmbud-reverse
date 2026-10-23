/* SE_SYS_MODE_RESULT_EXIT_ref_5254D8
 * address: 0x605254D8   size: 120   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall SE_SYS_MODE_RESULT_EXIT_ref_5254D8(int a1)
{
  StateMethodExecuter *result; // r0
  _DWORD *v3; // r0

  result = (StateMethodExecuter *)FIELD_U8(a1, 4221);
  if ( ((unsigned __int8)result & 0x20) != 0 )
  {
    v3 = (_DWORD *)(a1 + 4668);
    if ( FIELD_U8(a1, 4672) )
    {
      *v3 = 1;
    }
    else
    {
      *v3 = 2;
      sub_60807EF0(SoundSystem_instance, "SE_SYS_MODE_RESULT_EXIT", 0, 1);
    }
    return StateMgr__changeState((StateMgr *)(a1 + 24), &stru_60CA9E04);
  }
  return result;
}
