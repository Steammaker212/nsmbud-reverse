/* sub_605E9A4C
 * address: 0x605E9A4C   size: 268   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605E9A4C(int a1, unsigned int a2, _DWORD *a3, int a4)
{
  int v5; // r6
  unsigned int v6; // r0
  bool v7; // cc
  _BYTE **v8; // r0
  int v9; // r7
  int v10; // r1
  bool v11; // vf
  int v12; // r7
  int v13; // r5
  StateBase *CurrentState; // r0
  int v15; // r7
  int v16; // r0
  int v17; // r1
  int v18; // r1
  int v19; // r0

  v5 = 0;
  if ( FIELD_U8(dword_60CC6D78, 109032) )
  {
    v6 = FIELD_U32(a1, 36);
    v7 = v6 > a2;
    if ( (int)v6 > (int)a2 )
    {
      v8 = *(_BYTE ***)(a1 + 24);
      if ( v7 )
      {
        v9 = FIELD_U32(a1, 28);
        v10 = FIELD_U32(a1, 32) + a2;
        v11 = __OFSUB__(v10, v9);
        v12 = v10 - v9;
        if ( v12 < 0 != v11 )
          v12 = v10;
        v8 += v12;
      }
      v13 = (int)*v8;
      if ( *v8 && sub_605E1E84(*v8, a3, a4) == 1 )
      {
        CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 332));
        v15 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
        if ( v15 != (*(int (**)(void))(dword_60CB1C68 + 8))() )
        {
          FIELD_U32(a1, 224) = 0;
          FIELD_U32(a1, 228) = 0;
          StateMgr__changeState((StateMgr *)(a1 + 332), (StateBase *)&dword_60CB1C68);
        }
        v16 = FIELD_U32(a1, 220);
        v17 = FIELD_U32(a1, 228);
        v5 = 1;
        if ( v17 < v16 )
        {
          FIELD_U32(a1, 228) = v17 + 1;
          v18 = FIELD_U32(a1, 224) + v17;
          v11 = __OFSUB__(v18, v16);
          v19 = v18 - v16;
          if ( v19 < 0 != v11 )
            v19 = v18;
          *(_DWORD *)(FIELD_U32(a1, 216) + 4 * v19) = v13;
        }
      }
    }
  }
  return v5;
}
