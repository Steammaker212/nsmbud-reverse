/* SE_EMY_KERONPA_FIRE_ref
 * address: 0x6031CFE0   size: 776   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_EMY_KERONPA_FIRE_ref(int a1)
{
  int v2; // r7
  float *v3; // r5
  int v4; // r6
  int v6; // r0
  int v7; // r4
  char v8; // r12
  _DWORD *v9; // r0
  int v10; // r1
  unsigned int v11; // r2
  unsigned int v12; // r0
  int v13; // r5
  unsigned int v14; // r0
  unsigned int v15; // r1
  int (__fastcall ***v16)(_DWORD, int *); // r6
  float v17; // r1
  int v18; // r6
  unsigned int v19; // r0
  float *v20; // r1
  float v21; // s8
  float v22; // s12
  float v23; // s0
  Vec2 v25; // [sp+0h] [bp-40h] BYREF
  Vec3 position; // [sp+8h] [bp-38h] BYREF

  v2 = 32;
  v3 = (float *)(a1 + 6872);
  v4 = FIELD_U32(a1, 6864);
  do
  {
    if ( v4-- < 1 )
      v4 = 63;
    v6 = v4;
    if ( (unsigned int)v4 >= 0x40 )
      v6 = 0;
    v7 = a1 + 8 * v6;
    ((void (__fastcall *)(int, float, float, float, float))loc_60832560)(v7 + 6352, *(v3 - 1), 0.125, 1.0, 0.125);
    ((void (__fastcall *)(int, float, float, float, float))loc_60832560)(v7 + 6356, *v3, 0.125, 1.0, 0.125);
    v3 += 2;
    --v2;
  }
  while ( v2 );
  sub_6031C374(a1);
  v9 = *(_DWORD **)(a1 + 7124);
  v10 = v9[3];
  v11 = v9[2];
  v12 = v9[17];
  if ( v11 > v12 )
    v10 += 4 * v12;
  if ( (*(_BYTE *)(*(_DWORD *)v10 + 28) & 0x20) != 0 )
  {
    (*(void (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C9365C);
  }
  else if ( *(float *)(*(_DWORD *)v10 + 20) == 12.0 )
  {
    v13 = 0;
    v14 = FIELD_U32(a1, 12588) - 1;
    FIELD_U32(a1, 12588) = v14;
    if ( v14 <= 3 )
    {
      v15 = *(_DWORD *)(a1 + 4 * v14 + 6336);
      if ( v15 )
      {
        v16 = (int (__fastcall ***)(_DWORD, int *))ActorMgrRelated_getById(ActorMgr__instance + 27168, v15);
        if ( ((unsigned int)&dword_60C7B364 & ~(1613877524 << v8) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B364) )
        {
          StageActor_RTTI = (int)&off_60BC0098;
          _cxa_guard_release(&dword_60C7B364);
        }
        if ( v16 )
        {
          v13 = (**v16)(v16, &StageActor_RTTI);
          if ( v13 )
            v13 = (int)v16;
        }
      }
    }
    if ( ((unsigned int)dword_60C87964 & ~(1613877644 << v8) & 1) == 0 && _cxa_guard_acquire(dword_60C87964) )
    {
      dword_60C87960 = (int)&off_60BC00E0;
      _cxa_guard_release(dword_60C87964);
    }
    if ( v13 && (**(int (__fastcall ***)(int, int *))v13)(v13, &dword_60C87960) == 1 )
    {
      v17 = FIELD_F32(a1, 112);
      v18 = Global_BasicSoundActor1;
      position.x = FIELD_F32(a1, 108);
      position.y = v17;
      mapPositionToScreen(&v25, &position);
      BasicSoundActor1_playSound(v18, "SE_EMY_KERONPA_FIRE", (int)&v25, 0);
      v19 = FIELD_U32(a1, 12584);
      v20 = (float *)((char *)sinLutTable + ((v19 >> 20) & 0xFF0));
      v21 = (float)(v19 & 0xFFFFFF);
      v22 = FIELD_F32(a1, 112) + (float)((float)(*v20 + (float)((float)(v21 * v20[1]) * 0.000000059605)) * 4.0);
      v23 = FIELD_F32(a1, 116) + 32.0;
      FIELD_F32(v13, 108) = FIELD_F32(a1, 108)
                            + (float)((float)(v20[2] + (float)((float)(v21 * v20[3]) * 0.000000059605)) * 4.0);
      FIELD_F32(v13, 112) = v22;
      FIELD_F32(v13, 116) = v23;
      FIELD_U8(v13, 6148) = 1;
    }
  }
  return j_ModelWrapper_updateAnims(FIELD_U32(a1, 7124));
}
