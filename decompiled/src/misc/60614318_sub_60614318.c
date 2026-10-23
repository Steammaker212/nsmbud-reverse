/* sub_60614318
 * address: 0x60614318   size: 304   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_60614318(int a1, int a2)
{
  char v2; // r12
  int v4; // r4
  char v5; // r12
  int v6; // r0
  int v7; // r0

  v4 = FIELD_U32(a2, 64);
  if ( ((unsigned int)&dword_60C7B364 & ~(1616986932 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B364) )
  {
    StageActor_RTTI = (int)&off_60BC0098;
    _cxa_guard_release(&dword_60C7B364);
  }
  if ( v4
    && (**(int (__fastcall ***)(int, int *))v4)(v4, &StageActor_RTTI) == 1
    && (unsigned __int8)(FIELD_U8(v4, 533) - 1) <= 1u )
  {
    if ( ((unsigned int)&dword_60C7B37C & ~(1616987068 << v5) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B37C) )
    {
      dword_60C7B378 = (int)&off_60BC00BC;
      _cxa_guard_release(&dword_60C7B37C);
    }
    v6 = (**(int (__fastcall ***)(int, int *))v4)(v4, &dword_60C7B378);
    if ( v6 )
      v6 = v4;
    if ( sub_6076CE68(v6) == 1 )
    {
      v7 = FIELD_U8(v4, 533);
      if ( v7 != 2 )
        v7 = 0;
      FIELD_F32(v4, 108) = FIELD_F32(v4, 108) - *(float *)(a1 + 4 * v7 + 176);
    }
  }
}
