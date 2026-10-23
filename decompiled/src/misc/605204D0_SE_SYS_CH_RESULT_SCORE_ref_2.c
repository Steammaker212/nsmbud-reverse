/* SE_SYS_CH_RESULT_SCORE_ref_2
 * address: 0x605204D0   size: 164   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall SE_SYS_CH_RESULT_SCORE_ref_2(int a1)
{
  StateMethodExecuter **v2; // r1
  StateMethodExecuter *result; // r0
  int v4; // r0
  int *v5; // r1

  v2 = (StateMethodExecuter **)(a1 + 4296);
  result = (StateMethodExecuter *)(FIELD_U32(a1, 4296) + 1);
  *v2 = result;
  if ( result == (StateMethodExecuter *)60 )
  {
    v4 = sub_6047482C(a1 + 36, 2u);
    (*(void (__fastcall **)(int, _DWORD, float))(*(_DWORD *)v4 + 84))(v4, 0, 1.0);
    sub_60807EF0(SoundSystem_instance, "SE_SYS_CH_RESULT_SCORE", 0, 1);
    if ( FIELD_U8(a1, 4308) || FIELD_U8(a1, 4312) )
      v5 = &dword_60CA924C;
    else
      v5 = &dword_60CA928C;
    return StateMgr__changeState((StateMgr *)(a1 + 20), (StateBase *)v5);
  }
  return result;
}
