/* sub_60021C70
 * address: 0x60021C70   size: 956   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60021C70(int a1, int a2)
{
  int v3; // r0
  int v4; // r0
  int v5; // r1
  int v6; // r0
  int v7; // r0
  int v8; // r0
  int v9; // r0
  int result; // r0
  int v11; // r0
  int v12; // [sp+0h] [bp-18h] BYREF
  int v13; // [sp+4h] [bp-14h]

  v3 = dword_60C99DD4;
  if ( FIELD_U32(dword_60C99DD4, 764) == 1 )
  {
    if ( a2 == 1 )
    {
      v4 = FIELD_U32(dword_60CC6484, 128);
      v12 = FIELD_U32(dword_60CC6484, 116);
      v13 = v4;
      (*(void (__fastcall **)(int, const char *, int *, _DWORD))(*(_DWORD *)Global_BasicSoundActor2 + 36))(
        Global_BasicSoundActor2,
        "SE_SYS_ONE_UP",
        &v12,
        0);
      (*(void (__fastcall **)(int, const char *, int *, _DWORD))(*(_DWORD *)Global_BasicSoundActor2 + 36))(
        Global_BasicSoundActor2,
        "SE_SYS_ONE_UP_RC",
        &v12,
        0);
      v3 = dword_60C99DD4;
    }
    v5 = 0;
    return sub_603FB964(v3, v5);
  }
  v6 = sub_6078A4C8(PlayerMgr_instance, 0);
  if ( a2 )
  {
    if ( v6 == 1 )
    {
      v7 = FIELD_U32(dword_60CC6484, 128);
      v12 = FIELD_U32(dword_60CC6484, 116);
      v13 = v7;
      (*(void (__fastcall **)(int, const char *, int *, _DWORD))(*(_DWORD *)Global_BasicSoundActor2 + 36))(
        Global_BasicSoundActor2,
        "SE_SYS_ONE_UP",
        &v12,
        0);
      (*(void (__fastcall **)(int, const char *, int *, _DWORD))(*(_DWORD *)Global_BasicSoundActor2 + 36))(
        Global_BasicSoundActor2,
        "SE_SYS_ONE_UP_RC",
        &v12,
        0);
      sub_603FB964(dword_60C99DD4, 0);
    }
    if ( sub_6078A4C8(PlayerMgr_instance, 1) )
    {
      v8 = FIELD_U32(dword_60CC6484, 128);
      v12 = FIELD_U32(dword_60CC6484, 116);
      v13 = v8;
      (*(void (__fastcall **)(int, const char *, int *, _DWORD))(*(_DWORD *)Global_BasicSoundActor2 + 36))(
        Global_BasicSoundActor2,
        "SE_SYS_ONE_UP",
        &v12,
        0);
      (*(void (__fastcall **)(int, const char *, int *, _DWORD))(*(_DWORD *)Global_BasicSoundActor2 + 36))(
        Global_BasicSoundActor2,
        "SE_SYS_ONE_UP_RC",
        &v12,
        0);
      sub_603FB964(dword_60C99DD4, 1);
    }
    if ( sub_6078A4C8(PlayerMgr_instance, 2) == 1 )
    {
      v9 = FIELD_U32(dword_60CC6484, 128);
      v12 = FIELD_U32(dword_60CC6484, 116);
      v13 = v9;
      (*(void (__fastcall **)(int, const char *, int *, _DWORD))(*(_DWORD *)Global_BasicSoundActor2 + 36))(
        Global_BasicSoundActor2,
        "SE_SYS_ONE_UP",
        &v12,
        0);
      (*(void (__fastcall **)(int, const char *, int *, _DWORD))(*(_DWORD *)Global_BasicSoundActor2 + 36))(
        Global_BasicSoundActor2,
        "SE_SYS_ONE_UP_RC",
        &v12,
        0);
      sub_603FB964(dword_60C99DD4, 2);
    }
    result = sub_6078A4C8(PlayerMgr_instance, 3);
    if ( result == 1 )
    {
      v11 = FIELD_U32(dword_60CC6484, 128);
      v12 = FIELD_U32(dword_60CC6484, 116);
      v13 = v11;
      (*(void (__fastcall **)(int, const char *, int *, _DWORD))(*(_DWORD *)Global_BasicSoundActor2 + 36))(
        Global_BasicSoundActor2,
        "SE_SYS_ONE_UP",
        &v12,
        0);
      (*(void (__fastcall **)(int, const char *, int *, _DWORD))(*(_DWORD *)Global_BasicSoundActor2 + 36))(
        Global_BasicSoundActor2,
        "SE_SYS_ONE_UP_RC",
        &v12,
        0);
LABEL_21:
      v3 = dword_60C99DD4;
      v5 = 3;
      return sub_603FB964(v3, v5);
    }
  }
  else
  {
    if ( v6 )
      sub_603FB964(dword_60C99DD4, 0);
    if ( sub_6078A4C8(PlayerMgr_instance, 1) )
      sub_603FB964(dword_60C99DD4, 1);
    if ( sub_6078A4C8(PlayerMgr_instance, 2) == 1 )
      sub_603FB964(dword_60C99DD4, 2);
    result = sub_6078A4C8(PlayerMgr_instance, 3);
    if ( result == 1 )
      goto LABEL_21;
  }
  return result;
}
