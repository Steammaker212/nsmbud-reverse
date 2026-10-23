/* sub_605D463C
 * address: 0x605D463C   size: 292   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605D463C(int a1)
{
  StateBase *CurrentState; // r0
  int v3; // r6
  int v4; // r5
  int v5; // r0
  void *v6; // r6
  unsigned int v7; // r1
  void ***v8; // r0
  int v9; // r2
  int v10; // r1
  bool v11; // vf
  int v12; // r2
  unsigned int v14; // r7
  void **v15; // r0
  int v16; // r2
  int v17; // r1

  CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 940));
  v3 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
  v4 = 0;
  if ( v3 == (*(int (**)(void))(dword_60CB12A8 + 8))() )
    return v4;
  DrawMgr_drawModel(DrawMgr_instance, **(void ***)(a1 + 648));
  v4 = 1;
  if ( !FIELD_U8(a1, 752) )
    return v4;
  v5 = FIELD_U32(a1, 728);
  v6 = DrawMgr_instance;
  if ( !v5 )
  {
    if ( FIELD_S32(a1, 744) >= 1 )
    {
      v14 = 0;
      do
      {
        v15 = *(void ***)(a1 + 688);
        if ( FIELD_U32(a1, 700) > v14 )
        {
          v16 = FIELD_U32(a1, 696);
          v17 = FIELD_U32(a1, 692);
          if ( (int)(v14 + v16) >= v17 )
            v16 -= v17;
          v15 += v14 + v16;
        }
        DrawMgr_drawModel(v6, *v15);
        ++v14;
      }
      while ( (signed int)v14 < FIELD_U32(a1, 744) );
    }
    return v4;
  }
  v7 = v5 - 1;
  v8 = *(void ****)(a1 + 652);
  if ( FIELD_U32(a1, 664) > v7 )
  {
    v9 = FIELD_U32(a1, 656);
    v10 = FIELD_U32(a1, 660) + v7;
    v11 = __OFSUB__(v10, v9);
    v12 = v10 - v9;
    if ( v12 < 0 != v11 )
      v12 = v10;
    v8 += v12;
  }
  DrawMgr_drawModel(DrawMgr_instance, **v8);
  return 1;
}
