/* sub_607E1B70
 * address: 0x607E1B70   size: 216   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_607E1B70(int a1)
{
  StateMethodExecuter *result; // r0
  int v3; // r0
  int v4; // r1
  int v5; // r2
  int (__fastcall *v6)(int); // r1
  _DWORD v7[4]; // [sp+8h] [bp-10h] BYREF

  result = (StateMethodExecuter *)FIELD_U8(a1, 3433);
  if ( result )
  {
    if ( FIELD_U8(a1, 3434) )
    {
      v3 = sub_604089F4(dword_60C9A1F0, FIELD_U8(dword_60C9A1F0, 6558));
      sub_607E22E0(v3, v4, v5);
      sub_6040D3F4(LevelInfo_instance, 1);
      v7[0] = 2;
      v6 = sub_600246FC;
    }
    else
    {
      sub_6040B33C(dword_60C9A1F0);
      sub_6040D3F4(LevelInfo_instance, 1);
      v7[0] = 2;
      v6 = sub_603FADF4;
    }
    v7[1] = v6;
    SceneMgr_doSceneChange(dword_60CC62E4, a1, (int)v7, 0, 0);
    return StateMgr__changeState((StateMgr *)(a1 + 472), (StateBase *)&dword_60CC59D0);
  }
  return result;
}
