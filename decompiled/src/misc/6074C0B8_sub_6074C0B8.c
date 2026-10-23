/* sub_6074C0B8
 * address: 0x6074C0B8   size: 268   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6074C0B8(_DWORD *a1)
{
  int v2; // r8
  int v3; // r5
  int v4; // r0
  int v5; // r0
  int v6; // r2
  int v7; // r3
  int v8; // r7
  bool v9; // vf
  int v10; // r2
  unsigned int v11; // r1
  StateMgr *v12; // r0
  int v13; // r8
  int result; // r0
  int v15; // r3
  int v16; // r2
  int v17; // r0
  int v18; // r7
  int v19; // r2
  unsigned int v20; // r1
  StateMgr *v21; // r0

  v2 = 0;
  v3 = ActorMgr__instance + 27168;
  while ( 1 )
  {
    v4 = a1[242];
    if ( !v4 )
      break;
    if ( v4 < 1 )
    {
      v11 = 0;
    }
    else
    {
      v5 = v4 - 1;
      v6 = a1[240];
      v7 = a1[241];
      v8 = v7 + 1;
      if ( v7 + 1 >= v6 )
        v8 = 0;
      v9 = __OFSUB__(v7, v6);
      v10 = v7 - v6;
      if ( v10 < 0 != v9 )
        v10 = a1[241];
      v11 = *(_DWORD *)(a1[239] + 4 * v10);
      a1[241] = v8;
      a1[242] = v5;
    }
    v12 = (StateMgr *)ActorMgrRelated_getById(v3, v11);
    if ( v12 )
      sub_60746F3C(v12, (StateMethodExecuter *)(3 * v2++));
  }
  v13 = 0;
  while ( 1 )
  {
    result = a1[270];
    if ( !result )
      break;
    if ( result < 1 )
    {
      v20 = 0;
    }
    else
    {
      v15 = a1[269];
      v16 = a1[268];
      v17 = result - 1;
      v18 = v15 + 1;
      if ( v15 + 1 >= v16 )
        v18 = 0;
      v9 = __OFSUB__(v15, v16);
      v19 = v15 - v16;
      if ( v19 < 0 != v9 )
        v19 = a1[269];
      v20 = *(_DWORD *)(a1[267] + 4 * v19);
      a1[269] = v18;
      a1[270] = v17;
    }
    v21 = (StateMgr *)ActorMgrRelated_getById(v3, v20);
    if ( v21 )
      sub_60746F3C(v21, (StateMethodExecuter *)(3 * v13++));
  }
  return result;
}
