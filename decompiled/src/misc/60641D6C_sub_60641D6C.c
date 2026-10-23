/* sub_60641D6C
 * address: 0x60641D6C   size: 356   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60641D6C(int a1, int a2, _BYTE *a3)
{
  char v3; // r12
  int result; // r0
  int v7; // r0
  bool v8; // zf

  result = FIELD_U8(a2, 533);
  if ( result == 2 )
  {
    if ( ((unsigned int)&dword_60C7B408 & ~(1617174080 << v3) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B408) )
    {
      dword_60C7B404 = (int)&off_60BC00B0;
      _cxa_guard_release(&dword_60C7B408);
    }
    result = (**(int (__fastcall ***)(int, int *))a2)(a2, &dword_60C7B404);
    if ( result == 1 )
    {
      result = FIELD_U32(a2, 11360);
      v8 = result == 0;
      if ( result )
      {
        result = FIELD_S8(a2, 84);
        v8 = result == -1;
      }
      if ( !v8 )
        goto LABEL_17;
    }
  }
  else if ( result == 1 )
  {
    *a3 |= *((_BYTE *)&unk_60AFDF94 + FIELD_S8(a2, 84));
    if ( ((unsigned int)&dword_60C7B374 & ~(1617173944 << v3) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B374) )
    {
      dword_60C7B370 = (int)&off_60BC00B0;
      _cxa_guard_release(&dword_60C7B374);
    }
    v7 = (**(int (__fastcall ***)(int, int *))a2)(a2, &dword_60C7B370);
    if ( v7 )
      v7 = a2;
    result = sub_6079D894(v7);
    if ( result )
    {
      result = FIELD_S8(result, 84);
LABEL_17:
      result = (unsigned __int8)*a3 | *((unsigned __int8 *)&unk_60AFDF94 + result);
      *a3 = result;
    }
  }
  return result;
}
