/* DryBones_checkCollapse
 * address: 0x60316E28   size: 268   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall DryBones_checkCollapse(StageActor *a1)
{
  int result; // r0
  float v3; // s18
  float y; // r0
  float x; // s16
  float v6; // r1
  int v7; // r5
  Vec3 v8; // [sp+0h] [bp-50h] BYREF
  int v9; // [sp+Ch] [bp-44h]
  StateVirtual *v10; // [sp+10h] [bp-40h]
  char v11; // [sp+14h] [bp-3Ch]
  _BOOL4 v12; // [sp+18h] [bp-38h]
  char v13; // [sp+1Ch] [bp-34h]
  Vec2 out; // [sp+20h] [bp-30h] BYREF

  result = sub_60003AE0(a1);
  if ( result == 1 )
  {
    y = FIELD_F32(a1, 0x70);
    x = FIELD_F32(a1, 0x248);
    v8.x = FIELD_F32(a1, 0x6C);
    v3 = v8.x;
    v8.y = y;
    v8.z = 0.0;
    sub_602A38A4((int)a1, &v8.x);
    v6 = FIELD_F32(a1, 0x70);
    v7 = Global_BasicSoundActor1;
    v8.x = FIELD_F32(a1, 0x6C);
    v8.y = v6;
    mapPositionToScreen(&out, &v8);
    BasicSoundActor1_playSound(v7, "SE_EMY_DOWN", (int)&out, 0);
    LODWORD(v8.x) = dword_60AFE3F8[(float)(v3 - x) < 0.0];
    v8.y = 3.9;
    v8.z = -4.0;
    v9 = unk_60C906E8;
    v10 = &stru_60C90710;
    v11 = -1;
    v12 = (float)(v3 - x) < 0.0;
    v13 = -1;
    return sub_602A852C((int)&a1[9].aCollider.info.distToCenter.y, &v8);
  }
  return result;
}
