/* sub_60555E90
 * address: 0x60555E90   size: 384   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_60555E90(StateMethodExecuter *result)
{
  _BYTE *currentState; // r1
  bool v2; // zf
  _BYTE *vtable; // r1
  bool v4; // zf
  _BYTE *owner; // r1
  bool v6; // zf
  _BYTE *v7; // r1
  bool v8; // zf
  _BYTE *v9; // r1
  bool v10; // zf
  _BYTE *v11; // r1
  bool v12; // zf
  _BYTE *v13; // r1
  bool v14; // zf
  int vtable_low; // r1
  StateMgr *v16; // r0
  int *v17; // r1

  currentState = (_BYTE *)result[472].currentState;
  v2 = currentState == 0;
  if ( currentState )
    v2 = currentState[2689] == 0;
  if ( v2 || !currentState[2691] && !currentState[2690] )
  {
    vtable = result[473].vtable;
    v4 = vtable == 0;
    if ( vtable )
      v4 = vtable[2689] == 0;
    if ( v4 || !vtable[2691] && !vtable[2690] )
    {
      owner = result[473].owner;
      v6 = owner == 0;
      if ( owner )
        v6 = owner[2689] == 0;
      if ( v6 || !owner[2691] && !owner[2690] )
      {
        v7 = (_BYTE *)result[473].currentState;
        v8 = v7 == 0;
        if ( v7 )
          v8 = v7[2689] == 0;
        if ( v8 || !v7[2691] && !v7[2690] )
        {
          v9 = result[474].vtable;
          v10 = v9 == 0;
          if ( v9 )
            v10 = v9[2689] == 0;
          if ( v10 || !v9[2691] && !v9[2690] )
          {
            v11 = result[474].owner;
            v12 = v11 == 0;
            if ( v11 )
              v12 = v11[2689] == 0;
            if ( v12 || !v11[2691] && !v11[2690] )
            {
              v13 = (_BYTE *)result[474].currentState;
              v14 = v13 == 0;
              if ( v13 )
                v14 = v13[2689] == 0;
              if ( v14 || !v13[2691] && !v13[2690] )
              {
                vtable_low = LOBYTE(result[1569].vtable);
                v16 = (StateMgr *)&result[2];
                if ( vtable_low )
                  v17 = &dword_60CAD4A8;
                else
                  v17 = &dword_60CAD528;
                return StateMgr__changeState(v16, (StateBase *)v17);
              }
            }
          }
        }
      }
    }
  }
  return result;
}
