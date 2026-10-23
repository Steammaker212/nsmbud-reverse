/* SE_SYS_CH_RESULT_SCORE_ref
 * address: 0x6052033C   size: 240   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall SE_SYS_CH_RESULT_SCORE_ref(int a1)
{
  int v2; // r5
  StateMethodExecuter *result; // r0
  StateMgr *v4; // r0
  int *v5; // r1
  int v6; // r0

  v2 = a1 + 4296;
  result = (StateMethodExecuter *)(FIELD_U32(a1, 4296) + 1);
  *(_DWORD *)v2 = result;
  if ( FIELD_U8(v2, 14) )
  {
    if ( FIELD_U8(a1, 4308) || FIELD_U8(a1, 4312) )
    {
      FIELD_U8(a1, 4311) = 1;
      v4 = (StateMgr *)(a1 + 20);
      if ( FIELD_U8(a1, 4309) )
        v5 = &dword_60CA926C;
      else
        v5 = &dword_60CA928C;
    }
    else
    {
      v5 = &dword_60CA928C;
      v4 = (StateMgr *)(a1 + 20);
    }
    StateMgr__changeState(v4, (StateBase *)v5);
    result = *(StateMethodExecuter **)v2;
  }
  if ( result == (StateMethodExecuter *)60 )
  {
    sub_60807EF0(SoundSystem_instance, "SE_SYS_CH_RESULT_SCORE", 0, 1);
    v6 = sub_6047482C(a1 + 36, 1u);
    (*(void (__fastcall **)(int, _DWORD, float))(*(_DWORD *)v6 + 84))(v6, 0, 1.0);
    return StateMgr__changeState((StateMgr *)(a1 + 20), (StateBase *)&dword_60CA922C);
  }
  return result;
}
