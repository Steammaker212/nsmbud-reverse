/* sub_60271648
 * address: 0x60271648   size: 360   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60271648(int a1)
{
  float v2; // s16
  float v3; // s18
  int v4; // r6
  int v5; // r7
  int v6; // r5
  int v7; // r0
  float v8; // s16
  float v9; // s18
  int v10; // r5
  int *v11; // t1
  int v12; // r0
  int (__fastcall *v13)(int, Vec3 *); // r2
  int v14; // r0
  Vec3 position; // [sp+4h] [bp-94h] BYREF
  _DWORD v17[11]; // [sp+34h] [bp-64h] BYREF
  Vec2 out; // [sp+60h] [bp-38h] BYREF

  v2 = FIELD_F32(a1, 108);
  v3 = FIELD_F32(a1, 112);
  v4 = FIELD_U32(a1, 7476);
  v5 = FIELD_U32(a1, 20);
  v6 = FIELD_U32(a1, 80);
  memset(&v17[1], 0, 40);
  v7 = v6 + 2 * v4;
  v17[0] = v5 & 0x300000 | (16 * dword_60AF2564[v7]);
  v8 = v2 + flt_60AF2544[v7];
  v9 = v3 + flt_60AF2554[v7];
  v17[3] = Profile__get(0x274u);
  *(float *)&v17[4] = v8;
  *(float *)&v17[5] = v9;
  v17[6] = 1120403456;
  sub_600080BC((_DWORD *)ActorMgr__instance, v17);
  position.x = v8;
  position.y = v9;
  v10 = Global_BasicSoundActor2;
  mapPositionToScreen(&out, &position);
  BasicSoundActor2_play(v10, "SE_OBJ_HOUDAI_S_SHOT", &out.x, 0);
  v11 = *(int **)(a1 + 6104);
  v12 = *v11;
  v13 = *(int (__fastcall **)(int, Vec3 *))(*(_DWORD *)*v11 + 84);
  LODWORD(position.x) = &sead__SafeStringBase__vtable;
  LODWORD(position.y) = "ef_houdai_slope";
  v14 = v13(v12, &position);
  (*(void (__fastcall **)(_DWORD, int, Vec3 *))(***(_DWORD ***)(a1 + 6104) + 108))(
    **(_DWORD **)(a1 + 6104),
    v14,
    &position);
  return sub_60236DF4(562, &position, 0);
}
