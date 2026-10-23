/* SE_OBJ_BLOCK_BREAK_ref_2
 * address: 0x605B8E44   size: 480   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_OBJ_BLOCK_BREAK_ref_2(int a1, int a2, int a3)
{
  float v5; // s16
  float v6; // s18
  int v7; // r10
  int v8; // r11
  int v9; // r5
  int v10; // r7
  int v11; // r6
  int v12; // r0
  signed int v13; // r2
  unsigned int v14; // r0
  int *v15; // r4
  int v16; // r5
  ActorBuildInfo v18; // [sp+4h] [bp-84h] BYREF
  Vec2 out; // [sp+30h] [bp-58h] BYREF
  Vec3 position; // [sp+38h] [bp-50h] BYREF
  int v21; // [sp+44h] [bp-44h]
  char v22; // [sp+48h] [bp-40h]
  char v23; // [sp+49h] [bp-3Fh]
  char v24; // [sp+4Ah] [bp-3Eh]
  char v25; // [sp+4Bh] [bp-3Dh]
  char v26; // [sp+4Ch] [bp-3Ch]
  char v27; // [sp+4Dh] [bp-3Bh]
  char v28; // [sp+4Eh] [bp-3Ah]

  v5 = *(float *)a2;
  v6 = FIELD_F32(a2, 4);
  v7 = FIELD_U8(a2, 10);
  v8 = FIELD_U16(a2, 12);
  v9 = FIELD_U8(a2, 9);
  v10 = FIELD_U8(a2, 8);
  v11 = FIELD_U8(a2, 11);
  memset(&v18.settings2, 0, 36);
  v12 = 0x40000;
  if ( a3 )
    v12 = 0x80000;
  if ( v11 != 255 )
    v12 = (v11 << 16) & 0x30000;
  v18.settings1 = v12 | (16 * v10) | (v9 << 8) | (v8 << 20) | (v7 << 24) & 0xF000000;
  v18.profile = Profile__get(0x120u);
  v18.position.x = v5;
  v18.position.y = v6;
  v18.position.z = 0.0;
  v18.field_20 = 0;
  v18.eventId1 = 0;
  v18.eventId2 = 0;
  v18.field_28 = 0;
  ActorMgr__create((void *)ActorMgr__instance, &v18, 0);
  v13 = FIELD_S8(a2, 11);
  if ( v13 >= 0 && (a3 ^ 1) == 1 )
    sub_603FBA2C(dword_60C99DD4, 10, v13);
  if ( a3 == 1 )
  {
    position.x = v5 + 16.0;
    position.y = v6 + 8.0;
    position.z = 0.0;
    v21 = 0;
    v22 = 1;
    v23 = 0;
    v26 = 0;
    v25 = 0;
    v28 = 0;
    v27 = 0;
    v24 = 0;
    sub_60583000(dword_60CAF15C, (int)&position, 3);
    FIELD_U8(dword_60CBC000, 162) = 1;
  }
  v14 = FIELD_S8(a2, 11);
  LODWORD(position.x) = 46;
  v15 = sub_60002B90(v14, unk_60C2642C);
  position.x = v5;
  position.y = v6;
  v16 = Global_BasicSoundActor2;
  mapPositionToScreen(&out, &position);
  return sub_60813BDC(v16, "SE_OBJ_BLOCK_BREAK", &out, 1, v15);
}
