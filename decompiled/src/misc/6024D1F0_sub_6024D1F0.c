/* sub_6024D1F0
 * address: 0x6024D1F0   size: 408   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_6024D1F0(int a1)
{
  int (__fastcall ***v2)(_DWORD, int *); // r6
  char v3; // r12
  int v4; // r5
  float v5; // s4
  float v6; // s10
  float v7; // s2

  v2 = (int (__fastcall ***)(_DWORD, int *))sub_606D4BD4(FIELD_U32(a1, 6364));
  if ( ((unsigned int)&dword_60C7B364 & ~(1613025816 << v3) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B364) )
  {
    StageActor_RTTI = (int)&off_60BC0098;
    _cxa_guard_release(&dword_60C7B364);
  }
  if ( v2 )
  {
    v4 = (**v2)(v2, &StageActor_RTTI);
    if ( v4 )
      v4 = (int)v2;
  }
  else
  {
    v4 = 0;
  }
  if ( ((unsigned int)&dword_60C8DECC & ~(1613025944 << v3) & 1) == 0 && _cxa_guard_acquire(&dword_60C8DECC) )
  {
    dword_60C8DEC8 = (int)&off_60BC00E0;
    _cxa_guard_release(&dword_60C8DECC);
  }
  if ( v4 )
  {
    if ( (**(int (__fastcall ***)(int, int *))v4)(v4, &dword_60C8DEC8) == 1 )
    {
      v5 = FIELD_F32(a1, 116);
      v6 = FIELD_F32(v4, 6108);
      v7 = FIELD_F32(a1, 112) - FIELD_F32(v4, 6104);
      FIELD_F32(a1, 6372) = FIELD_F32(a1, 108) - FIELD_F32(v4, 6100);
      FIELD_F32(a1, 6376) = v7;
      FIELD_F32(a1, 6380) = v5 - v6;
      FIELD_U32(a1, 6368) = FIELD_U32(v4, 8);
      (*(void (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C8DDB8);
    }
  }
}
