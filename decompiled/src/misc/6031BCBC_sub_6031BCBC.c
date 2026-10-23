/* sub_6031BCBC
 * address: 0x6031BCBC   size: 364   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6031BCBC(int a1)
{
  int result; // r0
  int *v3; // r4
  float v4; // s16
  unsigned int v5; // r5
  unsigned int v6; // r10
  unsigned int v7; // r1
  int v8; // r6
  char v9; // r12
  unsigned int v10; // r0
  unsigned int v11; // r1
  int v12; // r1

  v3 = (int *)(a1 + 12588);
  result = FIELD_U32(a1, 12588);
  if ( result >= 1 )
  {
    v4 = FIELD_F32(a1, 116);
    v5 = 0;
    v6 = FIELD_U32(a1, 6864);
    do
    {
      if ( v5 <= 3 )
      {
        v7 = *(_DWORD *)(a1 + 6336 + 4 * v5);
        if ( v7 )
        {
          v8 = ActorMgrRelated_getById(ActorMgr__instance + 27168, v7);
          if ( ((unsigned int)&dword_60C7B364 & ~(1613872508 << v9) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B364) )
          {
            StageActor_RTTI = (int)&off_60BC0098;
            _cxa_guard_release(&dword_60C7B364);
          }
          if ( v8 && (**(int (__fastcall ***)(int, int *))v8)(v8, &StageActor_RTTI) == 1 )
          {
            v10 = v6 - 8;
            v11 = 0;
            v4 = v4 + -16.0;
            if ( (int)(v6 - 8) < 0 )
              v10 = v6 + 56;
            v6 = v10;
            if ( v10 < 0x40 )
              v11 = v10;
            v12 = a1 + 8 * v11;
            FIELD_U32(v8, 108) = FIELD_U32(v12, 6352);
            FIELD_U32(v8, 112) = FIELD_U32(v12, 6356);
            FIELD_F32(v8, 116) = v4;
          }
        }
      }
      result = *v3;
      ++v5;
    }
    while ( (int)v5 < *v3 );
  }
  return result;
}
