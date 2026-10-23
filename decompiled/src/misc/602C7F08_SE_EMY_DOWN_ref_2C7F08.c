/* SE_EMY_DOWN_ref_2C7F08
 * address: 0x602C7F08   size: 324   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_EMY_DOWN_ref_2C7F08(float *a1)
{
  unsigned int U32; // r0
  float v3; // s0
  unsigned int v4; // r5
  float v5; // r1
  int v6; // r6
  Vec3 v8; // [sp+0h] [bp-40h] BYREF
  int v9; // [sp+Ch] [bp-34h]
  StateVirtual *v10; // [sp+10h] [bp-30h]
  char v11; // [sp+14h] [bp-2Ch]
  unsigned int v12; // [sp+18h] [bp-28h]
  char v13; // [sp+1Ch] [bp-24h]
  Vec2 out; // [sp+20h] [bp-20h] BYREF

  if ( !FIELD_U8(dword_60CC6D8C, 17) )
    return SE_EMY_DOWN_ref_2A7624((int)a1);
  U32 = sead__Random__getU32((void *)(dword_60C9CF0C + 1340));
  v3 = a1[28];
  v4 = U32;
  v8.x = a1[27];
  v8.y = v3 + 24.0;
  v8.z = 0.0;
  sub_602A38A4((int)a1, &v8.x);
  v5 = a1[28];
  v6 = Global_BasicSoundActor1;
  v8.x = a1[27];
  v8.y = v5;
  mapPositionToScreen(&out, &v8);
  BasicSoundActor1_playSound(v6, "SE_EMY_DOWN", (int)&out, 0);
  (*(void (__fastcall **)(float *))(*(_DWORD *)a1 + 72))(a1);
  LODWORD(v8.x) = dword_60AFE3F8[v4 >> 31];
  v8.y = 3.9;
  v8.z = -4.0;
  v9 = unk_60C906E8;
  v10 = &stru_60C90710;
  v11 = -1;
  v12 = v4 >> 31;
  v13 = -1;
  return sub_602A852C((int)(a1 + 1526), &v8);
}
