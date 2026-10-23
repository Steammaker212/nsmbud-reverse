/* challenge_replay_ref_2
 * address: 0x607E2734   size: 236   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall challenge_replay_ref_2(int a1)
{
  StateMethodExecuter *result; // r0
  int v3; // r5
  _DWORD v4[2]; // [sp+4h] [bp-1Ch] BYREF
  int v5; // [sp+Ch] [bp-14h]

  result = *(StateMethodExecuter **)(dword_60CC6E04 + 24);
  if ( result != (StateMethodExecuter *)2 )
  {
    v5 = FIELD_U32(dword_60C99DB8, 13844);
    switch ( v5 )
    {
      case 3:
        v4[0] = 2;
        v4[1] = GameSetupScene_create;
        SceneMgr_doSceneChange(dword_60CC62E4, a1, (int)v4, 131074, 0);
        break;
      case 2:
        challenge_replay_ref_2_helper(a1);
        v3 = dword_60CC6D78;
        sub_608FDDF4(dword_60CC6D78 + 136, "challenge_replay");
        FIELD_U32(v3, 44) |= 0x10u;
        break;
      case 1:
        challenge_replay_ref_2_helper(a1);
        break;
    }
    return StateMgr__changeState((StateMgr *)(a1 + 212), (StateBase *)&dword_60CC59FC);
  }
  return result;
}
