/* sub_6008B160
 * address: 0x6008B160   size: 404   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6008B160(int a1, int a2)
{
  char v4; // r12
  unsigned int v5; // r7
  char v6; // r12
  _DWORD *v7; // r6

  (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 72))(a1);
  v5 = FIELD_S8(a2, 84);
  if ( v5 <= 3 )
  {
    if ( ((unsigned int)&dword_60C7B37C & ~(1611182488 << v4) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B37C) )
    {
      dword_60C7B378 = (int)&off_60BC00BC;
      _cxa_guard_release(&dword_60C7B37C);
    }
    if ( (**(int (__fastcall ***)(int, int *))a2)(a2, &dword_60C7B378) == 1 )
    {
      v7 = *(_DWORD **)(a1 + 7244);
      if ( !v7 )
        goto LABEL_13;
      if ( ((unsigned int)&dword_60C81104 & ~(1611182612 << v6) & 1) == 0 && _cxa_guard_acquire(&dword_60C81104) )
      {
        dword_60C81100 = (int)&off_60BC66E8;
        _cxa_guard_release(&dword_60C81104);
      }
      if ( (*(int (__fastcall **)(_DWORD *, int *))*v7)(v7, &dword_60C81100) == 1 && FIELD_U8(a1, 7248) )
      {
        v7[3810] = v5;
        (*(void (__fastcall **)(_DWORD *, int *))(*v7 + 192))(v7, &dword_60C820A0);
      }
      else
      {
LABEL_13:
        sub_602A3178(a2, &dword_60CC4B7C);
      }
    }
  }
  FIELD_U32(a1, 7640) = FIELD_U32(a2, 80) ^ 1;
  return (*(int (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C81A48);
}
