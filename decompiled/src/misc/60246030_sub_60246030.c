/* sub_60246030
 * address: 0x60246030   size: 404   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_60246030(int a1, _BYTE *a2)
{
  char v2; // r12
  float v5; // s0
  int v6; // r0
  int (__fastcall ***v7)(_DWORD, int *); // r5
  int v8; // r6
  int v9; // r6
  int v10; // r0
  int v11; // r0
  int v13; // [sp+4h] [bp-1Ch] BYREF

  v5 = FIELD_F32(EnemyCounterMaybe_instance, 16);
  if ( v5 == -8000.0 || (float)(FIELD_F32(a1, 108) + 8.0) < v5 )
  {
    v6 = FIELD_S8(a1, 6324);
    if ( (unsigned __int8)v6 != 255 )
    {
      if ( (unsigned __int8)v6 >= 4u )
        v6 = 0;
      v7 = *(int (__fastcall ****)(_DWORD, int *))(PlayerMgr_instance + 4 * v6 + 32);
      if ( v7 )
      {
        if ( ((unsigned int)&dword_60C7B364 & ~(1612996804 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B364) )
        {
          StageActor_RTTI = (int)&off_60BC0098;
          _cxa_guard_release(&dword_60C7B364);
        }
        v8 = (int)v7 + 86;
        if ( !(**v7)(v7, &StageActor_RTTI) )
          v8 = 86;
        FIELD_U8(a1, 86) = *(_BYTE *)v8;
      }
    }
    v9 = 1;
    if ( !((int (__fastcall *)(int))loc_60245D78)(a1) )
    {
      v9 = 0;
      *a2 = 0;
      v10 = FIELD_S8(a1, 6324);
      if ( (unsigned __int8)v10 != 255 )
      {
        v9 = 0;
        if ( (unsigned __int8)v10 >= 4u )
          v10 = 0;
        v11 = *(_DWORD *)(PlayerMgr_instance + 4 * v10 + 32);
        if ( v11 )
        {
          ((void (__fastcall *)(int *, _DWORD, int, _DWORD))checkLiquidCollisions)(
            &v13,
            0,
            a1 + 108,
            FIELD_U8(v11, 86));
          return (unsigned int)(v13 - 3) < 3;
        }
      }
    }
  }
  else
  {
    v9 = 15;
    *a2 = -1;
  }
  return v9;
}
