/* sub_600CD6FC
 * address: 0x600CD6FC   size: 428   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_600CD6FC(int a1, int a2)
{
  char v2; // r12
  int (__fastcall ***v5)(_DWORD, int *); // r7
  int (__fastcall ***v6)(_DWORD, int *); // r6
  int (__fastcall ***v7)(_DWORD, int *); // r4
  int v8; // r7
  int result; // r0

  v5 = *(int (__fastcall ****)(_DWORD, int *))(a1 + 64);
  if ( ((unsigned int)&dword_60C7B364 & ~(1611454236 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B364) )
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
  v7 = *(int (__fastcall ****)(_DWORD, int *))(a2 + 64);
  if ( ((unsigned int)&dword_60C7B364 & ~(1611454368 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B364) )
  {
    StageActor_RTTI = (int)&off_60BC0098;
    _cxa_guard_release(&dword_60C7B364);
  }
  if ( v7 )
  {
    v8 = (**v7)(v7, &StageActor_RTTI);
    if ( v8 )
      v8 = (int)v7;
  }
  else
  {
    v8 = 0;
  }
  if ( ((unsigned int)&dword_60C84138 & ~(1611454496 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C84138) )
  {
    dword_60C84134 = (int)&off_60BC04AC;
    _cxa_guard_release(&dword_60C84138);
  }
  if ( v6 )
  {
    result = (**v6)(v6, &dword_60C84134);
    if ( result )
      result = (int)v6;
  }
  else
  {
    result = 0;
  }
  if ( FIELD_U8(v8, 533) == 1 )
    return sub_600CD8F0(result, a1, a2);
  return result;
}
