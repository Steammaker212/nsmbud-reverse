/* sub_60202E38
 * address: 0x60202E38   size: 84   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_60202E38(int a1)
{
  StateMethodExecuter *result; // r0
  float v3; // s0

  result = (StateMethodExecuter *)((int (*)(void))loc_60168DF8)();
  v3 = FIELD_F32(a1, 528);
  if ( FIELD_F32(a1, 84) < v3 )
  {
    FIELD_F32(a1, 84) = v3;
    FIELD_U32(a1, 120) = 0;
    FIELD_U32(a1, 204) = 0;
    (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 72))(a1);
    return StateMgr__changeState((StateMgr *)(a1 + 284), (StateBase *)&dword_60C8C478);
  }
  return result;
}
