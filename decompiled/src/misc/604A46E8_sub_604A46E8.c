/* sub_604A46E8
 * address: 0x604A46E8   size: 960   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604A46E8(int a1, unsigned int a2, int a3)
{
  int v6; // r1
  unsigned int v7; // r2
  int v8; // r0
  int v9; // r0
  StateBase *v10; // r1
  _BYTE *v11; // r0
  unsigned int v12; // r1
  float v13; // s0
  int v14; // r0
  int v15; // r1
  bool *v16; // r0
  unsigned int v17; // r2
  int v18; // r3
  int v19; // r0
  float v20; // s2
  int v21; // r0
  int v22; // r2
  int v23; // r0
  bool v24; // zf
  __int64 *v25; // r2
  int v26; // r0
  int result; // r0
  _DWORD v28[8]; // [sp+8h] [bp-20h] BYREF

  if ( !FIELD_U8(a1, 20547) )
  {
    v6 = FIELD_U32(a1, 20484);
    if ( v6 )
    {
      v7 = FIELD_U32(a1, 20528);
      if ( v7 >= 5 )
        v7 = 0;
      if ( (*(_BYTE *)(v6 + 404 * v7 + 277) & 1) != 0 && (FIELD_U32(a1, 20496) & 0xFFFFFFFE) == 2 )
      {
        v8 = FIELD_U32(a1, 20548) + 1;
        if ( v8 >= 60 )
          v8 = 60;
        FIELD_U32(a1, 20548) = v8;
      }
      else
      {
        FIELD_U32(a1, 20548) = 0;
      }
    }
  }
  v9 = *(_DWORD *)a1;
  if ( (*(_DWORD *)a1 & 2) != 0 )
  {
    FIELD_U8(a1, 40) = 1;
    v10 = (StateBase *)&dword_60CA1250;
  }
  else if ( (v9 & 0x10) != 0 )
  {
    FIELD_U8(a1, 40) = 1;
    v10 = (StateBase *)&unk_60CA10F0;
  }
  else if ( (v9 & 0x40) != 0 )
  {
    FIELD_U32(a1, 20548) = 0;
    if ( FIELD_U8(a1, 20544) )
    {
      v11 = *(_BYTE **)(a1 + 20488);
      if ( v11 )
      {
        v12 = FIELD_U32(a1, 20496);
        if ( v12 < 7 )
          v11 += v12;
        *v11 = 1;
      }
      FIELD_U8(a1, 40) = 1;
      v10 = (StateBase *)&unk_60CA1230;
    }
    else
    {
      FIELD_U8(a1, 40) = 1;
      v10 = &stru_60CA1110;
    }
  }
  else
  {
    if ( (v9 & 1) == 0 )
      goto LABEL_26;
    FIELD_U8(a1, 40) = 1;
    v10 = (StateBase *)&unk_60CA1230;
  }
  StateMgr__changeState((StateMgr *)(a1 + 24), v10);
LABEL_26:
  if ( (*(_DWORD *)a1 & 4) != 0 )
  {
    v13 = 1.0;
    v28[0] = &sead__SafeStringBase__vtable;
    v14 = dword_60CA1274;
    goto LABEL_30;
  }
  if ( (*(_DWORD *)a1 & 8) != 0 )
  {
    v13 = 1.0;
    v28[0] = &sead__SafeStringBase__vtable;
    v14 = dword_60CA132C;
LABEL_30:
    v28[1] = v14;
    sub_6047467C((_DWORD *)(a1 + 48), 0x10u, v28, (int)&dword_60CA13B0, v13, 0);
  }
  v15 = FIELD_U32(a1, 20484);
  v16 = (bool *)(a1 + 20500);
  if ( !v15 )
    goto LABEL_38;
  v17 = FIELD_U32(a1, 20528);
  if ( v17 >= 5 )
    v17 = 0;
  v18 = *v16 ? *(_DWORD *)(v15 + 404 * v17 + 276) : *(_DWORD *)(v15 + 404 * v17 + 16) | *(_DWORD *)(v15 + 404 * v17 + 8);
  *v16 = (v18 & 0x1000) != 0;
  if ( (v18 & 0x1000) != 0 )
  {
    v19 = v15 + 404 * v17;
    v20 = FIELD_F32(v19, 284) + -360.0;
    FIELD_F32(a1, 20504) = FIELD_F32(v19, 280) + -640.0;
    FIELD_F32(a1, 20508) = -v20;
    FIELD_U8(a1, 20501) = 1;
  }
  else
  {
LABEL_38:
    *v16 = 0;
  }
  if ( FIELD_U8(a1, 40) )
  {
    FIELD_U32(a1, 44) = 0;
    FIELD_U8(a1, 40) = 0;
  }
  StateMgr__execute((StateMgr *)(a1 + 24));
  v21 = FIELD_U32(a1, 44);
  if ( v21 != 0x7FFFFFFF )
    FIELD_U32(a1, 44) = v21 + 1;
  sub_6050A8A4(a1 + 6016);
  sub_6050A8A4(a1 + 13232);
  sub_6050229C(a1 + 3936);
  if ( FIELD_U8(a1, 20540) )
    sub_604A4AE4(a1, FIELD_U32(a1, 20496));
  v23 = FIELD_U32(a1, 20452);
  v24 = v23 == 0;
  if ( v23 )
  {
    v22 = FIELD_U32(a1, 20480);
    v24 = v22 == 0;
  }
  if ( v24 )
  {
    sub_60473B58((_DWORD *)(a1 + 48), a2, 0);
  }
  else
  {
    v25 = (__int64 *)(v22 + 80);
    v26 = FIELD_U32(dword_60CD0B40, 36);
    if ( FIELD_U32(dword_60CD0B40, 32) > a2 )
      v26 += 4 * a2;
    sub_604739E8((_DWORD *)(a1 + 48), (__int64 *)(*(_DWORD *)(*(_DWORD *)v26 + 72) + 4), v25);
  }
  *(_DWORD *)a1 = 0;
  result = dword_60C99E24;
  if ( dword_60C99E24 )
  {
    result = sub_603FF0A8(dword_60C99E24, a1);
    if ( result )
      return sub_604FD928(result, a2, a3, FIELD_U8(a1, 20546));
  }
  return result;
}
