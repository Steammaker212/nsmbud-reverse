/* SE_EMY_DOWN_ref_24D3C4
 * address: 0x6024D3C4   size: 792   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall SE_EMY_DOWN_ref_24D3C4(int a1)
{
  int v2; // r5
  char v3; // r12
  float v4; // s0
  float v5; // s2
  float v6; // s4
  float v7; // s6
  int v8; // r0
  int *v9; // r2
  float v10; // s0
  float v11; // s2
  float v12; // s6
  float v13; // s4
  float v14; // s16
  float v15; // s18
  float v16; // r1
  int v17; // r5
  unsigned int U32; // r0
  Vec2 v19; // [sp+4h] [bp-3Ch] BYREF
  Vec3 position; // [sp+Ch] [bp-34h] BYREF
  Vec2 out; // [sp+18h] [bp-28h] BYREF

  v2 = ActorMgrRelated_getById(ActorMgr__instance + 27168, FIELD_U32(a1, 6368));
  if ( ((unsigned int)&dword_60C8DECC & ~(1613026312 << v3) & 1) == 0 && _cxa_guard_acquire(&dword_60C8DECC) )
  {
    dword_60C8DEC8 = (int)&off_60BC00E0;
    _cxa_guard_release(&dword_60C8DECC);
  }
  if ( v2 )
  {
    if ( (**(int (__fastcall ***)(int, int *))v2)(v2, &dword_60C8DEC8) == 1 )
    {
      v4 = FIELD_F32(v2, 108);
      v5 = FIELD_F32(v2, 112);
      v6 = FIELD_F32(a1, 6372);
      v7 = FIELD_F32(a1, 6376);
      FIELD_U32(a1, 116) = 1164394496;
      FIELD_F32(a1, 108) = v6 + v4;
      FIELD_F32(a1, 112) = v7 + v5;
      v8 = StageActor__distanceToPlayer((StateActor *)a1, &v19);
      if ( v8 != -1 )
      {
        v9 = dword_6024D6F8;
        if ( FIELD_U32(a1, 6336) )
          v9 = &dword_6024D6F8[1];
        v10 = *(float *)v9;
        if ( FIELD_U8(a1, 6352) )
        {
          v11 = FIELD_F32(a1, 112) + FIELD_F32(a1, 576);
          v12 = FIELD_F32(dword_60CC6484, 124);
          v13 = (float)FIELD_U32(a1, 6356) * 16.0;
          if ( v11 < (float)(v12 - v13)
            && v11 > (float)(v13 + (float)(v12 - FIELD_F32(dword_60CC6484, 108)))
            && v19.y < 0.0
            && fabsf(v19.x) < v10 )
          {
LABEL_17:
            FIELD_U32(a1, 80) = v19.x < 0.0;
            FIELD_U8(a1, 6332) = v8;
            v10 = (*(float (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C8DDF8);
          }
        }
        else if ( v19.y < 0.0 && fabsf(v19.x) < v10 )
        {
          goto LABEL_17;
        }
        v14 = FIELD_F32(a1, 112);
        v15 = FIELD_F32(a1, 588);
        CollisionMgr_process((_BYTE *)(a1 + 648), v10);
        if ( (float)(v14 - v15) < 0.0 && (FIELD_U32(a1, 2872) & 0x10401) == 0x401 )
        {
          v16 = FIELD_F32(a1, 112);
          v17 = Global_BasicSoundActor1;
          position.x = FIELD_F32(a1, 108);
          position.y = v16;
          mapPositionToScreen(&out, &position);
          BasicSoundActor1_playSound(v17, "SE_EMY_DOWN", (int)&out, 0);
          position.x = FIELD_F32(a1, 108) + FIELD_F32(a1, 572);
          position.y = FIELD_F32(a1, 112) + FIELD_F32(a1, 576);
          position.z = 4500.0;
          sub_602A38A4(a1, (int *)&position);
          U32 = sead__Random__getU32((void *)(dword_60C9CF0C + 1340));
          sub_602A6024(a1, U32 >> 31, -1, -1);
        }
      }
    }
  }
}
