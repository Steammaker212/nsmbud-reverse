/* SE_OBJ_POLTERGEIST_CRASH_ref
 * address: 0x6036EBB8   size: 304   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_OBJ_POLTERGEIST_CRASH_ref(int a1, int a2)
{
  int v4; // r6
  float v5; // r0
  float v6; // r1
  int v7; // r7
  Vec3 v9; // [sp+0h] [bp-50h] BYREF
  int v10; // [sp+Ch] [bp-44h]
  char v11; // [sp+10h] [bp-40h]
  char v12; // [sp+11h] [bp-3Fh]
  char v13; // [sp+12h] [bp-3Eh]
  char v14; // [sp+13h] [bp-3Dh]
  char v15; // [sp+14h] [bp-3Ch]
  char v16; // [sp+15h] [bp-3Bh]
  char v17; // [sp+16h] [bp-3Ah]
  Vec3 v18; // [sp+18h] [bp-38h] BYREF
  Vec2 out; // [sp+28h] [bp-28h] BYREF

  v4 = a1 + 108;
  v18.x = FIELD_F32(a1, 108);
  v5 = FIELD_F32(a1, 112);
  v18.z = FIELD_F32(v4, 8);
  v18.y = v5;
  if ( FIELD_U32(v4, 6232) == 1 )
    BigBlockFragmentHeap_ref(dword_60C99CDC, &v18, 6);
  else
    BlockFragmentHeap_ref(dword_60C99CDC, &v18, 770, -1);
  v6 = FIELD_F32(a1, 112);
  v7 = Global_BasicSoundActor2;
  v9.x = FIELD_F32(a1, 108);
  v9.y = v6;
  mapPositionToScreen(&out, &v9);
  BasicSoundActor2_play(v7, "SE_OBJ_POLTERGEIST_CRASH", &out.x, 0);
  EffectData_create(924, (Vec3 *)v4, 0, 0);
  if ( a2 == 1 )
  {
    v9 = v18;
    v10 = 0;
    v11 = 1;
    v12 = 0;
    v15 = 0;
    v14 = 0;
    v17 = 0;
    v16 = 0;
    v13 = 0;
    sub_60583000(dword_60CAF15C, &v9, 3);
  }
  FIELD_U8(a1, 19) = 1;
  return 1;
}
