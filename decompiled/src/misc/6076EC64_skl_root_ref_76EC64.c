/* skl_root_ref_76EC64
 * address: 0x6076EC64   size: 652   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall skl_root_ref_76EC64(int a1, int a2)
{
  int v4; // r0
  _BOOL4 v5; // r0
  bool v6; // zf
  int *v7; // r9
  int result; // r0
  int v9; // r1
  unsigned int v10; // r6
  int v11; // r0
  int *v12; // r5
  unsigned int v13; // r6
  int v14; // r0
  Vec3i v15; // [sp+8h] [bp-38h] BYREF
  Vec3 v16[3]; // [sp+14h] [bp-2Ch] BYREF

  v4 = FIELD_U32(a1, 648);
  v15.x = (int)&sead__SafeStringBase__vtable;
  v15.y = (int)"skl_root";
  sub_60793F04(FIELD_U32(v4, 4), v16, &v15);
  v5 = sub_6075EE0C(a1);
  v6 = v5;
  if ( v5 )
    v6 = FIELD_U32(a1, 1320) == 9;
  if ( v6 )
  {
    sub_60793F40(*(_DWORD *)(FIELD_U32(a1, 648) + 4), v16, 0);
    v16[0].y = v16[0].y + 3.0;
  }
  v7 = (int *)(a1 + 7004);
  if ( FIELD_U32(a1, 7004) == 5 )
  {
    if ( FIELD_F32(a1, 112) < (float)(FIELD_F32(a1, 7012) + -4.0) )
    {
      if ( FIELD_U8(a1, 11000) )
      {
        sub_60236074(a1 + 10868);
        FIELD_U8(a1, 11000) = 0;
      }
      result = FIELD_U8(a1, 11001);
      if ( FIELD_U8(a1, 11001) )
      {
        sub_60236074(a1 + 10932);
        FIELD_U8(a1, 11001) = 0;
        return 0;
      }
      return result;
    }
    v16[0].y = FIELD_F32(a1, 7012);
  }
  v16[0].z = sub_600024C4(a1);
  v9 = -1073741824;
  v15.x = 0;
  if ( FIELD_U32(a1, 11004) == 1 )
    v9 = 0x40000000;
  v15.y = v9;
  v15.z = sub_6014C4A4(a1 + 1328);
  if ( a2 == 1 )
  {
    if ( FIELD_U8(a1, 11000) && FIELD_U32(a1, 10996) == *v7 )
    {
      EffectData_update((EffectData *)(a1 + 10868), v16, &v15, 0);
    }
    else
    {
      v10 = FIELD_S8(a1, 84);
      v11 = (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 1240))(a1);
      sub_60236F74(v10, (EffectData *)(a1 + 10868), v11, v16, &v15, 0);
      FIELD_U8(a1, 11000) = 1;
    }
  }
  else
  {
    sub_60236074(a1 + 10868);
    FIELD_U8(a1, 11000) = 0;
  }
  v12 = (int *)(a1 + 10996);
  if ( FIELD_U8(a1, 11001) && *v12 == *v7 )
  {
    EffectData_update((EffectData *)(a1 + 10932), v16, &v15, 0);
  }
  else
  {
    v13 = FIELD_S8(a1, 84);
    v14 = (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 1244))(a1);
    sub_60236F74(v13, (EffectData *)(a1 + 10932), v14, v16, &v15, 0);
    FIELD_U8(a1, 11001) = 1;
  }
  result = *v7;
  *v12 = *v7;
  return result;
}
