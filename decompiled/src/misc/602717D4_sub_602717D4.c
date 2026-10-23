/* sub_602717D4
 * address: 0x602717D4   size: 384   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_602717D4(int a1)
{
  int v2; // r7
  float v3; // s16
  float v4; // s18
  int v5; // r5
  int v6; // r6
  int v7; // r1
  float v8; // s20
  float v9; // s16
  float v10; // s18
  int v11; // r5
  int *v12; // t1
  int v13; // r0
  int (__fastcall *v14)(int, Vec3 *); // r2
  int v15; // r0
  Vec3 position; // [sp+4h] [bp-9Ch] BYREF
  _DWORD v18[11]; // [sp+34h] [bp-6Ch] BYREF
  Vec2 out; // [sp+60h] [bp-40h] BYREF

  v2 = FIELD_U32(a1, 7476);
  v3 = FIELD_F32(a1, 108);
  v4 = FIELD_F32(a1, 112);
  v5 = FIELD_U32(a1, 80);
  v6 = FIELD_U32(a1, 7488);
  memset(&v18[1], 0, 40);
  v7 = v5 + 2 * v2;
  v18[0] = (16 * dword_60AF23C4[v7]) | ((v6 == 2) << 6) | 0x30000000;
  v8 = flt_60AF2554[v7] + -8.0;
  v9 = v3 + flt_60AF2544[v7];
  v18[3] = Profile__get(0x209u);
  v10 = v4 + v8;
  *(float *)&v18[4] = v9;
  *(float *)&v18[5] = v10;
  v18[6] = 0;
  sub_600080BC((_DWORD *)ActorMgr__instance, v18);
  position.x = v9;
  position.y = v10;
  v11 = Global_BasicSoundActor2;
  mapPositionToScreen(&out, &position);
  BasicSoundActor2_play(v11, "SE_OBJ_HOUDAI_S_SHOT", &out.x, 0);
  v12 = *(int **)(a1 + 6104);
  v13 = *v12;
  v14 = *(int (__fastcall **)(int, Vec3 *))(*(_DWORD *)*v12 + 84);
  LODWORD(position.x) = &sead__SafeStringBase__vtable;
  LODWORD(position.y) = "ef_houdai_slope";
  v15 = v14(v13, &position);
  (*(void (__fastcall **)(_DWORD, int, Vec3 *))(***(_DWORD ***)(a1 + 6104) + 108))(
    **(_DWORD **)(a1 + 6104),
    v15,
    &position);
  return sub_60236DF4(562, &position, 0);
}
