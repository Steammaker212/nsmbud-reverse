/* SE_SYS_GOAL_RING_ref
 * address: 0x60615F7C   size: 392   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall SE_SYS_GOAL_RING_ref(int a1)
{
  int v2; // r5
  float *i; // r6
  int v4; // r0
  float v5; // s20
  float v6; // s22
  float v7; // s24
  float v8; // s26
  float v9; // s28
  float v10; // s30
  float v11; // s2
  float v12; // s0

  v2 = 0;
  for ( i = (float *)(a1 + 6128); ; i += 2 )
  {
    v4 = *(_DWORD *)(PlayerMgr_instance + 4 * v2 + 32);
    if ( v4 )
    {
      if ( (FIELD_U16(PlayerMgr_instance, 66) & (unsigned __int16)(1 << v2)) != 0
        && (FIELD_U8(v4, 1205) & 0x40) == 0 )
      {
        v5 = FIELD_F32(v4, 112);
        v6 = FIELD_F32(v4, 576);
        v7 = FIELD_F32(a1, 112);
        v8 = FIELD_F32(a1, 108);
        v9 = FIELD_F32(a1, 572);
        v10 = FIELD_F32(a1, 576);
        v11 = AreaTask_getWrappedXPos(AreaTask_intance, FIELD_F32(v4, 108) + FIELD_F32(v4, 572)) - (float)(v8 + v9);
        v12 = (float)(v5 + v6) - (float)(v7 + v10);
        *(i - 1) = v11;
        *i = v12;
        if ( fabsf(v11) <= 24.0 && fabsf(v12) <= 32.0 )
          break;
      }
    }
    if ( ++v2 >= 4 )
      return;
  }
  sub_60807EF0(SoundSystem_instance, "SE_SYS_GOAL_RING", 0, 1);
  EffectData_create(1122, (Vec3 *)(a1 + 6112), 0, 0);
  sub_6000A7E0(EnemyCounterMaybe_instance);
  sub_6040B278(dword_60C9A1F0, FIELD_U32(dword_60C99DD4, 724));
  sub_60779F28(dword_60CBFA90, a1, v2);
  (*(void (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60CB3294);
}
