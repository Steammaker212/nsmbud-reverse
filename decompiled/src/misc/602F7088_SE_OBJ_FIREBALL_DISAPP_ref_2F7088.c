/* SE_OBJ_FIREBALL_DISAPP_ref_2F7088
 * address: 0x602F7088   size: 156   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_OBJ_FIREBALL_DISAPP_ref_2F7088(unsigned __int8 *a1, int a2, int a3)
{
  _BYTE *v4; // r0
  int v5; // t1
  int v6; // r5
  int v7; // r0
  float v8; // r1
  float v9; // r0
  Vec2 v11; // [sp+0h] [bp-20h] BYREF
  Vec3 position; // [sp+8h] [bp-18h] BYREF

  v5 = a1[6320];
  v4 = a1 + 6320;
  if ( v5 )
  {
    *v4 = 0;
    v6 = Global_BasicSoundActor2;
    v7 = FIELD_U32(a3, 64);
    v8 = FIELD_F32(v7, 108);
    v9 = FIELD_F32(v7, 112);
    position.x = v8;
    position.y = v9;
    mapPositionToScreen(&v11, &position);
    BasicSoundActor2_play(v6, "SE_OBJ_FIREBALL_DISAPP", &v11.x, 0);
    (*(void (__fastcall **)(unsigned __int8 *, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C92870);
  }
  else
  {
    Enemy__collisionFireball((float *)a1, a2, a3);
  }
  return 1;
}
