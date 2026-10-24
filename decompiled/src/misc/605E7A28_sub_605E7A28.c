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

  owner = FIELD_U32(result + (24) * 12, 0x4);
  if ( owner == (void *)2 )
  {
    vtable = (char *)FIELD_U32(result + (24) * 12, 0x0);
    if ( !vtable || (v3 = vtable - 1, (FIELD_U32(result + (24) * 12, 0x0) = v3) == 0) )
    {
      if ( FIELD_U32(result + (19) * 12, 0x0) )
      {
LABEL_10:
        FIELD_U32(result + (24) * 12, 0x4) = (void *)1;
        return result;
      }
      return StateMgr__changeState((StateMgr *)&FIELD_U32(result + (27) * 12, 0x8), (StateBase *)&dword_60CB1BE8);
    }
  }
  else if ( owner == (void *)1 )
  {
    v4 = (char *)FIELD_U32(result + (19) * 12, 0x0);
    if ( v4 )
    {
      currentState = FIELD_U32(result + (18) * 12, 0x8);
      v6 = FIELD_U32(result + (18) * 12, 0x4);
      v7 = 0;
      v8 = v4 - 1;
      v9 = currentState + 1;
      if ( currentState + 1 >= (int)v6 )
        v9 = 0;
      v10 = __OFSUB__(currentState, v6);
      v11 = currentState - (_DWORD)v6;
      if ( v11 < 0 != v10 )
        v11 = FIELD_U32(result + (18) * 12, 0x8);
      v12 = *((_DWORD *)FIELD_U32(result + (18) * 12, 0x0) + v11);
      FIELD_U32(result + (18) * 12, 0x8) = v9;
      FIELD_U32(result + (19) * 12, 0x0) = v8;
      FIELD_U32(v12, 6264) |= 0x800000u;
      FIELD_U32(result + (24) * 12, 0x4) = (void *)2;
      v13 = LOBYTE(FIELD_U32(result + (24) * 12, 0x8)) - 2;
      if ( v13 <= 0x14u )
        v7 = (void *)dword_60B05BB0[(char)v13];
      FIELD_U32(result + (24) * 12, 0x0) = v7;
    }
  }
  else if ( !owner && FIELD_S8(dword_60C9CF0C, 1404) >= 0 && !FIELD_U8(dword_60C9CF0C, 1406) )
  {
    goto LABEL_10;
  }
  return result;
}
