/* sub_607C88D4
 * address: 0x607C88D4   size: 520   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607C88D4(int a1, int a2)
{
  float v4; // r1
  float v5; // r2
  int *v6; // r8
  int result; // r0
  int v8; // r1
  unsigned int v9; // r5
  int v10; // r0
  int *v11; // r7
  unsigned int v12; // r5
  int v13; // r0
  Vec3i v14; // [sp+Ch] [bp-34h] BYREF
  Vec3 v15[3]; // [sp+18h] [bp-28h] BYREF

  v4 = FIELD_F32(a1, 112);
  v5 = FIELD_F32(a1, 116);
  v15[0].x = FIELD_F32(a1, 108);
  v15[0].y = v4;
  v15[0].z = v5;
  v6 = (int *)(a1 + 7004);
  if ( FIELD_U32(a1, 7004) == 5 )
  {
    if ( FIELD_F32(a1, 112) < (float)(FIELD_F32(a1, 7012) + -4.0) )
      return sub_6076EEFC(a1);
    v15[0].y = FIELD_F32(a1, 7012);
  }
  v15[0].z = sub_600024C4(a1);
  v8 = -1073741824;
  v14.x = 0;
  if ( FIELD_U32(a1, 11004) == 1 )
    v8 = 0x40000000;
  v14.y = v8;
  v14.z = sub_6014C4A4(a1 + 1328);
  if ( a2 == 1 )
  {
    if ( FIELD_U8(a1, 11000) && FIELD_U32(a1, 10996) == *v6 )
    {
      EffectData_update((EffectData *)(a1 + 10868), v15, &v14, 0);
    }
    else
    {
      v9 = FIELD_S8(a1, 84);
      v10 = (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 1240))(a1);
      sub_60236F74(v9, (EffectData *)(a1 + 10868), v10, v15, &v14, 0);
      FIELD_U8(a1, 11000) = 1;
    }
  }
  else
  {
    sub_60236074(a1 + 10868);
    FIELD_U8(a1, 11000) = 0;
  }
  v15[0].x = v15[0].x + (float)(flt_60B0A898[FIELD_U32(a1, 80)] * 8.0);
  v11 = (int *)(a1 + 10996);
  if ( FIELD_U8(a1, 11001) && *v11 == *v6 )
  {
    EffectData_update((EffectData *)(a1 + 10932), v15, &v14, 0);
  }
  else
  {
    v12 = FIELD_S8(a1, 84);
    v13 = (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 1244))(a1);
    sub_60236F74(v12, (EffectData *)(a1 + 10932), v13, v15, &v14, 0);
    FIELD_U8(a1, 11001) = 1;
  }
  result = *v6;
  *v11 = *v6;
  return result;
}
