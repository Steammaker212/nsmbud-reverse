/* balloon_coin_model_ref_2
 * address: 0x6057C53C   size: 568   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall balloon_coin_model_ref_2(int a1)
{
  int result; // r0
  unsigned int v3; // r0
  int v4; // r7
  float v5; // s16
  float v6; // r8
  float v7; // s18
  float v8; // s20
  float v9; // s18
  int *v10; // t1
  int v11; // r0
  int (__fastcall *v12)(int, ActorBuildInfo *); // r2
  int v13; // r0
  ActorBuildInfo v14[2]; // [sp+0h] [bp-60h] BYREF

  if ( sub_605D01D4() == 1 )
  {
    MovementBlockCoinBase__vf150(a1);
    if ( FIELD_U32(a1, 7524) )
    {
      return EffectData_create(442, (Vec3 *)(a1 + 7508), 0, 0);
    }
    else
    {
      v10 = *(int **)(a1 + 7484);
      v11 = *v10;
      v12 = *(int (__fastcall **)(int, ActorBuildInfo *))(*(_DWORD *)*v10 + 84);
      v14[0].settings1 = (int)&sead__SafeStringBase__vtable;
      v14[0].settings2 = (int)"balloon_coin_model";
      v13 = v12(v11, v14);
      (*(void (__fastcall **)(_DWORD, int, ActorBuildInfo *))(***(_DWORD ***)(a1 + 7484) + 108))(
        **(_DWORD **)(a1 + 7484),
        v13,
        v14);
      return sub_60236DF4(441, v14, 1);
    }
  }
  else
  {
    v3 = FIELD_U32(a1, 7552);
    FIELD_F32(a1, 112) = FIELD_F32(a1, 7500)
                         + (float)((float)(*(float *)((char *)sinLutTable + ((v3 >> 20) & 0xFF0))
                                         + (float)((float)((float)(v3 & 0xFFFFFF)
                                                         * *(float *)((char *)&sinLutTable[1] + ((v3 >> 20) & 0xFF0)))
                                                 * 0.000000059605))
                                 * 4.0);
    FIELD_U32(a1, 7552) = v3 + 0x1000000;
    sub_6057A67C(a1);
    v4 = FIELD_U32(a1, 7544);
    if ( v4 )
    {
      v5 = FIELD_F32(a1, 7500);
      v6 = FIELD_F32(a1, 7504);
      v7 = FIELD_F32(a1, 7496);
      memset(&v14[0].settings2, 0, 36);
      v14[0].settings1 = 0x20000;
      v8 = flt_60B04844[v4];
      v9 = v7 + flt_60B04838[v4];
      v14[0].profile = Profile__get(0x199u);
      v14[0].position.x = v9;
      v14[0].position.y = v5 + v8;
      v14[0].position.z = v6;
      v14[0].field_20 = FIELD_U8(a1, 86);
      v14[0].eventId1 = 0;
      v14[0].eventId2 = 0;
      v14[0].field_28 = 0;
      ActorMgr__create((void *)ActorMgr__instance, v14, 0);
      --FIELD_U32(a1, 7544);
    }
    result = FIELD_U8(dword_60C9CF0C, 1361);
    if ( FIELD_U8(dword_60C9CF0C, 1361) )
    {
      result = FIELD_U32(a1, 7580);
      if ( !result )
        return sub_602A3EFC(a1 + 7556, 8, 0.0625);
    }
  }
  return result;
}
