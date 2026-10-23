/* sub_6039CC20
 * address: 0x6039CC20   size: 440   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_6039CC20()
{
  char v0; // r12
  int *v1; // r6
  int *result; // r0
  float v3; // s2
  int v4; // r4
  int v5; // r0
  bool v6; // zf
  unsigned int v7; // [sp+0h] [bp-40h]
  float v8[12]; // [sp+10h] [bp-30h] BYREF

  v1 = *(int **)(ActorMgr__instance + 27172);
  result = *(int **)(ActorMgr__instance + 27180);
  if ( v1 != result )
  {
    v7 = 0;
    do
    {
      v4 = *v1;
      if ( ((unsigned int)&dword_60C7B364 & ~(1614400872 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B364) )
      {
        StageActor_RTTI = (int)&off_60BC0098;
        _cxa_guard_release(&dword_60C7B364);
      }
      if ( v4 )
      {
        v5 = (**(int (__fastcall ***)(int, int *))v4)(v4, &StageActor_RTTI);
        v6 = v5 == 1;
        if ( v5 == 1 )
          v6 = FIELD_U8(v4, 19) == 0;
        if ( v6 && (FIELD_U8(v4, 568) & 0x30) != 0 )
        {
          if ( !FIELD_U8(v4, 536) )
          {
            v3 = (float)(FIELD_F32(v4, 108) + FIELD_F32(v4, 572)) - FIELD_F32(dword_60CC6484, 112);
            if ( v3 >= 0.0 && v3 < FIELD_F32(dword_60CC6484, 104) )
            {
              v8[0] = FIELD_F32(v4, 108) + FIELD_F32(v4, 572);
              v8[1] = FIELD_F32(v4, 112) + FIELD_F32(v4, 576);
              v8[2] = FIELD_F32(v4, 116) + FIELD_F32(v4, 580);
              if ( FIELD_U8(v4, 537) )
                SE_EMY_DOWN_SYNC_ref(v7++, v8);
            }
          }
          (*(void (__fastcall **)(int))(*(_DWORD *)v4 + 104))(v4);
          FIELD_U8(v4, 19) = 1;
        }
      }
      ++v1;
      result = *(int **)(ActorMgr__instance + 27180);
    }
    while ( v1 != result );
  }
  return result;
}
