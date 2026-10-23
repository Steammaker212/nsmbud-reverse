/* sub_600C9368
 * address: 0x600C9368   size: 312   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_600C9368(int a1)
{
  int ProfileId; // r0
  int result; // r0
  bool v4; // zf
  StateBase *CurrentState; // r0
  int v6; // r5
  bool v7; // zf

  ProfileId = Actor__getProfileId((Actor *)a1);
  if ( ProfileId == 717 )
  {
    FIELD_U8(a1, 19) = 1;
  }
  else if ( ProfileId == 718 )
  {
    sub_600CBF0C(a1, 0, 0, 0);
  }
  result = Actor__getProfileId((Actor *)a1);
  if ( result == 476 )
  {
    result = FIELD_U8(a1, 6240);
    if ( !FIELD_U8(a1, 6240) )
    {
      result = (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 80))(a1);
      v4 = result == 0;
      if ( result )
      {
        result = FIELD_U8(result, 2224);
        v4 = (result & 1) == 0;
      }
      if ( !v4 )
      {
        (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 240))(a1);
        return sub_601362A0(a1);
      }
    }
  }
  else if ( result == 474 )
  {
    CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
    v6 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
    result = (*(int (**)(void))(dword_60C87DEC + 8))();
    if ( v6 != result )
    {
      result = (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 80))(a1);
      v7 = result == 0;
      if ( result )
      {
        result = FIELD_U8(result, 2224);
        v7 = (result & 1) == 0;
      }
      if ( !v7 )
        return SE_OBJ_PNGN_ICEBALL_DISAPP_ref(a1);
    }
  }
  return result;
}
