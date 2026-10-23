/* sub_60760908
 * address: 0x60760908   size: 572   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60760908(int a1)
{
  int result; // r0
  int v3; // r0
  bool v4; // zf
  _DWORD *v5; // r0
  int v6; // r0
  int v7; // r5
  int v8; // r0
  int v9; // r0
  int v10; // r5
  int v11; // r2
  int *v12; // r1
  int v13; // r3
  int v14; // r0
  int v15; // r0
  int v16; // r5
  int v17; // r6
  int v18; // r0
  int v19; // r0
  int v20; // r2
  int v21; // r3
  _DWORD *v22; // r0
  int v23; // [sp+0h] [bp-38h] BYREF
  int v24; // [sp+4h] [bp-34h] BYREF
  int v25; // [sp+8h] [bp-30h] BYREF
  int v26[10]; // [sp+10h] [bp-28h] BYREF

  result = FIELD_U8(a1, 1204);
  if ( (result & 8) != 0 )
    return result;
  result = (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 644))(a1);
  if ( result )
    return result;
  v3 = (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 1068))(a1);
  v4 = v3 == 0;
  if ( !v3 )
    v4 = (FIELD_U8(a1, 1213) & 1) == 0;
  if ( !v4 )
    goto LABEL_6;
  v6 = *(_DWORD *)(FIELD_U32(a1, 648) + 4);
  if ( (FIELD_U16(v6, 200) & 0x380) == 0 )
    goto LABEL_6;
  if ( (FIELD_U8(a1, 1224) & 1) == 0 )
  {
    v7 = *(_DWORD *)sub_6075F960(a1);
    v8 = *(_DWORD *)(sub_6075F960(a1) + 4);
    v23 = v7;
    v24 = v8;
    v9 = *(_DWORD *)(*(_DWORD *)(FIELD_U32(a1, 648) + 4) + 200);
    if ( (v9 & 0x100) != 0 )
    {
      v14 = FIELD_U8(a1, 1224);
      if ( (v14 & 2) != 0 )
      {
        v15 = ((int (__fastcall *)(int, int *))loc_60760B5C)(v14, &v23);
        v16 = v15;
        if ( v15 )
        {
          v17 = *(_DWORD *)sub_6075F960(v15);
          v18 = *(_DWORD *)(sub_6075F960(v16) + 4);
          v26[0] = v17;
          v12 = v26;
          v11 = 1;
          v13 = 0x20000000;
          v26[1] = v18;
LABEL_18:
          result = ((int (__fastcall *)(int, int *, int, int, int, int))loc_60760D74)(a1, v12, v11, v13, v23, v24);
          if ( result )
            return result;
        }
      }
    }
    else if ( (v9 & 0x80) != 0 )
    {
      v10 = ((int (__fastcall *)(int, int, int *))loc_6000B538)(PlayerLookTargetList_instance, a1, &v23);
      if ( v10 )
      {
        if ( ActorMgrRelated_getById(ActorMgr__instance + 27168, FIELD_U32(v10, 16)) )
        {
          v11 = FIELD_U32(v10, 32);
          v12 = (int *)(v10 + 20);
          v13 = 1348142512;
          goto LABEL_18;
        }
      }
    }
    v6 = *(_DWORD *)(FIELD_U32(a1, 648) + 4);
  }
  v23 = 0;
  v24 = FIELD_U32(v6, 224);
  v19 = FIELD_U32(v6, 228);
  v26[0] = 0;
  v25 = v19;
  sub_608322C0(&v24, v26, &dword_60B0A8E4, &dword_60B0A8EC);
  v26[0] = 0;
  sub_608322C0(&v25, v26, &dword_60B0A8E4, &dword_60B0A8EC);
  v20 = v24;
  v21 = v25;
  v22 = (_DWORD *)(*(_DWORD *)(FIELD_U32(a1, 648) + 4) + 220);
  *v22 = v23;
  v22[1] = v20;
  v22[2] = v21;
  result = v25;
  if ( !v25 )
  {
    result = v24;
    if ( !v24 )
    {
LABEL_6:
      v5 = *(_DWORD **)(FIELD_U32(a1, 648) + 4);
      v5[55] = 0;
      v5[56] = 0;
      v5[57] = 0;
      result = *(_DWORD *)(FIELD_U32(a1, 648) + 4);
      FIELD_U32(result, 232) = 0;
    }
  }
  return result;
}
