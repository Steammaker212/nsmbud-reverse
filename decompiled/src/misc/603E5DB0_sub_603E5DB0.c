/* sub_603E5DB0
 * address: 0x603E5DB0   size: 212   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_603E5DB0(int a1)
{
  int v2; // r0
  StateMethodExecuter *result; // r0
  _DWORD *v4; // r1
  int v5; // r0
  int v6; // r0
  int v7; // r0
  int v8; // r0

  v2 = FIELD_U32(a1, 48);
  if ( v2 < 0 )
  {
    v4 = (_DWORD *)PlayerMgr_instance;
    v5 = FIELD_U32(PlayerMgr_instance, 32);
    if ( v5 )
    {
      sub_60768F28(v5, 153, 0);
      v4 = (_DWORD *)PlayerMgr_instance;
    }
    v6 = v4[9];
    if ( v6 )
    {
      sub_60768F28(v6, 153, 0);
      v4 = (_DWORD *)PlayerMgr_instance;
    }
    v7 = v4[10];
    if ( v7 )
    {
      sub_60768F28(v7, 153, 0);
      v4 = (_DWORD *)PlayerMgr_instance;
    }
    v8 = v4[11];
    if ( v8 )
      sub_60768F28(v8, 153, 0);
    FIELD_U32(a1, 48) = 30;
    return (StateMethodExecuter *)30;
  }
  else
  {
    if ( !v2 )
      return StateMgr__changeState((StateMgr *)(a1 + 76), (StateBase *)&dword_60C99640);
    result = (StateMethodExecuter *)(v2 - 1);
    FIELD_U32(a1, 48) = result;
    if ( !result )
      return StateMgr__changeState((StateMgr *)(a1 + 76), (StateBase *)&dword_60C99640);
  }
  return result;
}
