/* SE_PLY_CH_YOSHI_ref
 * address: 0x605D9A84   size: 304   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_PLY_CH_YOSHI_ref(int a1)
{
  int v2; // r5
  int v3; // r0
  int v4; // r1
  int v5; // r0
  float v6; // r1
  int v7; // r5
  const char *v8; // r1
  float v9; // r1
  Vec2 v11; // [sp+0h] [bp-20h] BYREF
  Vec3 position; // [sp+8h] [bp-18h] BYREF

  FIELD_U32(a1, 6260) |= 0x18u;
  v2 = a1 + 6264;
  FIELD_U32(a1, 6264) |= 2u;
  sub_605EAB48(a1 + 6064, 0.0);
  v3 = *(_DWORD *)(v2 - 6184);
  *(_DWORD *)(v2 - 6108) = 0;
  v4 = 0x40000000;
  if ( v3 == 1 )
    v4 = -1073741824;
  *(_DWORD *)(v2 - 6104) = v4;
  *(_DWORD *)(v2 - 6100) = 0;
  FIELD_U32(v2, 80) = 0;
  v5 = FIELD_U32(v2, 1736);
  if ( (v5 | 1) == 1 )
  {
    v6 = FIELD_F32(a1, 112);
    v7 = Global_BasicSoundActor2;
    position.x = FIELD_F32(a1, 108);
    position.y = v6;
    mapPositionToScreen(&v11, &position);
    v8 = "SE_PLY_CH_YOSHI_KERU";
LABEL_7:
    BasicSoundActor2_play(v7, v8, &v11.x, 0);
    goto LABEL_8;
  }
  if ( v5 == 2 )
  {
    v9 = FIELD_F32(a1, 112);
    v7 = Global_BasicSoundActor2;
    position.x = FIELD_F32(a1, 108);
    position.y = v9;
    mapPositionToScreen(&v11, &position);
    v8 = "SE_PLY_CH_YOSHI_FUMU";
    goto LABEL_7;
  }
LABEL_8:
  FIELD_U8(a1, 6348) = 0;
  return 6348;
}
