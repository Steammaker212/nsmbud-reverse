/* sub_60981CF4
 * address: 0x60981CF4   size: 348   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60981CF4(int a1, int a2, int a3, int a4)
{
  int v4; // r3
  int (__fastcall ***v5)(_DWORD); // r5
  char v6; // r12
  char v7; // r12
  int *v8; // r0

  if ( !*(_DWORD *)(*(_DWORD *)(*(_DWORD *)(FIELD_U32(a4, 20) + 8) + 48) + 44) )
    return 0;
  if ( !a3 || (FIELD_U8(a4, 40) & 1) != 0 )
  {
    v4 = a4 + 32;
  }
  else
  {
    v4 = a4 + 36;
    a2 = a3;
  }
  v5 = (int (__fastcall ***)(_DWORD))(*(int (__fastcall **)(_DWORD, _DWORD, int))(**(_DWORD **)(a1 + 36) + 44))(
                                       FIELD_U32(a1, 36),
                                       FIELD_U32(dword_60CCF464, 36),
                                       *(_DWORD *)(*(_DWORD *)(*(_DWORD *)v4 + 4)
                                                 + 12
                                                 + 4 * FIELD_U16(a2, 90))
                                     + *(_DWORD *)(*(_DWORD *)v4 + 4)
                                     + 12);
  if ( !v5 )
    return 0;
  if ( ((unsigned int)&dword_60CD0BE4 & ~(1620581772 << v6) & 1) == 0 && _cxa_guard_acquire(&dword_60CD0BE4) )
  {
    if ( ((unsigned int)&dword_60CC7F14 & ~(1620581812 << v7) & 1) == 0 )
    {
      if ( _cxa_guard_acquire(&dword_60CC7F14) )
      {
        dword_60CC7F10 = 0;
        _cxa_guard_release(&dword_60CC7F14);
      }
    }
    dword_60CD0BE0 = (int)&dword_60CC7F10;
    _cxa_guard_release(&dword_60CD0BE4);
  }
  v8 = (int *)(**v5)(v5);
  if ( !v8 )
    return 0;
  while ( v8 != &dword_60CD0BE0 )
  {
    v8 = (int *)*v8;
    if ( !v8 )
      return 0;
  }
  return 1;
}
