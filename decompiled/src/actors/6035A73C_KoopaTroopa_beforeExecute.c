/* KoopaTroopa_beforeExecute
 * address: 0x6035A73C   size: 344   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall KoopaTroopa_beforeExecute(Enemy *a1)
{
  int v2; // r5
  int vtable; // r0
  int v4; // r1
  int *v5; // r6
  int v6; // r4
  bool v7; // zf
  int v8; // r4
  bool v9; // zf

  v2 = 0;
  if ( ShellEnemy__beforeExecute(a1) != 1 )
    return v2;
  a1[1]._._.collisionMgr[548] = 0;
  if ( (*(int (__fastcall **)(Enemy *))(FIELD_U32(a1, 0x0)._._._.vtable + 848))(a1) == 1 )
  {
    if ( (FIELD_U8(dword_60C9CF0C, 1361) & 2) != 0 )
    {
      vtable = FIELD_U32(a1, 0x0)._._._.vtable;
      v4 = 1;
      goto LABEL_9;
    }
    if ( (FIELD_U8(dword_60C9CF0C, 1361) & 4) != 0 )
    {
      vtable = FIELD_U32(a1, 0x0)._._._.vtable;
      v4 = 2;
      goto LABEL_9;
    }
    if ( (FIELD_U8(dword_60C9CF0C, 1361) & 8) != 0 )
    {
      vtable = FIELD_U32(a1, 0x0)._._._.vtable;
      v4 = 3;
LABEL_9:
      (*(void (__fastcall **)(Enemy *, int))(vtable + 852))(a1, v4);
    }
  }
  v2 = 1;
  if ( *(_DWORD *)&a1[1]._._.collisionMgr[528] == 1 )
  {
    KoopaTroopa_beforeExecute_helper(a1);
    v5 = (int *)&a1[1]._._._.field_20C;
    Animation_update(**(_DWORD **)(LODWORD(a1[1]._._._.field_20C) + 28));
    if ( *(_DWORD *)&a1[1]._._.collisionMgr[528] == 1 )
    {
      v6 = **(_DWORD **)(LODWORD(a1[1]._._._.field_208) + 28);
      v7 = v6 == 0;
      if ( v6 )
        v7 = (FIELD_U8(v6, 28) & 0x30) == 0;
      if ( !v7 )
      {
        sub_6041838C((ModelAnimation *)(v6 + 4));
        FIELD_U32(v6, 20) = 0;
        FIELD_U32(v6, 28) |= 2u;
        FIELD_U32(v6, 24) = 0;
      }
      v8 = **(_DWORD **)(*v5 + 28);
      v9 = v8 == 0;
      if ( v8 )
        v9 = (FIELD_U8(v8, 28) & 0x30) == 0;
      if ( !v9 )
      {
        sub_6041838C((ModelAnimation *)(v8 + 4));
        FIELD_U32(v8, 20) = 0;
        FIELD_U32(v8, 28) |= 2u;
        FIELD_U32(v8, 24) = 0;
      }
    }
  }
  return v2;
}
