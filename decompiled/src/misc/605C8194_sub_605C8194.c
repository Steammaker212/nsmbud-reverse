/* sub_605C8194
 * address: 0x605C8194   size: 384   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float *__fastcall sub_605C8194(int a1)
{
  int v2; // r2
  float *result; // r0
  float v4; // s0
  int v5; // r2
  int v6; // r3
  int v7; // r2
  bool v8; // zf
  float v9; // s16
  int ProfileId; // r0
  bool v11; // zf
  float v12; // s2
  float v13; // s0

  v2 = FIELD_U8(a1, 2943);
  result = (float *)dword_60CC6484;
  v4 = FIELD_F32(dword_60CC6484, 112);
  if ( v2 == 1 )
  {
    if ( FIELD_F32(AreaTask_intance, 1820) <= (float)(v4 + FIELD_F32(dword_60CC6484, 104)) )
      return result;
  }
  else if ( FIELD_F32(AreaTask_intance, 1812) >= v4 )
  {
    return result;
  }
  v5 = FIELD_S8(a1, 2941);
  if ( (unsigned __int8)v5 != 255 )
  {
    v6 = FIELD_U16(PlayerMgr_instance, 66) & (1 << v5);
    if ( (unsigned __int8)v5 >= 4u )
      v5 = 0;
    if ( !(_WORD)v6 )
      goto LABEL_20;
    v7 = *(_DWORD *)(PlayerMgr_instance + 4 * v5 + 48);
    v8 = (FIELD_U8(v7, 1220) & 4) == 0;
    if ( (FIELD_U8(v7, 1220) & 4) == 0 )
      v8 = (FIELD_U8(v7, 1208) & 1) == 0;
    if ( v8 )
    {
LABEL_20:
      FIELD_U8(a1, 2941) = -1;
      FIELD_U32(a1, 2936) = 0;
      return (float *)sub_607FE8D0(result + 62, 60, result[4], result[29], result[32]);
    }
    else
    {
      v9 = FIELD_F32(a1, 2948) + (float)(FIELD_F32(v7, 108) - FIELD_F32(a1, 2952));
      ProfileId = Actor__getProfileId((Actor *)a1);
      v11 = ProfileId == 146;
      if ( ProfileId == 146 )
        v11 = FIELD_U32(a1, 2936) == 2;
      if ( v11 )
      {
        v12 = FIELD_F32(dword_60CC6484, 104);
        v13 = FIELD_F32(dword_60CC6484, 32);
        if ( (float)(v9 + v12) > v13 )
          v9 = v13 - v12;
      }
      result = (float *)dword_60CC6484;
      FIELD_F32(dword_60CC6484, 264) = v9;
    }
  }
  return result;
}
