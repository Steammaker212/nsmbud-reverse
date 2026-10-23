/* sub_6073AFA4
 * address: 0x6073AFA4   size: 296   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6073AFA4(int a1, int a2)
{
  int v3; // r0
  char v4; // r12
  int (__fastcall ***v5)(_DWORD, int *); // r5
  int (__fastcall ***v6)(_DWORD, int *); // r4
  int result; // r0

  v3 = sub_608DE61C(a1 + 32, a2);
  if ( v3 )
    v5 = (int (__fastcall ***)(_DWORD, int *))(v3 - FIELD_U32(a1, 44));
  else
    v5 = 0;
  if ( ((unsigned int)&dword_60C7B364 & ~(1618194396 << v4) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B364) )
  {
    StageActor_RTTI = (int)&off_60BC0098;
    _cxa_guard_release(&dword_60C7B364);
  }
  if ( v5 )
  {
    v6 = (int (__fastcall ***)(_DWORD, int *))(**v5)(v5, &StageActor_RTTI);
    if ( v6 )
      v6 = v5;
  }
  else
  {
    v6 = 0;
  }
  if ( ((unsigned int)&dword_60CBDF20 & ~(1618194524 << v4) & 1) == 0 && _cxa_guard_acquire(&dword_60CBDF20) )
  {
    dword_60CBDF1C = (int)&off_60C012E8;
    _cxa_guard_release(&dword_60CBDF20);
  }
  if ( !v6 )
    return 0;
  result = (**v6)(v6, &dword_60CBDF1C);
  if ( result )
    return (int)v6;
  return result;
}
