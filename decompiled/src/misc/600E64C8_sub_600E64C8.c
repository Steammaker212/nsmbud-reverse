/* sub_600E64C8
 * address: 0x600E64C8   size: 336   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_600E64C8(int a1)
{
  int result; // r0
  __int64 v3; // r6
  int v4; // r0
  StateBase *CurrentState; // r0
  int v6; // r5
  int v7; // r0
  int v8; // r0
  StateBase *v9; // r0
  int v10; // r5
  int v11; // r0

  sub_600E9114();
  j_ModelWrapper_updateAnims(FIELD_U32(a1, 7096));
  result = FIELD_U8(a1, 8132);
  if ( !FIELD_U8(a1, 8132) )
  {
    v3 = 0;
    v4 = (*(int (__fastcall **)(int, _DWORD))(*(_DWORD *)a1 + 1676))(a1, 0);
    CurrentState = StateMgr__getCurrentState((StateMgr *)(v4 + 6084));
    v6 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
    if ( v6 != (*(int (**)(void))(dword_60C850EC + 8))() )
    {
      v7 = (*(int (__fastcall **)(int, _DWORD))(*(_DWORD *)a1 + 1676))(a1, 0);
      HIDWORD(v3) = (*(int (__fastcall **)(int))(*(_DWORD *)v7 + 1700))(v7) ^ 1;
    }
    v8 = (*(int (__fastcall **)(int, int))(*(_DWORD *)a1 + 1676))(a1, 1);
    v9 = StateMgr__getCurrentState((StateMgr *)(v8 + 6084));
    v10 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v9, 0x0) + 2))(v9);
    if ( v10 != (*(int (**)(void))(dword_60C850EC + 8))() )
    {
      v11 = (*(int (__fastcall **)(int, int))(*(_DWORD *)a1 + 1676))(a1, 1);
      LODWORD(v3) = (*(int (__fastcall **)(int))(*(_DWORD *)v11 + 1700))(v11) ^ 1;
    }
    result = HIDWORD(v3) | v3;
    if ( !v3 )
    {
      if ( FIELD_F32(a1, 8212) <= 0.0 )
        return (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 1684))(a1);
      else
        return sub_600EB770(a1);
    }
  }
  return result;
}
