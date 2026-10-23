/* sub_60316180
 * address: 0x60316180   size: 588   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_60316180(int a1, int a2, int a3, int a4)
{
  char v4; // r12
  int v9; // r5
  unsigned int v10; // r8
  unsigned int v11; // r0
  float v12; // s0
  int *v13; // r6
  float v14; // r1
  int v15; // r7
  const char *v16; // r1
  float v17; // r1
  Vec3 v18; // [sp+4h] [bp-3Ch] BYREF
  Vec2 out; // [sp+10h] [bp-30h] BYREF
  Vec3 position; // [sp+18h] [bp-28h] BYREF

  v9 = FIELD_U32(a3, 64);
  if ( ((unsigned int)&dword_60C7B37C & ~(1613849004 << v4) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B37C) )
  {
    dword_60C7B378 = (int)&off_60BC00BC;
    _cxa_guard_release(&dword_60C7B37C);
  }
  if ( v9 && (**(int (__fastcall ***)(int, int *))v9)(v9, &dword_60C7B378) == 1 )
  {
    v10 = FIELD_S8(v9, 84);
    if ( a4 )
      v11 = sub_602855F4(FIELD_U32(a3, 64));
    else
      v11 = sub_602A3358(a1, FIELD_U32(a3, 64));
    sub_60022760(0.0, 24.0, dword_60C7F52C, a1, v11, v10);
    v12 = FIELD_F32(a2, 88);
    v18.x = FIELD_F32(a2, 84);
    v18.y = v12 + 8.0;
    v18.z = 4500.0;
    EffectData_create(23, &v18, 0, 0);
    FIELD_U32(a1, 7620) = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
    if ( FIELD_U16(a1, 7642) == 1 )
    {
      LODWORD(position.x) = 23;
      v13 = sub_60002B90(v10, unk_60C263D0);
      v17 = FIELD_F32(a1, 112);
      v15 = Global_BasicSoundActor1;
      position.x = FIELD_F32(a1, 108);
      position.y = v17;
      mapPositionToScreen(&out, &position);
      v16 = "SE_EMY_BIG_KALON";
    }
    else
    {
      if ( !FIELD_U16(a1, 7642) )
        FIELD_U8(a1, 7661) = 1;
      LODWORD(position.x) = 22;
      v13 = sub_60002B90(v10, unk_60C263CC);
      v14 = FIELD_F32(a1, 112);
      v15 = Global_BasicSoundActor1;
      position.x = FIELD_F32(a1, 108);
      position.y = v14;
      mapPositionToScreen(&out, &position);
      v16 = "SE_EMY_KALON";
    }
    BasicSoundActor1_playSound(v15, v16, (int)&out, (int)v13);
    if ( (*(int (__fastcall **)(int, _DWORD))(*(_DWORD *)a1 + 204))(a1, FIELD_S8(v9, 1313)) == 1 )
      SE_SYS_NICE_S_ref();
  }
}
