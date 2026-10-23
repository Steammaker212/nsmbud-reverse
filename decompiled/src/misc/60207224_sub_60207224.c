/* sub_60207224
 * address: 0x60207224   size: 568   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60207224(_DWORD *a1)
{
  int *v2; // r6
  char v3; // r12
  int *v4; // r7
  int v5; // r4
  int v6; // r0
  bool v7; // zf
  int v8; // r1
  int v9; // r2
  int v10; // r0
  _DWORD *v11; // r5
  char v12; // r12
  _DWORD *v13; // r0
  int v14; // r1
  int v15; // r2
  int v16; // r0
  _DWORD *v17; // r0
  int v18; // r1
  _DWORD v20[11]; // [sp+Ch] [bp-2Ch] BYREF

  v2 = (int *)sub_601693A0(860);
  v4 = *(int **)(ActorMgr__instance + 27180);
  while ( 1 )
  {
    v5 = *v2;
    if ( ((unsigned int)&dword_60C8B0EC & ~(1612739240 << v3) & 1) == 0 && _cxa_guard_acquire(&dword_60C8B0EC) )
    {
      dword_60C8B0E8 = (int)&off_60BD4E08;
      _cxa_guard_release(&dword_60C8B0EC);
    }
    if ( v5 )
    {
      v6 = (**(int (__fastcall ***)(int, int *))v5)(v5, &dword_60C8B0E8);
      v7 = v6 == 1;
      if ( v6 == 1 )
        v7 = FIELD_U32(v5, 240) == 0;
      if ( v7 )
        break;
    }
    if ( v2 != v4 )
    {
      v2 = (int *)sub_601693C0(860, (int)(v2 + 1));
      if ( v2 != v4 )
        continue;
    }
    goto LABEL_13;
  }
  v8 = FIELD_U32(v5, 276);
  v9 = FIELD_U32(v5, 280);
  a1[82] = FIELD_U32(v5, 272);
  a1[83] = v8;
  a1[84] = v9;
LABEL_13:
  v10 = a1[86];
  a1[32] = v10;
  a1[33] = v10;
  a1[34] = v10;
  v11 = (_DWORD *)ActorMgrRelated_getById(ActorMgr__instance + 27168, *(_DWORD *)(a1[78] + 8));
  if ( ((unsigned int)&dword_60C8A34C & ~(1612739444 << v12) & 1) == 0 && _cxa_guard_acquire(&dword_60C8A34C) )
  {
    dword_60C8A348 = (int)&off_60BD4E08;
    _cxa_guard_release(&dword_60C8A34C);
  }
  if ( v11 )
  {
    v13 = (_DWORD *)(*(int (__fastcall **)(_DWORD *, int *))*v11)(v11, &dword_60C8A348);
    if ( v13 )
      v13 = v11;
  }
  else
  {
    v13 = 0;
  }
  a1[45] = v13[45];
  a1[32] = v13[32];
  a1[33] = v13[33];
  a1[34] = v13[34];
  v14 = v13[20];
  a1[20] = v14;
  v15 = v13[21];
  a1[21] = v15;
  v16 = v13[22];
  a1[22] = v16;
  a1[79] = v14;
  a1[80] = v15;
  a1[81] = v16;
  v17 = (_DWORD *)a1[67];
  v18 = a1[68];
  v20[0] = &sead__SafeStringBase__vtable;
  v20[1] = "hang";
  return sub_60421938(v17, v18, (int)v20);
}
