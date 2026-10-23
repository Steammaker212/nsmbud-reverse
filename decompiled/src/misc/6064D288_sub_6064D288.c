/* sub_6064D288
 * address: 0x6064D288   size: 880   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6064D288(int a1, int a2)
{
  int ActorSlotChecked; // r0
  int v4; // r4
  float v5; // s16
  float v6; // s18
  _BOOL4 v7; // r6
  int v8; // r0
  unsigned int v9; // r7
  float v11; // s20
  float v12; // s22
  float v13; // s24
  int v14; // r0
  int v15; // r0
  float v16; // s16
  float v17; // s18
  float v18; // s20
  int v19; // r0
  int v20; // r0
  int v21; // r0
  int v22; // r0
  int v23; // r0
  int v24; // r0
  int v25; // r0
  int v26; // r0

  ActorSlotChecked = Player_getActorSlotChecked(PlayerMgr_instance, a2);
  v4 = ActorSlotChecked;
  if ( !ActorSlotChecked )
    return 0;
  v5 = FIELD_F32(a1, 112);
  v6 = FIELD_F32(ActorSlotChecked, 112);
  v7 = v6 > (float)(v5 + 160.0)
    || v6 < (float)(v5 + -160.0)
    || (FIELD_U32(ActorSlotChecked, 1216) & 0x1000
      | FIELD_U32(ActorSlotChecked, 1228) & 0x4000000
      | FIELD_U32(ActorSlotChecked, 1204) & 0x4000
      | FIELD_U32(ActorSlotChecked, 1212) & 0x200000) != 0;
  v8 = FIELD_U32(a1, 6556);
  if ( v8 == 2 )
  {
    v11 = FIELD_F32(v4, 108);
    v12 = FIELD_F32(a1, 108);
    v13 = FIELD_F32(a1, 6560);
    v14 = *(_DWORD *)((*(int (__fastcall **)(int))(*(_DWORD *)v4 + 80))(v4) + 2224) & 1;
    if ( v6 <= (float)(v5 + -16.0) || v6 >= (float)(v5 + 16.0) || v11 <= (float)(v12 - v13) || v11 >= (float)(v12 + v13) )
    {
      if ( v14 )
      {
        v21 = (*(int (__fastcall **)(int))(*(_DWORD *)v4 + 80))(v4);
        v22 = sub_6014B69C(v21);
        v9 = 1;
        if ( v22 )
        {
          v23 = (*(int (__fastcall **)(_DWORD))(**(_DWORD **)(v22 + 144) + 80))(FIELD_U32(v22, 144));
          if ( v23 )
          {
            v24 = sub_6014B69C(v23);
            if ( v24 )
              v9 = v7 || *(_DWORD *)(FIELD_U32(v24, 144) + 8) != FIELD_U32(a1, 8);
          }
          else
          {
            v9 = v7;
          }
        }
        return v9 | ((unsigned __int8)(FIELD_U8(v4, 1219) & 8) >> 3);
      }
      goto LABEL_28;
    }
    if ( !v14 )
    {
LABEL_28:
      v9 = v7;
      return v9 | ((unsigned __int8)(FIELD_U8(v4, 1219) & 8) >> 3);
    }
    v15 = *(_DWORD *)((*(int (__fastcall **)(int))(*(_DWORD *)v4 + 80))(v4) + 2224);
    if ( (v15 & 0x440000) != 0 && (v15 & 0x10000000) == 0 )
    {
      v9 = v7;
      return v9 | ((unsigned __int8)(FIELD_U8(v4, 1219) & 8) >> 3);
    }
    v26 = *(_DWORD *)((*(int (__fastcall **)(int))(*(_DWORD *)v4 + 80))(v4) + 2224);
    if ( (v26 & 0x880000) == 0 )
    {
      v9 = 1;
      return v9 | ((unsigned __int8)(FIELD_U8(v4, 1219) & 8) >> 3);
    }
LABEL_38:
    v9 = v7 | ((v26 & 0x20000000u) >> 29);
    return v9 | ((unsigned __int8)(FIELD_U8(v4, 1219) & 8) >> 3);
  }
  if ( v8 == 1 )
  {
    if ( (*(_BYTE *)((*(int (__fastcall **)(int))(*(_DWORD *)v4 + 80))(v4) + 2224) & 1) == 0 )
    {
      v9 = v7;
      return v9 | ((unsigned __int8)(FIELD_U8(v4, 1219) & 8) >> 3);
    }
    v25 = *(_DWORD *)((*(int (__fastcall **)(int))(*(_DWORD *)v4 + 80))(v4) + 2224);
    if ( (v25 & 0x440000) != 0 && (v25 & 0x10000000) == 0 )
    {
      v9 = v7;
      return v9 | ((unsigned __int8)(FIELD_U8(v4, 1219) & 8) >> 3);
    }
    v26 = *(_DWORD *)((*(int (__fastcall **)(int))(*(_DWORD *)v4 + 80))(v4) + 2224);
    if ( (v26 & 0x880000) == 0 )
    {
      v9 = 1;
      return v9 | ((unsigned __int8)(FIELD_U8(v4, 1219) & 8) >> 3);
    }
    goto LABEL_38;
  }
  if ( v8 )
  {
    v16 = FIELD_F32(v4, 108);
    v17 = FIELD_F32(a1, 108);
    v18 = FIELD_F32(a1, 6560);
    v19 = *(_DWORD *)((*(int (__fastcall **)(int))(*(_DWORD *)v4 + 80))(v4) + 2224) & 1;
    if ( v16 >= (float)(v17 + v18) || v16 <= (float)(v17 - v18) )
    {
      v9 = v7 || v19 != 0;
      return v9 | ((unsigned __int8)(FIELD_U8(v4, 1219) & 8) >> 3);
    }
    if ( v19 )
    {
      v20 = *(_DWORD *)((*(int (__fastcall **)(int))(*(_DWORD *)v4 + 80))(v4) + 2224);
      if ( (v20 & 0x440000) != 0 && (v20 & 0x10000000) == 0 )
      {
        v9 = v7;
        return v9 | ((unsigned __int8)(FIELD_U8(v4, 1219) & 8) >> 3);
      }
      v26 = *(_DWORD *)((*(int (__fastcall **)(int))(*(_DWORD *)v4 + 80))(v4) + 2224);
      if ( (v26 & 0x880000) == 0 )
      {
        v9 = 1;
        return v9 | ((unsigned __int8)(FIELD_U8(v4, 1219) & 8) >> 3);
      }
      goto LABEL_38;
    }
    goto LABEL_28;
  }
  v9 = v7 | *(_BYTE *)((*(int (__fastcall **)(int))(*(_DWORD *)v4 + 80))(v4) + 2224) & 1;
  return v9 | ((unsigned __int8)(FIELD_U8(v4, 1219) & 8) >> 3);
}
