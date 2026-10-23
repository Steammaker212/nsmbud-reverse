/* SE_SYS_100COIN_ONE_UP_ref
 * address: 0x603FB640   size: 744   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_SYS_100COIN_ONE_UP_ref(int a1, unsigned int a2, int a3)
{
  int v6; // r8
  int v7; // r9
  int v8; // r0
  int v9; // r7
  int v10; // r0
  int v11; // r0
  int v12; // r1
  int v13; // r0
  int v14; // r1
  int v15; // r0
  int v16; // r1
  int v17; // r0
  int v18; // r1
  unsigned int v19; // r1
  unsigned int v20; // r0
  int v21; // r1
  int v23; // [sp+0h] [bp-28h] BYREF
  int v24; // [sp+4h] [bp-24h]

  v6 = a1 + 272;
  v7 = FIELD_U32(a1, 724) + a3;
  if ( v7 < 100 )
  {
    v9 = FIELD_U32(a1, 724) + a3;
    goto LABEL_36;
  }
  v8 = FIELD_U32(a1, 764);
  if ( v8 == 2 )
  {
    v9 = 9999;
LABEL_7:
    if ( v7 < v9 )
      v9 = v7;
    goto LABEL_36;
  }
  if ( v8 == 4 )
  {
    v9 = 999;
    goto LABEL_7;
  }
  v10 = FIELD_U32(dword_60CC6484, 128);
  v23 = FIELD_U32(dword_60CC6484, 116);
  v24 = v10;
  if ( FIELD_U8(a1, 292) )
  {
    v11 = FIELD_U32(a1, 296);
    v12 = v11 + 1;
    if ( v11 + 1 >= 99 )
      v12 = 99;
    if ( v11 < -1 )
      v12 = 0;
    FIELD_U32(a1, 296) = v12;
    (*(void (__fastcall **)(int, const char *, int *, _DWORD, int, int))(*(_DWORD *)Global_BasicSoundActor2 + 36))(
      Global_BasicSoundActor2,
      "SE_SYS_100COIN_ONE_UP",
      &v23,
      0,
      v23,
      v24);
    (*(void (__fastcall **)(int, const char *, int *, _DWORD))(*(_DWORD *)Global_BasicSoundActor2 + 36))(
      Global_BasicSoundActor2,
      "SE_SYS_100COIN_ONE_UP_RC",
      &v23,
      0);
  }
  if ( FIELD_U8(a1, 364) )
  {
    v13 = FIELD_U32(a1, 368);
    v14 = v13 + 1;
    if ( v13 + 1 >= 99 )
      v14 = 99;
    if ( v13 < -1 )
      v14 = 0;
    FIELD_U32(a1, 368) = v14;
    (*(void (__fastcall **)(int, const char *, int *, _DWORD))(*(_DWORD *)Global_BasicSoundActor2 + 36))(
      Global_BasicSoundActor2,
      "SE_SYS_100COIN_ONE_UP",
      &v23,
      0);
    (*(void (__fastcall **)(int, const char *, int *, _DWORD))(*(_DWORD *)Global_BasicSoundActor2 + 36))(
      Global_BasicSoundActor2,
      "SE_SYS_100COIN_ONE_UP_RC",
      &v23,
      0);
  }
  if ( FIELD_U8(a1, 436) )
  {
    v15 = FIELD_U32(a1, 440);
    v16 = v15 + 1;
    if ( v15 + 1 >= 99 )
      v16 = 99;
    if ( v15 < -1 )
      v16 = 0;
    FIELD_U32(a1, 440) = v16;
    (*(void (__fastcall **)(int, const char *, int *, _DWORD))(*(_DWORD *)Global_BasicSoundActor2 + 36))(
      Global_BasicSoundActor2,
      "SE_SYS_100COIN_ONE_UP",
      &v23,
      0);
    (*(void (__fastcall **)(int, const char *, int *, _DWORD))(*(_DWORD *)Global_BasicSoundActor2 + 36))(
      Global_BasicSoundActor2,
      "SE_SYS_100COIN_ONE_UP_RC",
      &v23,
      0);
  }
  if ( FIELD_U8(a1, 508) )
  {
    v17 = FIELD_U32(a1, 512);
    v18 = v17 + 1;
    if ( v17 + 1 >= 99 )
      v18 = 99;
    if ( v17 < -1 )
      v18 = 0;
    FIELD_U32(a1, 512) = v18;
    (*(void (__fastcall **)(int, const char *, int *, _DWORD))(*(_DWORD *)Global_BasicSoundActor2 + 36))(
      Global_BasicSoundActor2,
      "SE_SYS_100COIN_ONE_UP",
      &v23,
      0);
    (*(void (__fastcall **)(int, const char *, int *, _DWORD))(*(_DWORD *)Global_BasicSoundActor2 + 36))(
      Global_BasicSoundActor2,
      "SE_SYS_100COIN_ONE_UP_RC",
      &v23,
      0);
  }
  v9 = v7 - 100;
  if ( v7 - 100 <= 0 )
    v9 = 0;
LABEL_36:
  sub_603FD36C(v6, v9);
  sub_6040A5F0(dword_60C9A1F0, v9);
  v19 = 0;
  v20 = 0;
  if ( a2 < 6 )
    v19 = a2;
  *(_DWORD *)(a1 + 72 * v19 + 344) += a3;
  if ( FIELD_U32(a1, 764) == 1 )
  {
    if ( a2 < 4 )
      v20 = a2;
    v21 = dword_60C9A1E0;
    *(_DWORD *)(dword_60C9A1E0 + 36 * v20 + 548) += a3;
    sub_607FAC9C(v21 + 708, a3);
  }
  return sub_600242C0();
}
