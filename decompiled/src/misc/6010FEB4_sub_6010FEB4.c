/* sub_6010FEB4
 * address: 0x6010FEB4   size: 596   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall sub_6010FEB4(int a1)
{
  char v1; // r12
  int v3; // r0
  __int16 v4; // r1
  int v5; // r6
  int v6; // r10
  int v7; // r0
  int v8; // r5
  int v9; // r0
  int v10; // r0

  if ( FIELD_U8(a1, 664) || (StageActor__cullCheck((StageActor *)a1, 0), !v3) )
  {
    if ( FIELD_U8(a1, 720) )
    {
      v4 = FIELD_U16(a1, 656) - 1;
      FIELD_U16(a1, 656) = v4;
      if ( !v4 )
      {
        FIELD_U16(a1, 656) = FIELD_U16(a1, 658);
        ActorMgr__create((void *)ActorMgr__instance, (ActorBuildInfo *)(a1 + 668), 0);
      }
    }
    v5 = FIELD_U32(a1, 44);
    v6 = a1 + 32;
    v7 = a1 + 32 - v5;
    v8 = FIELD_U32(a1, 36) - v5;
    if ( FIELD_U32(a1, 80) == 3 )
    {
      if ( v8 != v7 )
      {
        do
        {
          if ( ((unsigned int)&dword_60C868C4 & ~(1611726748 << v1) & 1) == 0 && _cxa_guard_acquire(&dword_60C868C4) )
          {
            dword_60C868C0 = (int)&off_60BCFCD8;
            _cxa_guard_release(&dword_60C868C4);
          }
          v9 = (**(int (__fastcall ***)(int, int *))v8)(v8, &dword_60C868C0);
          if ( v8 && v9 == 1 && (float)(FIELD_F32(a1, 108) - FIELD_F32(a1, 644)) >= FIELD_F32(v8, 108) )
            FIELD_U8(v8, 19) = 1;
          v8 = *(_DWORD *)(v8 + v5 + 4) - v5;
        }
        while ( v8 != v6 - FIELD_U32(a1, 44) );
      }
    }
    else if ( v8 != v7 )
    {
      do
      {
        if ( ((unsigned int)&dword_60C868C4 & ~(1611726964 << v1) & 1) == 0 && _cxa_guard_acquire(&dword_60C868C4) )
        {
          dword_60C868C0 = (int)&off_60BCFCD8;
          _cxa_guard_release(&dword_60C868C4);
        }
        v10 = (**(int (__fastcall ***)(int, int *))v8)(v8, &dword_60C868C0);
        if ( v8 && v10 == 1 && (float)(FIELD_F32(a1, 108) + FIELD_F32(a1, 644)) <= FIELD_F32(v8, 108) )
          FIELD_U8(v8, 19) = 1;
        v8 = *(_DWORD *)(v8 + v5 + 4) - v5;
      }
      while ( v8 != v6 - FIELD_U32(a1, 44) );
    }
  }
  return 1;
}
