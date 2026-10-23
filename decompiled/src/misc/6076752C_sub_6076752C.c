/* sub_6076752C
 * address: 0x6076752C   size: 704   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_6076752C(int a1)
{
  _DWORD *result; // r0
  int v3; // t1
  _DWORD *v4; // r1
  int v5; // r0
  int v6; // r0
  int v7; // r0
  int v8; // r0
  char v9; // r5
  float v10; // r9
  float v11; // r7
  int v12; // r8
  float v13; // s2
  float v14; // s2
  float v15; // r2
  int v16; // r0
  _DWORD *v17; // r1
  int v18; // r2
  int v19; // r3
  bool v20; // vf
  int v21; // r2
  float v22; // [sp+4h] [bp-2Ch] BYREF
  float v23; // [sp+8h] [bp-28h]
  int v24; // [sp+Ch] [bp-24h]

  v3 = FIELD_U32(a1, 9704);
  result = (_DWORD *)(a1 + 9704);
  if ( v3 || FIELD_U32(a1, 9712) )
    return result;
  *result = 1;
  v4 = (_DWORD *)PlayerMgr_instance;
  v5 = FIELD_U32(PlayerMgr_instance, 32);
  if ( v5 )
  {
    if ( (*(int (__fastcall **)(int, int))(*(_DWORD *)v5 + 640))(v5, 5) )
      goto LABEL_16;
    v4 = (_DWORD *)PlayerMgr_instance;
  }
  v6 = v4[9];
  if ( v6 )
  {
    if ( (*(int (__fastcall **)(int, int))(*(_DWORD *)v6 + 640))(v6, 5) )
      goto LABEL_16;
    v4 = (_DWORD *)PlayerMgr_instance;
  }
  v7 = v4[10];
  if ( !v7 )
    goto LABEL_13;
  if ( (*(int (__fastcall **)(int, int))(*(_DWORD *)v7 + 640))(v7, 5) )
  {
LABEL_16:
    result = (_DWORD *)(FIELD_U32(a1, 1228) | 0x800000);
    FIELD_U32(a1, 1228) = result;
    return result;
  }
  v4 = (_DWORD *)PlayerMgr_instance;
LABEL_13:
  v8 = v4[11];
  if ( v8 && (*(int (__fastcall **)(int, int))(*(_DWORD *)v8 + 640))(v8, 5) == 1 )
    goto LABEL_16;
  v9 = FIELD_U8(LevelInfo_instance, 18);
  if ( sub_60729354((unsigned __int8 *)dword_60CBD8A4, v9, FIELD_U8(a1, 9724)) == 1 )
    goto LABEL_16;
  v10 = FIELD_F32(a1, 108);
  v11 = FIELD_F32(a1, 112);
  v12 = FIELD_U32(a1, 116);
  if ( FIELD_U32(a1, 9732) == 2 )
    v11 = v11 + 8.0;
  v22 = FIELD_F32(a1, 108);
  v23 = v11;
  v24 = v12;
  v13 = FIELD_F32(dword_60CC6484, 112);
  if ( v10 >= v13 )
  {
    v13 = v10;
    if ( v10 > FIELD_F32(dword_60CC6484, 120) )
      v13 = FIELD_F32(dword_60CC6484, 120);
  }
  v22 = v13;
  v14 = FIELD_F32(dword_60CC6484, 132);
  if ( v11 >= v14 )
  {
    v14 = v11;
    if ( v11 > FIELD_F32(dword_60CC6484, 124) )
      v14 = FIELD_F32(dword_60CC6484, 124);
  }
  v23 = v14;
  sub_60833074(&v22);
  v15 = v23;
  v16 = dword_60CC62E4 + 116;
  FIELD_F32(dword_60CC62E4, 116) = v22;
  FIELD_F32(v16, 4) = v15;
  FIELD_U32(v16, 8) = 0;
  FIELD_F32(a1, 9752) = v10;
  FIELD_F32(a1, 9756) = v11;
  FIELD_U32(a1, 9760) = v12;
  FIELD_U32(a1, 1204) |= 0x200u;
  sub_607292EC(dword_60CBD8A4, v9, FIELD_U8(a1, 9724));
  FIELD_U32(a1, 1228) |= 0x800000u;
  sub_607782C0(dword_60CBFA90, FIELD_S8(a1, 84));
  result = (_DWORD *)dword_60CBFA90;
  v17 = *(_DWORD **)(dword_60CBFA90 + 344);
  if ( FIELD_U32(dword_60CBFA90, 356) )
  {
    v18 = FIELD_U32(dword_60CBFA90, 348);
    v19 = FIELD_U32(dword_60CBFA90, 352);
    v20 = __OFSUB__(v19, v18);
    v21 = v19 - v18;
    if ( v21 < 0 != v20 )
      v21 = FIELD_U32(dword_60CBFA90, 352);
    v17 += v21;
  }
  if ( *v17 == FIELD_S8(a1, 84) )
  {
    FIELD_U8(dword_60CBD8A4, 49) = 1;
    result[110] = FIELD_S8(a1, 84);
  }
  return result;
}
