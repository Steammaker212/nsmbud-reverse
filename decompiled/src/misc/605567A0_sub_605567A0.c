/* sub_605567A0
 * address: 0x605567A0   size: 272   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_605567A0(StateMethodExecuter *result)
{
  int currentState; // r1
  bool v2; // zf
  _BYTE *vtable; // r1
  bool v4; // zf
  _BYTE *owner; // r1
  bool v6; // zf
  int v7; // r1
  bool v8; // zf
  _BYTE *v9; // r1
  bool v10; // zf
  _BYTE *v11; // r1
  bool v12; // zf
  int v13; // r1
  bool v14; // zf

  currentState = result[472].currentState;
  v2 = currentState == 0;
  if ( currentState )
    v2 = FIELD_U8(currentState, 2689) == 0;
  if ( v2 || !FIELD_U8(currentState, 2699) )
  {
    vtable = result[473].vtable;
    v4 = vtable == 0;
    if ( vtable )
      v4 = vtable[2689] == 0;
    if ( v4 || !vtable[2699] )
    {
      owner = result[473].owner;
      v6 = owner == 0;
      if ( owner )
        v6 = owner[2689] == 0;
      if ( v6 || !owner[2699] )
      {
        v7 = result[473].currentState;
        v8 = v7 == 0;
        if ( v7 )
          v8 = FIELD_U8(v7, 2689) == 0;
        if ( v8 || !FIELD_U8(v7, 2699) )
        {
          v9 = result[474].vtable;
          v10 = v9 == 0;
          if ( v9 )
            v10 = v9[2689] == 0;
          if ( v10 || !v9[2699] )
          {
            v11 = result[474].owner;
            v12 = v11 == 0;
            if ( v11 )
              v12 = v11[2689] == 0;
            if ( v12 || !v11[2699] )
            {
              v13 = result[474].currentState;
              if ( !v13 )
                return StateMgr__changeState((StateMgr *)&result[2], (StateBase *)&dword_60CAD5E8);
              v14 = FIELD_U8(v13, 2689) == 0;
              if ( FIELD_U8(v13, 2689) )
                v14 = FIELD_U8(v13, 2699) == 0;
              if ( v14 )
                return StateMgr__changeState((StateMgr *)&result[2], (StateBase *)&dword_60CAD5E8);
            }
          }
        }
      }
    }
  }
  return result;
}
