/* SE_EMY_PATAMET_ref
 * address: 0x606B6CA4   size: 456   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall SE_EMY_PATAMET_ref(int a1, int a2, int a3)
{
  char v3; // r12
  bool v4; // zf
  int v6; // r6
  _DWORD *v7; // r6
  int v8; // t1
  int v9; // r0
  _DWORD *v10; // r0
  int v11; // t1
  int v12; // r5
  float v13; // r1
  int v14; // r6
  int v15; // r5
  float v16; // r1
  int v17; // r6
  int v18; // r7
  Vec2 out; // [sp+8h] [bp-28h] BYREF
  Vec3 position; // [sp+10h] [bp-20h] BYREF

  v4 = a2 == 0;
  if ( a2 )
    v4 = a3 == -1;
  if ( !v4 )
  {
    if ( (unsigned __int8)a3 >= 4u )
      a3 = 0;
    v6 = a1 + 4 * a3;
    v8 = FIELD_U32(v6, 6572);
    v7 = (_DWORD *)(v6 + 6572);
    if ( v8
      || (v9 = EnemyCounterMaybe_instance + 4 * a3,
          v11 = FIELD_U32(v9, 208),
          v10 = (_DWORD *)(v9 + 208),
          *v10 = v11 + 1,
          *v7 = v11 + 1,
          v11 != 7) )
    {
      if ( ((unsigned int)&unk_60CBA4A0 & ~(1617653112 << v3) & 1) == 0 )
      {
        if ( _cxa_guard_acquire((__guard *)&unk_60CBA4A0) )
        {
          dword_60CBA4A4 = (int)"SE_EMY_PATAMET_STEP";
          dword_60CBA4A8 = (int)"SE_EMY_PATAMET_STEP";
          dword_60CBA4AC = (int)"SE_EMY_PATAMET_STEP_2";
          dword_60CBA4B0 = (int)"SE_EMY_PATAMET_STEP_3";
          dword_60CBA4B4 = (int)"SE_EMY_PATAMET_STEP_4";
          dword_60CBA4B8 = (int)"SE_EMY_PATAMET_STEP_5";
          dword_60CBA4BC = (int)"SE_EMY_PATAMET_STEP_6";
          dword_60CBA4C0 = (int)"SE_EMY_PATAMET_STEP_7";
          dword_60CBA4C4 = (int)"SE_EMY_PATAMET_STEP_8";
          _cxa_guard_release((__guard *)&unk_60CBA4A0);
        }
      }
      v15 = FIELD_S16(a1, 6148);
      v16 = FIELD_F32(a1, 112);
      v17 = *((_DWORD *)&unk_60CBA4A0 + *v7 + 1);
      v18 = Global_BasicSoundActor1;
      position.x = FIELD_F32(a1, 108);
      position.y = v16;
      mapPositionToScreen(&out, &position);
      sub_60813810(v18, v17, (int)&out, v15, 0);
    }
    else
    {
      *v10 = 0;
      v12 = FIELD_S16(a1, 6148);
      v13 = FIELD_F32(a1, 112);
      v14 = Global_BasicSoundActor1;
      position.x = FIELD_F32(a1, 108);
      position.y = v13;
      mapPositionToScreen(&out, &position);
      sub_60813810(v14, (int)"SE_EMY_PATAMET_COMPLETE", (int)&out, v12, 0);
      sub_606B690C();
    }
  }
}
