/* sub_60763F08
 * address: 0x60763F08   size: 292   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_60763F08(StageActor *a1)
{
  int p_childCount; // r5
  int v3; // r0
  bool v4; // zf
  int id; // r1
  int vtable; // r2
  int v7; // r0
  int v8; // r1
  bool v9; // vf
  int v10; // r2
  int v11; // r0
  bool v12; // zf
  int v13; // r1
  int v14; // r2
  int v15; // r0
  int v16; // r1
  int v17; // r2

  p_childCount = (int)&a1[2]._.childCount;
  if ( sub_60001B14(a1, (int)&a1[2]._.childCount) != 1 || sub_600020C4((int)a1, p_childCount) )
    return 0;
  v3 = sub_6014B69C(p_childCount);
  v4 = v3 == 0;
  if ( v3 )
  {
    v3 = FIELD_U32(v3, 144);
    v4 = v3 == 0;
  }
  if ( !v4 )
  {
    id = a1[11]._.id;
    vtable = a1[11]._.vtable;
    if ( id < vtable )
    {
      v7 = FIELD_U32(v3, 8);
      a1[11]._.id = id + 1;
      v8 = a1[11]._.heap + id;
      v9 = __OFSUB__(v8, vtable);
      v10 = v8 - vtable;
      if ( v10 < 0 != v9 )
        v10 = v8;
      *(_DWORD *)(a1[10].field_280 + 4 * v10) = v7;
    }
  }
  v11 = sub_6014B6F8(p_childCount);
  v12 = v11 == 0;
  if ( v11 )
  {
    v11 = FIELD_U32(v11, 144);
    v12 = v11 == 0;
  }
  if ( !v12 )
  {
    v13 = a1[11]._.id;
    v14 = a1[11]._.vtable;
    if ( v13 < v14 )
    {
      v15 = FIELD_U32(v11, 8);
      a1[11]._.id = v13 + 1;
      v16 = a1[11]._.heap + v13;
      v9 = __OFSUB__(v16, v14);
      v17 = v16 - v14;
      if ( v17 < 0 != v9 )
        v17 = v16;
      *(_DWORD *)(a1[10].field_280 + 4 * v17) = v15;
    }
  }
  return (*(int (__fastcall **)(StageActor *, int, int))(FIELD_U32(a1, 0x0) + 1184))(a1, 1, 1) != 0;
}
