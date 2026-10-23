/* sub_605E7A28
 * address: 0x605E7A28   size: 276   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_605E7A28(StateMethodExecuter *result)
{
  void *owner; // r1
  char *vtable; // r1
  char *v3; // r1
  char *v4; // r2
  int currentState; // r1
  void *v6; // r3
  void *v7; // lr
  char *v8; // r2
  int v9; // r4
  bool v10; // vf
  int v11; // r3
  int v12; // r1
  unsigned __int8 v13; // r2

  owner = result[24].owner;
  if ( owner == (void *)2 )
  {
    vtable = (char *)result[24].vtable;
    if ( !vtable || (v3 = vtable - 1, (result[24].vtable = v3) == 0) )
    {
      if ( result[19].vtable )
      {
LABEL_10:
        result[24].owner = (void *)1;
        return result;
      }
      return StateMgr__changeState((StateMgr *)&result[27].currentState, (StateBase *)&dword_60CB1BE8);
    }
  }
  else if ( owner == (void *)1 )
  {
    v4 = (char *)result[19].vtable;
    if ( v4 )
    {
      currentState = result[18].currentState;
      v6 = result[18].owner;
      v7 = 0;
      v8 = v4 - 1;
      v9 = currentState + 1;
      if ( currentState + 1 >= (int)v6 )
        v9 = 0;
      v10 = __OFSUB__(currentState, v6);
      v11 = currentState - (_DWORD)v6;
      if ( v11 < 0 != v10 )
        v11 = result[18].currentState;
      v12 = *((_DWORD *)result[18].vtable + v11);
      result[18].currentState = v9;
      result[19].vtable = v8;
      FIELD_U32(v12, 6264) |= 0x800000u;
      result[24].owner = (void *)2;
      v13 = LOBYTE(result[24].currentState) - 2;
      if ( v13 <= 0x14u )
        v7 = (void *)dword_60B05BB0[(char)v13];
      result[24].vtable = v7;
    }
  }
  else if ( !owner && FIELD_S8(dword_60C9CF0C, 1404) >= 0 && !FIELD_U8(dword_60C9CF0C, 1406) )
  {
    goto LABEL_10;
  }
  return result;
}
