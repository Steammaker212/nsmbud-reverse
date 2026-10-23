/* sub_6013DC88
 * address: 0x6013DC88   size: 160   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6013DC88(int a1, int a2, int a3)
{
  char v3; // r12
  int result; // r0
  int (__fastcall ***v7)(_DWORD, int *); // r6
  int v8; // r0

  result = FIELD_U32(a3, 136);
  if ( result != 15 )
  {
    v7 = *(int (__fastcall ****)(_DWORD, int *))(a3 + 64);
    if ( ((unsigned int)&dword_60C7B37C & ~(1611914420 << v3) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B37C) )
    {
      dword_60C7B378 = (int)&off_60BC00BC;
      _cxa_guard_release(&dword_60C7B37C);
    }
    v8 = (**v7)(v7, &dword_60C7B378);
    if ( v8 )
      v8 = (int)v7;
    return (*(int (__fastcall **)(int, int, int))(*(_DWORD *)v8 + 1164))(v8, a2, a3);
  }
  return result;
}
