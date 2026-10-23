/* SE_EMY_DOWN_ref_3BF62C
 * address: 0x603BF62C   size: 332   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_EMY_DOWN_ref_3BF62C(int a1, int a2, int a3)
{
  StageActor *v4; // r6
  float v5; // r0
  float v6; // r1
  unsigned int playerId; // r9
  _BOOL4 v8; // r8
  char v9; // r0
  float v10; // r1
  int v11; // r5
  Vec3 v13; // [sp+0h] [bp-48h] BYREF
  int v14; // [sp+Ch] [bp-3Ch]
  StateVirtual *v15; // [sp+10h] [bp-38h]
  char v16; // [sp+14h] [bp-34h]
  _BOOL4 v17; // [sp+18h] [bp-30h]
  char v18; // [sp+1Ch] [bp-2Ch]
  Vec2 out; // [sp+20h] [bp-28h] BYREF

  if ( FIELD_U32(a3, 136) != 7 )
  {
    v4 = *(StageActor **)(a3 + 64);
    v5 = FIELD_F32(a2, 84);
    v6 = FIELD_F32(a2, 88);
    playerId = (unsigned __int8)FIELD_U8(v4, 0x54);
    v13.x = v5;
    v13.y = v6;
    v13.z = 0.0;
    sub_602A38A4(a1, &v13.x);
    v8 = sub_6000ADDC(a1, (int)v4);
    if ( playerId > 3 )
    {
      v10 = FIELD_F32(a1, 112);
      v11 = Global_BasicSoundActor1;
      v13.x = FIELD_F32(a1, 108);
      v13.y = v10;
      mapPositionToScreen(&out, &v13);
      BasicSoundActor1_playSound(v11, "SE_EMY_DOWN", (int)&out, 0);
      v9 = -1;
    }
    else
    {
      SE_EMY_KAME_HIT_ref((int)v4, FIELD_U32(v4, 0x234), FIELD_U32(a1, 6292) == 2);
      sub_60000A18(v4);
      v9 = sub_602856EC((int *)(a1 + 6292), FIELD_U32(v4, 0x234));
    }
    LODWORD(v13.x) = dword_60AFE3F8[v8];
    v13.y = 1.5;
    v13.z = -1.5;
    v14 = -1115684864;
    v15 = &stru_60C90710;
    v16 = v9;
    v17 = v8;
    v18 = playerId;
    sub_602A852C(a1 + 6104, &v13);
  }
  return 1;
}
