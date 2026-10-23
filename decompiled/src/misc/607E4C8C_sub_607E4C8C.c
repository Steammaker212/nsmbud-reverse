/* sub_607E4C8C
 * address: 0x607E4C8C   size: 500   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall sub_607E4C8C(int a1)
{
  int v2; // r8
  int v3; // r9
  int v4; // r6
  float v5; // s18
  int v6; // r7
  int v7; // r1
  signed int result; // r0
  _DWORD v9[14]; // [sp+8h] [bp-38h] BYREF

  ModelWrapper_updateAnims(*(ModelWrapper **)(a1 + 2556));
  ModelWrapper_updateModel(*(ModelWrapper **)(a1 + 2556));
  ModelWrapper_updateAnims(*(ModelWrapper **)(a1 + 2560));
  ModelWrapper_updateModel(*(ModelWrapper **)(a1 + 2560));
  ModelWrapper_updateAnims(*(ModelWrapper **)(a1 + 2564));
  ModelWrapper_updateModel(*(ModelWrapper **)(a1 + 2564));
  ModelWrapper_updateAnims(*(ModelWrapper **)(a1 + 2568));
  ModelWrapper_updateAnims(*(ModelWrapper **)(a1 + 2572));
  ModelWrapper_updateAnims(*(ModelWrapper **)(a1 + 2576));
  ModelWrapper_updateAnims(*(ModelWrapper **)(a1 + 2580));
  ModelWrapper_updateModel(*(ModelWrapper **)(a1 + 2568));
  ModelWrapper_updateModel(*(ModelWrapper **)(a1 + 2572));
  ModelWrapper_updateModel(*(ModelWrapper **)(a1 + 2576));
  ModelWrapper_updateModel(*(ModelWrapper **)(a1 + 2580));
  ModelWrapper_updateAnims(*(ModelWrapper **)(a1 + 2584));
  ModelWrapper_updateModel(*(ModelWrapper **)(a1 + 2584));
  ModelWrapper_updateAnims(*(ModelWrapper **)(a1 + 2588));
  ModelWrapper_updateModel(*(ModelWrapper **)(a1 + 2588));
  ModelWrapper_updateAnims(*(ModelWrapper **)(a1 + 2592));
  ModelWrapper_updateModel(*(ModelWrapper **)(a1 + 2592));
  ModelWrapper_updateAnims(*(ModelWrapper **)(a1 + 2596));
  ModelWrapper_updateModel(*(ModelWrapper **)(a1 + 2596));
  v2 = FIELD_U32(a1, 2340);
  v3 = FIELD_U32(a1, 2336);
  v4 = FIELD_U32(a1, 2348);
  v5 = FIELD_F32(a1, 2620);
  ((void (__fastcall *)(int, float, float, float, float))loc_60832560)(a1 + 2620, 1.0, 0.01, 0.005, 0.001);
  v6 = dword_60CD0B40;
  FIELD_U32(a1, 2336) = v3;
  FIELD_U32(a1, 2340) = v2;
  FIELD_F32(a1, 2344) = (float)(v5 * 574.0) + 806.0;
  FIELD_U32(a1, 2348) = v4;
  FIELD_F32(a1, 2352) = (float)(v5 * -140.0) + 620.0;
  FIELD_U32(a1, 2356) = v4;
  (*(void (__fastcall **)(int, int))(FIELD_U32(a1, 2284) + 16))(a1 + 2284, a1 + 2288);
  v7 = FIELD_U32(v6, 36);
  if ( FIELD_U32(v6, 32) > 6u )
    v7 += 24;
  *(_DWORD *)(*(_DWORD *)v7 + 72) = a1 + 2284;
  sub_60427048((_DWORD *)dword_60C9BBD4, 1.0 - FIELD_F32(a1, 2620));
  result = FIELD_U32(a1, 2616) - 1;
  FIELD_U32(a1, 2616) = result;
  if ( !result )
  {
    FIELD_U16(dword_60CC6D78, 109048) = 10;
    v9[0] = 2;
    v9[1] = DemoScene_create;
    return SceneMgr_doSceneChange(dword_60CC62E4, a1, (int)v9, 0, 0);
  }
  return result;
}
