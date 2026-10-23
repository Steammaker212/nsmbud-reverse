/* SE_OBJ_FIREBALL_DISAPP_ref_2F6BC4
 * address: 0x602F6BC4   size: 276   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_OBJ_FIREBALL_DISAPP_ref_2F6BC4(int a1, ActiveCollider *a2, ActiveCollider *a3)
{
  int v5; // r7
  Actor *v6; // r9
  int v7; // r7
  StageActor *owner; // r0
  float x; // r1
  float y; // r0
  Vec2 v12; // [sp+0h] [bp-30h] BYREF
  Vec3 position; // [sp+8h] [bp-28h] BYREF

  if ( Enemy__vf100((Enemy *)a1, a2, a3) )
    return 1;
  v5 = 0;
  if ( FIELD_U8(a1, 6320) )
  {
    v6 = &FIELD_U32(a3, 0x40);
    if ( Actor__getProfileId(v6) == 763 || Actor__getProfileId(v6) == 477 )
    {
      FIELD_U8(a1, 6320) = 0;
      v7 = Global_BasicSoundActor2;
      owner = FIELD_U32(a3, 0x40);
      x = FIELD_F32(owner, 0x6C);
      y = FIELD_F32(owner, 0x70);
      position.x = x;
      position.y = y;
      mapPositionToScreen(&v12, &position);
      BasicSoundActor2_play(v7, "SE_OBJ_FIREBALL_DISAPP", &v12.x, 0);
      (*(void (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C92870);
      FIELD_U8(a3, 0x6E) |= 2u;
      if ( v6 )
      {
        (*(void (__fastcall **)(Actor *))(FIELD_U32(v6, 0x0) + 240))(v6);
        sub_601362A0((int)v6);
      }
      return 1;
    }
  }
  return v5;
}
