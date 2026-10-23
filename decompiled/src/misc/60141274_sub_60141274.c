/* sub_60141274
 * address: 0x60141274   size: 180   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60141274(int a1)
{
  StateBase *CurrentState; // r0
  int v3; // r5
  int v4; // r0
  unsigned int v5; // r2
  int v6; // r2
  _DWORD *v7; // r2
  int v8; // r3
  int v9; // t1
  unsigned int v10; // r1
  unsigned int v11; // r0
  _DWORD *v12; // r0
  int v13; // r1
  int v14; // t1

  CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
  v3 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
  if ( v3 != (*(int (**)(void))(dword_60C87DA4 + 8))() )
  {
    v4 = EnemyCounterMaybe_instance;
    if ( EnemyCounterMaybe_instance )
    {
      v5 = FIELD_U32(a1, 6744);
      if ( v5 >= 4 )
        v5 = 0;
      v6 = EnemyCounterMaybe_instance + 8 * v5;
      v9 = FIELD_U32(v6, 132);
      v7 = (_DWORD *)(v6 + 132);
      v8 = v9;
      if ( v9 >= 1 )
        *v7 = v8 - 1;
      if ( FIELD_U32(a1, 6736) )
      {
        v10 = FIELD_U32(a1, 6744);
        if ( v10 >= 4 )
          v10 = 0;
        v11 = v4 + 8 * v10;
        v14 = FIELD_U32(v11, 136);
        v12 = (_DWORD *)(v11 + 136);
        v13 = v14;
        if ( v14 >= 1 )
          *v12 = v13 - 1;
      }
    }
  }
  return 1;
}
