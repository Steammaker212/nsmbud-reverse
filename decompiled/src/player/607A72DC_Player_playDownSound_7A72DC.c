/* Player_playDownSound_7A72DC
 * address: 0x607A72DC   size: 484   group: player
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall Player_playDownSound_7A72DC(int a1)
{
  _DWORD *v2; // r5
  int v3; // r0
  int v4; // r0
  int v5; // r1
  float v6; // s0
  float v7; // s2
  int *v8; // r0

  v2 = (_DWORD *)(a1 + 9696);
  if ( FIELD_U32(a1, 9696) == 1 )
    FIELD_U32(a1, 1204) |= 0x8000u;
  (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 1384))(a1);
  v3 = FIELD_U32(a1, 1204);
  if ( (v3 & 0x8000) == 0 )
  {
    FIELD_U32(a1, 1204) = v3 | 0x4000;
    v4 = dword_60C99DD4;
    v5 = FIELD_U32(dword_60C99DD4, 764);
    if ( v5 == 2 || (FIELD_U8(a1, 1228) & 4) != 0 )
      goto LABEL_10;
    if ( v5 == 1 )
    {
      if ( sub_60766858() )
      {
LABEL_10:
        FIELD_U32(a1, 9712) = 30;
        goto LABEL_11;
      }
      v4 = dword_60C99DD4;
    }
    sub_603FB9A0(v4, FIELD_S8(a1, 84));
    goto LABEL_10;
  }
LABEL_11:
  (*(void (__fastcall **)(_DWORD, int, float, float, float))(**(_DWORD **)(a1 + 11360) + 84))(
    FIELD_U32(a1, 11360),
    6,
    1.0,
    0.0,
    0.0);
  FIELD_U32(a1, 100) = 0;
  FIELD_U32(a1, 88) = 0;
  FIELD_U32(a1, 7048) = 0;
  FIELD_U32(a1, 7052) = 0;
  FIELD_U32(a1, 124) = 0;
  FIELD_U32(a1, 160) = 0;
  (*(void (__fastcall **)(int, float))(*(_DWORD *)a1 + 1084))(a1, 5500.0);
  v6 = FIELD_F32(a1, 108);
  v7 = FIELD_F32(dword_60CC6484, 112);
  if ( (float)(v7 + -96.0) <= v6
    && v6 < (float)((float)(v7 + FIELD_F32(dword_60CC6484, 104)) + 96.0)
    && (FIELD_U8(a1, 1227) & 0x20) == 0 )
  {
    v8 = sub_60002B90(FIELD_S8(a1, 84), unk_60C263EC);
    sub_607734E8((unsigned __int8 *)a1, (int)"SE_PLY_DOWN", 0, (int)v8);
  }
  FIELD_U32(a1, 1224) |= 0x100000u;
  if ( *v2 != 1 )
    sub_607A2924((_DWORD *)a1, 0);
  return AreaRumbleMgr_rumbleForPlayer(AreaRumbleMgr_instance, FIELD_S8(a1, 84), 4, 0, 0);
}
