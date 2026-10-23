/* sub_607F1978
 * address: 0x607F1978   size: 488   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall sub_607F1978(int a1)
{
  int v2; // r4
  signed int result; // r0
  int v4; // r6
  int v5; // r7
  int v6; // r1
  int v7; // r0
  unsigned __int8 *v8; // r1
  int v9; // r1
  int v10; // r3
  int (__fastcall *v11)(int); // r0
  int v12; // r2
  _DWORD v13[2]; // [sp+8h] [bp-28h] BYREF
  signed int v14; // [sp+10h] [bp-20h]
  int v15; // [sp+14h] [bp-1Ch]

  v2 = dword_60CC62E4;
  result = dword_60C99E2C + 615724;
  v15 = FIELD_U32(dword_60C99E2C, 615724);
  if ( (unsigned int)(v15 - 3) >= 3 )
  {
    if ( v15 == 6 )
    {
      v10 = 131074;
      v9 = a1;
      v13[0] = 2;
      v11 = GameSetupScene_create;
    }
    else
    {
      if ( v15 != 7 )
        return result;
      v9 = a1;
      v10 = 2;
      v13[0] = 2;
      v11 = MultiPlayCourseSelectScene_create;
    }
    v13[1] = v11;
    return SceneMgr_doSceneChange(dword_60CC62E4, v9, (int)v13, v10, 0);
  }
  else
  {
    v4 = 0;
    v5 = dword_60C99DEC;
    FIELD_U32(dword_60C99DEC, 88) = 0;
    FIELD_U32(v5, 104) = 0;
    FIELD_U32(v5, 100) = 0;
    FIELD_U32(v5, 44) = 0;
    FIELD_U32(v5, 160) = 0;
    FIELD_U32(v5, 176) = 0;
    FIELD_U32(v5, 172) = 0;
    FIELD_U32(v5, 116) = 0;
    FIELD_U32(v5, 232) = 0;
    FIELD_U32(v5, 248) = 0;
    FIELD_U32(v5, 244) = 0;
    FIELD_U32(v5, 188) = 0;
    FIELD_U32(v5, 304) = 0;
    FIELD_U32(v5, 316) = 0;
    FIELD_U32(v5, 320) = 0;
    FIELD_U32(v5, 260) = 0;
    if ( *(_DWORD *)result == 5 )
    {
      FIELD_U8(v5, 530) = 1;
      sub_60400F18(dword_60C99E44);
      if ( FIELD_U8(v5, 532) < 5u )
        v4 = FIELD_U8(v5, 532);
      v6 = v5 + 4 * v4;
      v7 = FIELD_U32(v6, 540);
      FIELD_U8(v5, 528) = v7;
      FIELD_U8(v5, 529) = FIELD_U32(v6, 560);
      v8 = (unsigned __int8 *)(v5 + 529);
    }
    else
    {
      FIELD_U8(v5, 530) = 0;
      LOBYTE(v7) = FIELD_U8(v5, 528);
      v8 = (unsigned __int8 *)(v5 + 529);
    }
    v12 = dword_60CC6D78;
    FIELD_U32(dword_60CC6D78, 412) = (unsigned __int8)v7;
    FIELD_U32(v12, 424) = *v8;
    sub_607F67E8(v2, a1);
    v14 = FIELD_U32(dword_60C99E2C, 615724);
    result = v14;
    switch ( v14 )
    {
      case 5:
        result = 0x20000;
        goto LABEL_19;
      case 4:
        result = 589824;
        goto LABEL_19;
      case 3:
        result = 0;
LABEL_19:
        FIELD_U32(v2, 108) = result;
        break;
    }
  }
  return result;
}
