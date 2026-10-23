/* sub_6031BA80
 * address: 0x6031BA80   size: 552   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6031BA80(int a1)
{
  int v2; // r0
  StateBase *CurrentState; // r0
  int v4; // r6
  StateBase *v5; // r0
  int v6; // r6
  StateBase *v7; // r0
  int v8; // r6
  StateBase *v9; // r0
  int v10; // r6
  StateBase *v11; // r0
  int v12; // r5
  unsigned int v13; // r3
  unsigned int *v14; // r1
  int v15; // r6
  unsigned int v16; // r0
  unsigned int v17; // r3
  unsigned int *v18; // r1
  int v19; // r6
  unsigned int v20; // r0

  StageActor__cullCheck((StageActor *)a1, 0);
  if ( !v2 )
  {
    StateMgr__execute((StateMgr *)(a1 + 6084));
    if ( FIELD_S32(a1, 12588) >= 1 )
    {
      CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
      v4 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
      if ( v4 != (*((int (**)(void))stru_60C908E4._._.vtable + 2))() )
      {
        if ( (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 700))(a1) == 1 )
        {
          v5 = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
          v6 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v5, 0x0) + 2))(v5);
          if ( v6 != (*(int (**)(void))(dword_60C93680 + 8))() )
          {
            v7 = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
            v8 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v7, 0x0) + 2))(v7);
            if ( v8 != (*(int (**)(void))(dword_60C936A4 + 8))() )
            {
              v9 = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
              v10 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v9, 0x0) + 2))(v9);
              if ( v10 != (*(int (**)(void))(dword_60C936C8 + 8))() )
              {
                v11 = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
                v12 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v11, 0x0) + 2))(v11);
                if ( v12 != (*(int (**)(void))(dword_60C936EC + 8))() )
                {
                  v13 = 0;
                  v14 = (unsigned int *)(a1 + 6864);
                  v15 = a1 + 6352;
                  v16 = FIELD_U32(a1, 6864) + 1;
                  if ( v16 > 0x3F )
                    v16 = 0;
                  *v14 = v16;
                  *(_DWORD *)(v15 + 8 * v16) = FIELD_U32(a1, 108);
                  if ( *v14 < 0x40 )
                    v13 = *v14;
                  *(_DWORD *)(v15 + 8 * v13 + 4) = FIELD_U32(a1, 112);
                }
              }
            }
          }
          sub_6031BCBC(a1);
        }
        else
        {
          v17 = 0;
          v18 = (unsigned int *)(a1 + 6864);
          v19 = a1 + 6352;
          v20 = FIELD_U32(a1, 6864) + 1;
          if ( v20 > 0x3F )
            v20 = 0;
          *v18 = v20;
          *(_DWORD *)(v19 + 8 * v20) = FIELD_U32(a1, 108);
          if ( *v18 < 0x40 )
            v17 = *v18;
          *(_DWORD *)(v19 + 8 * v17 + 4) = FIELD_U32(a1, 112);
        }
      }
    }
    sub_602A33AC((_BYTE *)a1);
  }
  return 1;
}
