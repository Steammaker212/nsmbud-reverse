/* SE_OBJ_PNGN_ICE_BREAK_ref_6D5C84
 * address: 0x606D5C84   size: 280   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_OBJ_PNGN_ICE_BREAK_ref_6D5C84(int a1)
{
  float v2; // s0
  float v3; // r1
  int v4; // r5
  Vec3 v6; // [sp+0h] [bp-30h] BYREF
  int v7; // [sp+Ch] [bp-24h]
  char v8; // [sp+10h] [bp-20h]
  char v9; // [sp+11h] [bp-1Fh]
  char v10; // [sp+12h] [bp-1Eh]
  char v11; // [sp+13h] [bp-1Dh]
  char v12; // [sp+14h] [bp-1Ch]
  char v13; // [sp+15h] [bp-1Bh]
  char v14; // [sp+16h] [bp-1Ah]
  Vec2 out; // [sp+18h] [bp-18h] BYREF

  if ( FIELD_U8(a1, 6848) )
  {
    v6 = *(Vec3 *)(a1 + 6836);
    v7 = 0;
    v8 = 1;
    v10 = 0;
    v9 = FIELD_U8(a1, 86);
    v11 = 0;
    v14 = 0;
    v13 = 0;
    v12 = 0;
    sub_60583000(dword_60CAF15C, (int)&v6, 3);
  }
  v2 = FIELD_F32(a1, 112) + FIELD_F32(a1, 576);
  v6.x = FIELD_F32(a1, 108) + FIELD_F32(a1, 572);
  v6.y = v2;
  sub_602F335C((_BYTE *)(a1 + 6852), (int *)&v6, 4u);
  v3 = FIELD_F32(a1, 112);
  v4 = Global_BasicSoundActor2;
  v6.x = FIELD_F32(a1, 108);
  v6.y = v3;
  mapPositionToScreen(&out, &v6);
  BasicSoundActor2_play(v4, "SE_OBJ_PNGN_ICE_BREAK", &out.x, 0);
  return sub_605CC4B0(a1, a1 + 6100, -1);
}
