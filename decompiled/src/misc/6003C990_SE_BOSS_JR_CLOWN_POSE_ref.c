/* SE_BOSS_JR_CLOWN_POSE_ref
 * address: 0x6003C990   size: 720   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall SE_BOSS_JR_CLOWN_POSE_ref(int a1)
{
  _DWORD *v2; // r5
  int v3; // r0
  unsigned int v4; // r1
  int *v5; // r0
  int v6; // r0
  unsigned int v7; // r7
  int v8; // r6
  _DWORD *v9; // r0
  void (*v10)(void); // r2
  int v11; // r0
  unsigned int v12; // r1
  int v13; // r0
  float v14; // s4
  float v15; // s0
  float v16; // s4
  float v17; // s2
  int speed; // [sp+4h] [bp-24h] BYREF
  int target[8]; // [sp+8h] [bp-20h] BYREF

  v2 = (_DWORD *)(a1 + 11492);
  switch ( FIELD_U32(a1, 11492) )
  {
    case 1:
      CollisionActor__handleSpeed((CollisionActor *)a1);
      v3 = FIELD_U32(a1, 6304);
      v4 = FIELD_U32(v3, 8);
      v5 = *(int **)(v3 + 12);
      if ( v4 > 1 )
        ++v5;
      v6 = *v5;
      if ( (FIELD_U8(v6, 28) & 0x30) != 0 || FIELD_F32(v6, 20) == 0.0 )
        *v2 = 2;
      break;
    case 2:
      StageActor__accelerateX((StageActor *)a1);
      CollisionActor__handleSpeed((CollisionActor *)a1);
      if ( FIELD_F32(a1, 120) == 0.0 && fabsf(FIELD_F32(a1, 11436)) <= 1.0 )
      {
        target[0] = (int)&sead__SafeStringBase__vtable;
        target[1] = (int)"jcb_attack_st";
        sub_60047464(a1, 1, target, 0, 0.0, 1.0);
        v7 = -2;
        v8 = a1 + 6304;
        do
        {
          v9 = *(_DWORD **)(*(_DWORD *)v8 + 12);
          if ( v7 >= 0xF && *(_DWORD *)(*(_DWORD *)v8 + 8) > 1u )
            ++v9;
          sub_60448AF4(*v9, v7 + 2);
          ++v7;
        }
        while ( v7 != 15 );
        sub_60813430(a1 + 7008, "SE_BOSS_JR_CLOWN_POSE", 0);
        *v2 = 3;
        v10 = *(void (**)(void))(**(_DWORD **)(a1 + 11456) + 192);
        goto LABEL_21;
      }
      break;
    case 3:
      v11 = FIELD_U32(a1, 6304);
      v12 = FIELD_U32(v11, 8);
      v13 = FIELD_U32(v11, 12);
      if ( v12 > 1 )
        v13 += 4;
      if ( (*(_BYTE *)(*(_DWORD *)v13 + 28) & 0x10) != 0 )
      {
        FIELD_U16(a1, 6278) = 30;
        *v2 = 4;
      }
      break;
    case 4:
      if ( !FIELD_U16(a1, 6278) )
      {
        v10 = *(void (**)(void))(*(_DWORD *)a1 + 192);
LABEL_21:
        v10();
      }
      break;
    default:
      break;
  }
  v14 = FIELD_F32(dword_60CC6484, 112);
  v15 = v14 + 64.0;
  v16 = (float)(v14 + FIELD_F32(dword_60CC6484, 104)) + -64.0;
  FIELD_F32(a1, 11588) = v15;
  FIELD_F32(a1, 11592) = v16;
  v17 = FIELD_F32(a1, 108);
  if ( v16 <= v17 || v15 >= v17 )
  {
    FIELD_U32(a1, 80) ^= 1u;
    FIELD_F32(a1, 120) = -FIELD_F32(a1, 120);
    FIELD_U32(a1, 108) = FIELD_U32(a1, 584);
    FIELD_U32(a1, 112) = FIELD_U32(a1, 588);
    FIELD_U32(a1, 116) = FIELD_U32(a1, 592);
  }
  target[0] = 0;
  speed = 0x1000000;
  moveValueTo((int *)(a1 + 156), target, &speed);
  target[0] = 0;
  speed = 0x1000000;
  moveValueTo((int *)(a1 + 160), target, &speed);
  target[0] = 0;
  speed = 0x1000000;
  return moveValueTo((int *)(a1 + 164), target, &speed);
}
