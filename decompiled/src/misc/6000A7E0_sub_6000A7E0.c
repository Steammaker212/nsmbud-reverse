/* sub_6000A7E0
 * address: 0x6000A7E0   size: 424   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *__fastcall sub_6000A7E0(int a1)
{
  char v1; // r12
  int *v2; // r6
  int *result; // r0
  int v4; // r11
  int v5; // r4
  float v6; // s2
  float v7[12]; // [sp+10h] [bp-30h] BYREF

  FIELD_U8(a1, 2544) = 1;
  v2 = *(int **)(ActorMgr__instance + 27172);
  result = *(int **)(ActorMgr__instance + 27180);
  if ( v2 != result )
  {
    v4 = 0;
    do
    {
      v5 = *v2;
      if ( *v2 && !FIELD_U8(v5, 19) )
      {
        if ( ((unsigned int)&dword_60C7B364 & ~(1610655884 << v1) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B364) )
        {
          StageActor_RTTI = (int)&off_60BC0098;
          _cxa_guard_release(&dword_60C7B364);
        }
        if ( (**(int (__fastcall ***)(int, int *))v5)(v5, &StageActor_RTTI) == 1 && (FIELD_U8(v5, 568) & 0x30) != 0 )
        {
          v6 = (float)(FIELD_F32(v5, 108) + FIELD_F32(v5, 572)) - FIELD_F32(dword_60CC6484, 112);
          if ( v6 >= 0.0 && v6 <= FIELD_F32(dword_60CC6484, 104) && !FIELD_U8(v5, 536) )
          {
            v7[0] = FIELD_F32(v5, 108) + FIELD_F32(v5, 572);
            v7[1] = FIELD_F32(v5, 112) + FIELD_F32(v5, 576);
            v7[2] = FIELD_F32(v5, 116) + FIELD_F32(v5, 580);
            SE_EMY_DOWN_SYNC_ref(v4++, v7);
          }
          (*(void (__fastcall **)(int))(*(_DWORD *)v5 + 104))(v5);
          FIELD_U8(v5, 19) = 1;
        }
      }
      ++v2;
      result = *(int **)(ActorMgr__instance + 27180);
    }
    while ( v2 != result );
  }
  return result;
}
