/* SE_EMY_DOWN_ref_2C56B8
 * address: 0x602C56B8   size: 356   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_EMY_DOWN_ref_2C56B8(int a1)
{
  unsigned int U32; // r0
  float v3; // s0
  unsigned int v4; // r5
  float v5; // r1
  int v6; // r6
  int v7; // r1
  Vec3 v9; // [sp+0h] [bp-40h] BYREF
  int v10; // [sp+Ch] [bp-34h]
  StateVirtual *v11; // [sp+10h] [bp-30h]
  char v12; // [sp+14h] [bp-2Ch]
  unsigned int v13; // [sp+18h] [bp-28h]
  char v14; // [sp+1Ch] [bp-24h]
  Vec2 out; // [sp+20h] [bp-20h] BYREF

  sub_606E6DC8();
  if ( !FIELD_U8(a1, 536) && sub_602C583C(a1) == 1 )
  {
    U32 = sead__Random__getU32((void *)(dword_60C9CF0C + 1340));
    v3 = FIELD_F32(a1, 112);
    v4 = U32;
    v9.x = FIELD_F32(a1, 108);
    v9.y = v3 + 12.0;
    v9.z = 0.0;
    sub_602A38A4(a1, &v9.x);
    v5 = FIELD_F32(a1, 112);
    v6 = Global_BasicSoundActor1;
    v9.x = FIELD_F32(a1, 108);
    v9.y = v5;
    mapPositionToScreen(&out, &v9);
    BasicSoundActor1_playSound(v6, "SE_EMY_DOWN", (int)&out, 0);
    (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 72))(a1);
    LODWORD(v9.x) = dword_60AFE3F8[v4 >> 31];
    v9.y = 3.9;
    v9.z = -4.0;
    v10 = unk_60C906E8;
    v11 = &stru_60C90710;
    v12 = -1;
    v13 = v4 >> 31;
    v14 = -1;
    sub_602A852C(a1 + 6104, &v9);
  }
  v7 = FIELD_U32(a1, 28252);
  if ( v7 >= 1 )
    FIELD_U32(a1, 28252) = v7 - 1;
  ActorScaler_execute((ActorScaler *)(a1 + 6328));
  return 1;
}
