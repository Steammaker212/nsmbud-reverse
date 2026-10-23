/* SE_SYS_SPEED_UP_HYPER_LV_ref
 * address: 0x607FA510   size: 740   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_SYS_SPEED_UP_HYPER_LV_ref(int a1, int a2, int a3, int a4)
{
  char v4; // r12
  int v9; // r6
  _BOOL4 v10; // r6
  bool v11; // zf
  int v12; // r0
  float v13; // s16
  int *v14; // r0
  int v15; // r1
  int v16; // r0
  int v18; // [sp+8h] [bp-30h] BYREF
  int v19; // [sp+Ch] [bp-2Ch]
  char v20; // [sp+10h] [bp-28h]
  char v21; // [sp+17h] [bp-21h] BYREF

  if ( FIELD_U8(a1, 31) )
  {
    if ( !FIELD_U8(a1, 33) )
    {
      v9 = FIELD_U32(dword_60C995D0, 32);
      if ( ((unsigned int)&dword_60C8F06C & ~(1618978148 << v4) & 1) == 0 && _cxa_guard_acquire(&dword_60C8F06C) )
      {
        dword_60C8F068 = (int)&off_60BD94B0;
        _cxa_guard_release(&dword_60C8F06C);
      }
      if ( v9 && (*(int (__fastcall **)(int, int *))(*(_DWORD *)v9 + 8))(v9, &dword_60C8F068) == 1 )
        FIELD_U8(a1, 33) = 1;
    }
    v10 = 0;
    v21 = 0;
    if ( a4 == 1 )
    {
      v11 = FIELD_U8(a1, 30) == 0;
      if ( FIELD_U8(a1, 30) )
        v11 = FIELD_U8(a1, 31) == 0;
      v10 = !v11
         && !FIELD_U8(a1, 33)
         && (v12 = FIELD_U32(a1, 40), !FIELD_U8(v12, 34))
         && FIELD_F32(v12, 36) != 0.0;
    }
    v13 = sub_607FAD24(dword_60C9A1E0 + 708, &v21, v10, FIELD_U32(dword_60C995D0, 32) != 0);
    if ( v10 )
    {
      if ( FIELD_U8(a1, 32) )
      {
        EffectData_create(977, (Vec3 *)&dword_60B3B95C, 0, 0);
        FIELD_U8(a1, 32) = 0;
      }
      if ( v21 )
        EffectWrapper_update((EffectWrapper *)(a1 + 44), 1214, (Vec3 *)&dword_60B3B95C, 0, 0);
      if ( FIELD_S32(dword_60C9A1E0, 724) >= 1 )
      {
        EffectWrapper_update((EffectWrapper *)(a1 + 148), 1217, (Vec3 *)&dword_60B3B95C, 0, 0);
        v18 = 15;
        v19 = unk_60C26480;
        v20 = 0;
        sub_60808374(SoundSystem_instance, "SE_SYS_SPEED_UP_HYPER_LV", &v18, 0);
      }
    }
  }
  else
  {
    v13 = 1.0;
  }
  if ( FIELD_U8(a1, 30) && !FIELD_U32(dword_60C995D0, 32) )
  {
    if ( a3 )
    {
      v14 = (int *)sub_60800F00(a3);
      v18 = *v14;
      v19 = v14[1];
    }
    else
    {
      sub_607FA960(FIELD_U32(a1, 36), &v18, a2, 0);
    }
    v15 = a3;
    if ( a3 )
      v15 = 1;
    v16 = ((int (__fastcall *)(_DWORD, int, int *, int, float))loc_607FB8E4)(
            FIELD_U32(a1, 40),
            v15,
            &v18,
            a1 + 16,
            v13);
    if ( !a3 && (v16 ^ 1) == 1 )
      FIELD_U8(a1, 30) = 0;
  }
  return sub_607FA390(a1, a3);
}
