/* SE_EMY_WANWAN_ESCAPE_ref
 * address: 0x603D76BC   size: 396   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_EMY_WANWAN_ESCAPE_ref(CollisionActor *a1)
{
  float v2; // s0
  int v3; // r0
  bool v4; // zf
  int result; // r0
  bool v6; // zf
  float y; // r1
  int v8; // r5
  Vec3 v9; // [sp+0h] [bp-38h] BYREF
  int v10; // [sp+Ch] [bp-2Ch]
  int *v11; // [sp+10h] [bp-28h]
  char v12; // [sp+14h] [bp-24h]
  int direction; // [sp+18h] [bp-20h]
  char v14; // [sp+1Ch] [bp-1Ch]
  Vec2 out; // [sp+20h] [bp-18h] BYREF

  v9.x = 0.0;
  out.x = 4.702e-38;
  moveValueTo(&FIELD_U32(a1, 0x0).rotation.x, (int *)&v9, (int *)&out);
  LODWORD(v9.x) = dword_60AF1EC0[FIELD_U32(a1, 0x0).direction];
  out.x = 1.5046e-36;
  moveValueTo(&FIELD_U32(a1, 0x0).rotation.y, (int *)&v9, (int *)&out);
  CollisionActor__handleGravity(a1);
  FIELD_U32(a1, 0x0).position.x = FIELD_U32(a1, 0x0).position.x + FIELD_U32(a1, 0x0).speed.x;
  FIELD_U32(a1, 0x0).position.y = FIELD_U32(a1, 0x0).position.y + FIELD_U32(a1, 0x0).speed.y;
  v2 = FIELD_U32(a1, 0x0).position.z + FIELD_U32(a1, 0x0).speed.z;
  FIELD_U32(a1, 0x0).position.z = v2;
  CollisionMgr_process(FIELD_U8(a1, 0x288), v2);
  v3 = sub_6000346C((int)a1);
  v4 = v3 == 1;
  if ( v3 == 1 )
    v4 = (FIELD_U8(a1, 0x288)[2227] & 1) == 0;
  if ( v4 )
  {
    v9.x = 0.0;
    v9.y = 3.0;
    v9.z = -4.0;
    v10 = -1103101952;
    v11 = &dword_60C990D4;
    v12 = -1;
    direction = FIELD_U32(a1, 0x0).direction;
    v14 = -1;
    return sub_602A852C((int)&a1[1]._._.childCount, &v9);
  }
  else
  {
    result = sub_60003460((int)a1);
    v6 = result == 1;
    if ( result == 1 )
    {
      result = (unsigned __int8)FIELD_U8(a1, 0x288)[2224];
      v6 = (result & 0x20) == 0;
    }
    if ( v6 )
    {
      FIELD_U32(a1, 0x0).speed.y = 3.0;
      y = FIELD_U32(a1, 0x0).position.y;
      v8 = Global_BasicSoundActor1;
      v9.x = FIELD_U32(a1, 0x0).position.x;
      v9.y = y;
      mapPositionToScreen(&out, &v9);
      return BasicSoundActor1_playSound(v8, "SE_EMY_WANWAN_ESCAPE", (int)&out, 0);
    }
  }
  return result;
}
