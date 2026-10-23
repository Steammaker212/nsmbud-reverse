/* sub_6054F09C
 * address: 0x6054F09C   size: 776   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6054F09C(int a1)
{
  unsigned int v2; // r1
  int v3; // r2
  int v4; // r5
  char v5; // r12
  bool v6; // zf
  int v7; // r0
  char v8; // r1
  int v9; // r0
  int v10; // r7
  int v11; // r6
  int v12; // r0
  bool v13; // zf
  int v14; // r1
  float v15; // r2
  int result; // r0
  int v17; // r3
  float v18; // s0
  int v19; // r2
  int *v20; // r3
  int *v21; // r2
  int v22; // r6
  char v23; // r12
  int v24; // r6

  v2 = FIELD_U32(a1, 3844);
  if ( v2 == -1 )
    goto LABEL_20;
  v3 = FIELD_U32(a1, 3844);
  if ( v2 >= 4 )
    v3 = 0;
  v4 = *(_DWORD *)(PlayerMgr_instance + 4 * v3 + 32);
  if ( !v4 )
  {
LABEL_20:
    StateMgr__changeState((StateMgr *)(a1 + 24), &stru_60CACD8C);
    FIELD_U32(a1, 3800) = 0;
    return 0;
  }
  if ( (FIELD_U8(v4, 1231) & 4) != 0 || PlayerMgr_hasPlayer(PlayerMgr_instance, v2) != 1 )
    goto LABEL_12;
  v6 = (FIELD_U8(v4, 1231) & 1) == 0;
  if ( (FIELD_U8(v4, 1231) & 1) == 0 )
    v6 = (FIELD_U8(v4, 1220) & 4) == 0;
  if ( !v6 || (FIELD_U8(v4, 1208) & 3) != 0 )
    goto LABEL_12;
  v22 = FIELD_U32(dword_60C995D0, 32);
  if ( !v22 )
    goto LABEL_47;
  if ( ((unsigned int)&dword_60C8F06C & ~(1616179892 << v5) & 1) == 0 && _cxa_guard_acquire(&dword_60C8F06C) )
  {
    dword_60C8F068 = (int)&off_60BD94B0;
    _cxa_guard_release(&dword_60C8F06C);
  }
  if ( (*(int (__fastcall **)(int, int *))(*(_DWORD *)v22 + 8))(v22, &dword_60C8F068) == 1 )
    goto LABEL_12;
  v24 = FIELD_U32(dword_60C995D0, 32);
  if ( ((unsigned int)&dword_60C99888 & ~(1616180016 << v23) & 1) == 0 && _cxa_guard_acquire(&dword_60C99888) )
  {
    dword_60C99884 = (int)&off_60BD94B0;
    _cxa_guard_release(&dword_60C99888);
  }
  if ( v24 && (*(int (__fastcall **)(int, int *))(*(_DWORD *)v24 + 8))(v24, &dword_60C99884) == 1 )
  {
LABEL_12:
    v7 = FIELD_U32(a1, 3692);
    v8 = FIELD_U8(v7, 64) & 0xFE;
  }
  else
  {
LABEL_47:
    v7 = FIELD_U32(a1, 3692);
    v8 = FIELD_U8(v7, 64) | 1;
  }
  FIELD_U8(v7, 64) = v8;
  FIELD_U8(a1, 3823) = (FIELD_U32(v4, 1224) & 0x100000) == 0;
  v9 = (*(int (__fastcall **)(int, _DWORD))(*(_DWORD *)v4 + 156))(v4, FIELD_U32(v4, 1320));
  v10 = FIELD_U32(v4, 1216);
  v11 = v9;
  v12 = sub_607C7184(v4);
  v13 = v12 == 0;
  if ( v12 )
    v13 = (v10 & 0x80000) == 0;
  if ( v13 )
  {
    v14 = FIELD_U32(v4, 108);
    result = FIELD_U32(v4, 116);
    v18 = FIELD_F32(v4, 112) + FIELD_F32(v4, 1244);
    if ( v11 == 2 )
    {
      v19 = dword_60C9A1E8 + 1012;
    }
    else
    {
      if ( v11 == 1 )
      {
        v21 = (int *)(dword_60C9A1E8 + 231408);
        goto LABEL_32;
      }
      if ( v11 )
        goto LABEL_33;
      v19 = dword_60C9A1E8 + 1004;
    }
    v21 = (int *)(v19 + 230400);
LABEL_32:
    v18 = v18 + (float)*v21;
    goto LABEL_33;
  }
  v14 = FIELD_U32(v12, 108);
  v15 = FIELD_F32(v12, 112);
  result = FIELD_U32(v12, 116);
  if ( v11 == 2 )
  {
    v20 = (int *)(dword_60C9A1E8 + 231424);
  }
  else
  {
    if ( v11 == 1 )
    {
      v17 = dword_60C9A1E8 + 1020;
    }
    else
    {
      if ( v11 )
        goto LABEL_34;
      v17 = dword_60C9A1E8 + 1016;
    }
    v20 = (int *)(v17 + 230400);
  }
  v18 = v15 + (float)*v20;
LABEL_33:
  v15 = v18;
LABEL_34:
  if ( FIELD_U8(a1, 3823) )
  {
    FIELD_U32(a1, 3720) = v14;
    FIELD_F32(a1, 3724) = v15;
    FIELD_U32(a1, 3728) = result;
  }
  return result;
}
