/* sub_601C8380
 * address: 0x601C8380   size: 668   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601C8380(int a1)
{
  int result; // r0
  int v3; // r0
  int v4; // r0
  int v5; // r5
  int v6; // r0
  int v7; // r0
  int v8; // r0
  int v9; // r5
  int v10; // r0
  _DWORD *v11; // r0
  int v12; // [sp+4h] [bp-1Ch] BYREF
  int v13; // [sp+8h] [bp-18h]
  int v14; // [sp+Ch] [bp-14h]

  result = FIELD_U32(a1, 1012);
  if ( result > 9 )
  {
    if ( result == 10 )
    {
      result = *(unsigned __int8 *)(sub_601918EC(dword_60C8996C) + 308);
      if ( (result & 1) == 0 )
        return result;
      v7 = FIELD_U32(a1, 1124);
      if ( v7 >= 1 )
      {
        result = v7 - 1;
        FIELD_U32(a1, 1124) = result;
        return result;
      }
    }
    else if ( result != 100 )
    {
      return result;
    }
    return (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 72))(a1);
  }
  if ( !result )
  {
    v5 = FIELD_U32(a1, 1124);
    if ( v5 >= 1 )
    {
      v6 = v5 - 1;
LABEL_12:
      FIELD_U32(a1, 1124) = v6;
LABEL_13:
      result = sub_601C7FD4(a1);
      FIELD_F32(a1, 996) = sqrtf(
                               (float)(FIELD_F32(a1, 124) * FIELD_F32(a1, 124))
                             + (float)(FIELD_F32(a1, 116) * FIELD_F32(a1, 116)));
      return result;
    }
    v8 = sub_601918EC(dword_60C8996C);
    if ( !v5 )
    {
      FIELD_U8(v8, 308) = 0;
      sub_607F68AC(dword_60CC62E4, 0);
      FIELD_U32(dword_60CC62E4, 128) = 30;
      if ( (unsigned int)(FIELD_U32(dword_60CC6D78, 412) - 7) <= 1 )
        sub_6080A1A0(SoundSystem_instance, 30);
      v6 = -1;
      goto LABEL_12;
    }
    if ( (FIELD_U8(v8, 308) & 2) == 0 )
      goto LABEL_13;
    v12 = -1;
    v13 = -1;
    v14 = -1;
    sub_601E06F0(FIELD_U32(a1, 1208), &v12);
    v9 = dword_60CC6D78;
    v10 = FIELD_U32(dword_60CC6D78, 412);
    if ( v10 == 7 )
    {
      if ( v12 == 8 )
LABEL_30:
        sub_601FF5A8(dword_60C8C188, 1);
    }
    else if ( v10 == 8 )
    {
      goto LABEL_30;
    }
    FIELD_U32(v9, 444) = v12;
    FIELD_U32(a1, 1012) = 1;
    goto LABEL_13;
  }
  if ( result == 1 )
  {
    v12 = -1;
    v13 = -1;
    v14 = -1;
    v3 = FIELD_U32(a1, 1212);
    if ( v3 == 8 )
    {
      sub_601E0AB8(&v12);
      FIELD_U32(a1, 1124) = 30;
      FIELD_U32(a1, 128) = 0;
      FIELD_U32(a1, 132) = 0;
      FIELD_U32(a1, 136) = 0;
      v4 = 10;
    }
    else
    {
      if ( v3 != 7 )
      {
LABEL_25:
        v11 = (_DWORD *)sub_601DFFE4(&v12);
        FIELD_U32(a1, 80) = v11[18];
        FIELD_U32(a1, 84) = v11[19];
        FIELD_U32(a1, 88) = v11[20];
        FIELD_U32(a1, 1032) = v11[21];
        FIELD_U32(a1, 1036) = v11[22];
        FIELD_U32(a1, 1040) = v11[24];
        FIELD_U32(a1, 1092) = 5;
        sub_60173634((__n64 *)dword_60C88BC8, (unsigned int *)(a1 + 1032));
        FIELD_U32(a1, 1216) = 0;
        return 0;
      }
      sub_601E0A30(&v12);
      v4 = 100;
    }
    FIELD_U32(a1, 1012) = v4;
    goto LABEL_25;
  }
  return result;
}
