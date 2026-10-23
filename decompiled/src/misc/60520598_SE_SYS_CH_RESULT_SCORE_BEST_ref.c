/* SE_SYS_CH_RESULT_SCORE_BEST_ref
 * address: 0x60520598   size: 248   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall SE_SYS_CH_RESULT_SCORE_BEST_ref(int a1)
{
  StateMethodExecuter **v2; // r1
  StateMethodExecuter *result; // r0
  _DWORD *v4; // r0
  unsigned int v5; // r1
  int *v6; // r1
  int a5; // [sp+0h] [bp-18h] BYREF
  int v8; // [sp+4h] [bp-14h]

  v2 = (StateMethodExecuter **)(a1 + 4296);
  result = (StateMethodExecuter *)(FIELD_U32(a1, 4296) + 1);
  *v2 = result;
  if ( result == (StateMethodExecuter *)100 )
  {
    sub_60807EF0(SoundSystem_instance, "SE_SYS_CH_RESULT_SCORE_BEST", 0, 1);
    FIELD_U8(a1, 4311) = 1;
    if ( FIELD_U8(a1, 4312) )
    {
      a5 = (int)&sead__SafeStringBase__vtable;
      v8 = sub_6052283C(5);
      v4 = (_DWORD *)(a1 + 36);
      v5 = 5;
    }
    else
    {
      a5 = (int)&sead__SafeStringBase__vtable;
      v8 = sub_6052283C(3);
      v4 = (_DWORD *)(a1 + 36);
      v5 = 3;
    }
    sub_60473DE4(v4, v5, &a5, 0);
    if ( FIELD_U8(a1, 4309) )
      v6 = &dword_60CA926C;
    else
      v6 = &dword_60CA928C;
    return StateMgr__changeState((StateMgr *)(a1 + 20), (StateBase *)v6);
  }
  return result;
}
