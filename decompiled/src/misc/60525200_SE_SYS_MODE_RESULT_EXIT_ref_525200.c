/* SE_SYS_MODE_RESULT_EXIT_ref_525200
 * address: 0x60525200   size: 116   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall SE_SYS_MODE_RESULT_EXIT_ref_525200(int a1)
{
  StateMethodExecuter *result; // r0
  int v3; // r1
  int v4; // t1

  v4 = FIELD_U32(a1, 4660);
  result = (StateMethodExecuter *)(a1 + 4660);
  v3 = v4;
  if ( v4 < 1 )
  {
    result = (StateMethodExecuter *)FIELD_U8(a1, 4221);
    if ( ((unsigned __int8)result & 0x20) != 0 )
    {
      FIELD_U32(a1, 4668) = 2;
      sub_60807EF0(SoundSystem_instance, "SE_SYS_MODE_RESULT_EXIT", 0, 1);
      return StateMgr__changeState((StateMgr *)(a1 + 24), &stru_60CA9E04);
    }
  }
  else
  {
    FIELD_U32(result, 0x0) = (void *)(v3 - 1);
  }
  return result;
}
