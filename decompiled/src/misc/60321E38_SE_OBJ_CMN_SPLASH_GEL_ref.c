/* SE_OBJ_CMN_SPLASH_GEL_ref
 * address: 0x60321E38   size: 280   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall SE_OBJ_CMN_SPLASH_GEL_ref(int a1)
{
  _BOOL4 v2; // r4
  int v3; // r6
  int v4; // r7
  int *v5; // r6
  float v6; // r1
  int v7; // r8
  int v9; // [sp+0h] [bp-30h] BYREF
  int v10; // [sp+4h] [bp-2Ch] BYREF
  Vec2 out; // [sp+8h] [bp-28h] BYREF
  Vec3 position; // [sp+10h] [bp-20h] BYREF

  v2 = 0;
  FIELD_U8(a1, 6056) = 2;
  v3 = a1 + 108;
  ((void (__fastcall *)(int *, _DWORD, int, _DWORD))checkLiquidCollisions)(
    &v10,
    0,
    a1 + 108,
    FIELD_U8(a1, 86));
  if ( v10 )
  {
    sub_600038DC((Enemy *)a1);
    v4 = 1;
    v2 = FIELD_U32(a1, 80) == 0;
  }
  else
  {
    v4 = 0;
  }
  ((void (__fastcall *)(int *, _DWORD, int, _DWORD))checkLiquidCollisions)(&v9, 0, v3, FIELD_U8(a1, 86));
  if ( v9 )
  {
    sub_600038DC((Enemy *)a1);
    ++v4;
    if ( (FIELD_U32(a1, 80) | 2) == 3 )
      v2 = 1;
  }
  v5 = (int *)(a1 + 7328);
  if ( v4 && v4 <= 1 && v4 != *v5 )
  {
    v6 = FIELD_F32(a1, 112);
    v7 = Global_BasicSoundActor1;
    position.x = FIELD_F32(a1, 108);
    position.y = v6;
    mapPositionToScreen(&out, &position);
    BasicSoundActor1_playSound(v7, "SE_OBJ_CMN_SPLASH_GEL", (int)&out, 0);
  }
  *v5 = v4;
  return v2;
}
