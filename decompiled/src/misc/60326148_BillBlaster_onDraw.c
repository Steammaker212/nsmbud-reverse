/* BillBlaster_onDraw
 * address: 0x60326148   size: 312   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall BillBlaster_onDraw(int a1)
{
  StateBase *CurrentState; // r0
  int v3; // r5
  int v4; // r0
  _DWORD *v5; // r1
  _DWORD *v6; // r0
  unsigned __int8 v7; // r7
  int v8; // r0

  CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
  v3 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
  if ( v3 != (*(int (**)(void))(dword_60C939C4 + 8))() )
  {
    v4 = FIELD_U32(a1, 7656);
    if ( v4 == 2 )
    {
      DrawMgr_drawModel2(DrawMgr_instance, *(_DWORD **)(a1 + 6104));
      DrawMgr_drawModel2(DrawMgr_instance, *(_DWORD **)(a1 + 6100));
      v5 = *(_DWORD **)(a1 + 6108);
      v6 = DrawMgr_instance;
    }
    else
    {
      if ( v4 )
      {
        DrawMgr_drawModel2(DrawMgr_instance, *(_DWORD **)(a1 + 6104));
        if ( FIELD_U32(a1, 7664) )
        {
          v7 = 0;
          v8 = 0;
          do
          {
            if ( v7 >= 0x10u )
              v8 = 0;
            DrawMgr_drawModel2(DrawMgr_instance, *(_DWORD **)(a1 + 4 * v8 + 6108));
            v8 = ++v7;
          }
          while ( (unsigned int)v7 < FIELD_U32(a1, 7664) );
        }
        v5 = *(_DWORD **)(a1 + 6100);
      }
      else
      {
        v5 = *(_DWORD **)(a1 + 6100);
      }
      v6 = DrawMgr_instance;
    }
    DrawMgr_drawModel2(v6, v5);
  }
  return 1;
}
