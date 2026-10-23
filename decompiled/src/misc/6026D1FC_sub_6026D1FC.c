/* sub_6026D1FC
 * address: 0x6026D1FC   size: 496   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6026D1FC(int a1)
{
  _DWORD *v2; // r6
  int v3; // r7
  int v4; // r4
  int v5; // r5
  float v6; // s18
  float v7; // s16
  int v8; // r0
  float v9; // s16
  float v10; // s18
  int v11; // r5
  _DWORD **v12; // r9
  int *v13; // t1
  int v14; // r0
  int (__fastcall *v15)(int, Vec3 *); // r2
  int *v16; // t1
  int v17; // r0
  Vec3 position; // [sp+4h] [bp-9Ch] BYREF
  _DWORD v20[11]; // [sp+34h] [bp-6Ch] BYREF
  Vec2 out; // [sp+60h] [bp-40h] BYREF

  v2 = (_DWORD *)(a1 + 6896);
  v3 = FIELD_U32(a1, 6896);
  v4 = FIELD_U32(a1, 6880);
  v5 = FIELD_U32(a1, 20);
  v6 = FIELD_F32(a1, 112);
  v7 = FIELD_F32(a1, 108);
  memset(&v20[1], 0, 40);
  v8 = v4 + 2 * v3;
  v20[0] = v3 | (16 * dword_60AF2504[v8]) | v5 & 0x300000 | 0x100;
  v9 = v7 + flt_60AF24E4[v8];
  v10 = v6 + flt_60AF24F4[v8];
  v20[3] = Profile__get(0x274u);
  *(float *)&v20[4] = v9;
  *(float *)&v20[5] = v10;
  v20[6] = 0;
  sub_600080BC((_DWORD *)ActorMgr__instance, v20);
  v11 = Global_BasicSoundActor2;
  if ( *v2 == 1 )
  {
    position.x = v9;
    position.y = v10;
    mapPositionToScreen(&out, &position);
    BasicSoundActor2_play(v11, "SE_OBJ_HOUDAI_L_SHOT", &out.x, 0);
    v13 = *(int **)(a1 + 6104);
    v12 = (_DWORD **)(a1 + 6104);
    v14 = *v13;
    v15 = *(int (__fastcall **)(int, Vec3 *))(*(_DWORD *)*v13 + 84);
  }
  else
  {
    position.x = v9;
    position.y = v10;
    mapPositionToScreen(&out, &position);
    BasicSoundActor2_play(v11, "SE_OBJ_HOUDAI_S_SHOT", &out.x, 0);
    v16 = *(int **)(a1 + 6104);
    v12 = (_DWORD **)(a1 + 6104);
    v14 = *v16;
    v15 = *(int (__fastcall **)(int, Vec3 *))(*(_DWORD *)*v16 + 84);
  }
  LODWORD(position.x) = &sead__SafeStringBase__vtable;
  LODWORD(position.y) = "ef_houdai_dokan";
  v17 = v15(v14, &position);
  (*(void (__fastcall **)(_DWORD, int, Vec3 *))(*(_DWORD *)**v12 + 108))(**v12, v17, &position);
  return sub_60236DF4(563, &position, 0);
}
