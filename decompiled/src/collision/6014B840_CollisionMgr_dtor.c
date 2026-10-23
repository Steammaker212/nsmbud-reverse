/* CollisionMgr_dtor
 * address: 0x6014B840   size: 388   group: collision
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall CollisionMgr_dtor(int a1)
{
  int v2; // r1
  int v3; // r5
  int v4; // r0
  bool v5; // zf
  int v6; // r1
  int v7; // r5
  int v8; // r0
  bool v9; // zf
  int v10; // r0
  int v11; // r1
  int v12; // r5
  int v13; // r0
  bool v14; // zf
  int v15; // r0
  int v16; // r1
  int v17; // r5
  int v18; // r0
  bool v19; // zf

  *(_DWORD *)a1 = CollisionMgr_vtable;
  if ( (FIELD_U8(a1, 2224) & 1) != 0 )
  {
    v2 = FIELD_U32(a1, 2572);
    if ( v2 <= 5 )
    {
      v3 = a1 + 56 * v2;
      v4 = ActorMgrRelated_getById(ActorMgr__instance + 27168, FIELD_U32(v3, 3628));
      v5 = v4 == 0;
      if ( v4 )
        v5 = FIELD_U32(v3, 3632) == 0;
      if ( !v5 )
        sub_6016024C();
    }
  }
  if ( (FIELD_U32(a1, 2224) & 0x10400) == 0x400 )
  {
    v6 = FIELD_U32(a1, 2568);
    if ( v6 <= 5 )
    {
      v7 = a1 + 56 * v6;
      v8 = ActorMgrRelated_getById(ActorMgr__instance + 27168, FIELD_U32(v7, 3292));
      v9 = v8 == 0;
      if ( v8 )
        v9 = FIELD_U32(v7, 3296) == 0;
      if ( !v9 )
        sub_601602C0();
    }
  }
  v10 = FIELD_U32(a1, 2224);
  if ( (v10 & 0x440000) != 0 && (v10 & 0x10000000) == 0 )
  {
    v11 = FIELD_U32(a1, 2560);
    if ( v11 <= 5 )
    {
      v12 = a1 + 56 * v11;
      v13 = ActorMgrRelated_getById(ActorMgr__instance + 27168, FIELD_U32(v12, 2620));
      v14 = v13 == 0;
      if ( v13 )
        v14 = FIELD_U32(v12, 2624) == 0;
      if ( !v14 )
        sub_60160334();
    }
  }
  v15 = FIELD_U32(a1, 2224);
  if ( (v15 & 0x880000) != 0 && (v15 & 0x20000000) == 0 )
  {
    v16 = FIELD_U32(a1, 2564);
    if ( v16 <= 5 )
    {
      v17 = a1 + 56 * v16;
      v18 = ActorMgrRelated_getById(ActorMgr__instance + 27168, FIELD_U32(v17, 2956));
      v19 = v18 == 0;
      if ( v18 )
        v19 = FIELD_U32(v17, 2960) == 0;
      if ( !v19 )
        sub_601603AC();
    }
  }
  return a1;
}
