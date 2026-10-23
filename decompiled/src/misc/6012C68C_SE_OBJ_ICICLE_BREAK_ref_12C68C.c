/* SE_OBJ_ICICLE_BREAK_ref_12C68C
 * address: 0x6012C68C   size: 336   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_OBJ_ICICLE_BREAK_ref_12C68C(int a1, int a2)
{
  char v2; // r12
  int v3; // r4
  int v4; // r5
  float v5; // r1
  int v6; // r2
  float v7; // r1
  int v8; // r5
  Vec3 v10; // [sp+0h] [bp-40h] BYREF
  int v11; // [sp+10h] [bp-30h] BYREF
  float v12; // [sp+14h] [bp-2Ch]
  int v13; // [sp+18h] [bp-28h]
  Vec2 out; // [sp+20h] [bp-20h] BYREF
  Vec3 position; // [sp+28h] [bp-18h] BYREF

  v3 = FIELD_U32(a2, 64);
  if ( ((unsigned int)dword_60C87140 & ~(1611843240 << v2) & 1) == 0 && _cxa_guard_acquire(dword_60C87140) )
  {
    dword_60C8713C = (int)&off_60BC04AC;
    _cxa_guard_release(dword_60C87140);
  }
  v4 = 0;
  if ( v3 && (**(int (__fastcall ***)(int, int *))v3)(v3, &dword_60C8713C) == 1 )
  {
    v5 = FIELD_F32(v3, 112);
    v6 = FIELD_U32(v3, 116);
    v11 = FIELD_U32(v3, 108);
    v12 = v5;
    v13 = v6;
    v7 = FIELD_F32(v3, 112);
    v10.x = FIELD_F32(v3, 108);
    v10.y = v7;
    v10.z = 4500.0;
    EffectData_create(1005, &v10, 0, 0);
    v12 = v12 + -40.0;
    BigBlockFragmentHeap_ref(dword_60C99CDC, &v11, 3);
    v8 = Global_BasicSoundActor2;
    position.x = v10.x;
    position.y = v10.y;
    mapPositionToScreen(&out, &position);
    BasicSoundActor2_play(v8, "SE_OBJ_ICICLE_BREAK", &out.x, 0);
    (*(void (__fastcall **)(int, void *))(*(_DWORD *)v3 + 192))(v3, &unk_60C87364);
    return 1;
  }
  return v4;
}
