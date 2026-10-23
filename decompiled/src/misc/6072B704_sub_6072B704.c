/* sub_6072B704
 * address: 0x6072B704   size: 648   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned int __fastcall sub_6072B704(int a1)
{
  float v2; // r1
  int v3; // r5
  char v4; // r8
  _DWORD **v5; // r6
  int v6; // r0
  int (__fastcall *v7)(int, Vec3 *); // r2
  int v8; // r0
  int v9; // r0
  float y; // r2
  int v11; // r3
  int v12; // r1
  int v13; // r0
  float *v14; // r0
  float v15; // s16
  float v16; // s18
  float v17; // s20
  float v18; // s22
  int v19; // r0
  int v20; // r1
  unsigned int result; // r0
  unsigned int v22; // r7
  unsigned int *v23; // r6
  int v24; // r8
  int v25; // r0
  int v26; // r1
  int v27; // r0
  Vec2 out; // [sp+4h] [bp-7Ch] BYREF
  int v29; // [sp+Ch] [bp-74h]
  Vec3 position; // [sp+10h] [bp-70h] BYREF

  v2 = FIELD_F32(a1, 112);
  v3 = Global_BasicSoundActor1;
  position.x = FIELD_F32(a1, 108);
  position.y = v2;
  mapPositionToScreen(&out, &position);
  v4 = 0;
  BasicSoundActor1_playSound(v3, "SE_MG_CM_CANNON_SHOT", (int)&out, 0);
  v5 = (_DWORD **)(a1 + 6300);
  v6 = **(_DWORD **)(a1 + 6300);
  v7 = *(int (__fastcall **)(int, Vec3 *))(*(_DWORD *)v6 + 84);
  LODWORD(position.x) = &sead__SafeStringBase__vtable;
  LODWORD(position.y) = "coin";
  v8 = v7(v6, &position);
  (*(void (__fastcall **)(_DWORD, int, Vec3 *))(*(_DWORD *)**v5 + 108))(**v5, v8, &position);
  ((void (__fastcall *)(Vec2 *, Vec3 *))loc_6072C40C)(&out, &position);
  v9 = FIELD_U32(a1, 80);
  y = out.y;
  v11 = v29;
  FIELD_F32(a1, 6352) = out.x;
  if ( !v9 )
    LODWORD(y) = 0x80000000 - LODWORD(y);
  FIELD_F32(a1, 6356) = y;
  FIELD_U32(a1, 6360) = v11;
  sub_60236DF4(260, &position, 0);
  ++FIELD_U8(a1, 6306);
  LODWORD(out.x) = &sead__SafeStringBase__vtable;
  LODWORD(out.y) = "miniGame_mochimaki";
  v12 = LoadResource(ResourceMgrRelated_instance, &out);
  v13 = *(_DWORD *)(*v5)[3];
  LODWORD(out.x) = &sead__SafeStringBase__vtable;
  LODWORD(out.y) = "mochimakiCannon_launch";
  SkeletalAnim_play(v13, v12, (const char **)&out);
  AnimationCtrl_setRepeat((ModelAnimation *)(*(_DWORD *)(*v5)[3] + 4), 0);
  v14 = (float *)((char *)&unk_60B0A1F0 + 16 * FIELD_S8(a1, 6324));
  v15 = *v14;
  v16 = v14[1];
  v17 = v14[2];
  v18 = v14[3];
  sub_6072B9B0(a1, *v14, v16, v17, v18);
  v19 = FIELD_S8(a1, 6324);
  v20 = (char)(v19 + 1) % 3;
  FIELD_U8(a1, 6324) = v20;
  if ( v19 < v20 )
    v4 = 1;
  FIELD_U8(a1, 6325) = v4;
  result = FIELD_U8(a1, 6306);
  if ( result >= 2 )
  {
    v22 = FIELD_U32(a1, 6340);
    v23 = (unsigned int *)(a1 + 6336);
    v24 = v22 - FIELD_U32(a1, 6336);
    v25 = (sead__Random__getU32((void *)(dword_60C9CF0C + 1340)) * (unsigned __int64)v22) >> 32;
    v26 = FIELD_U32(a1, 6336);
    if ( v26 )
      *v23 = --v26;
    if ( v25 < v24 || (result = FIELD_U8(a1, 6348), FIELD_U8(a1, 6348)) )
    {
      sub_6072BBD8(a1, v26, v15, v16, v17, v18);
      v27 = sub_6072B2F8(a1);
      result = sub_6072EC40(v27);
      FIELD_U32(a1, 6340) = result;
      *v23 = result;
    }
  }
  return result;
}
