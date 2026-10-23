/* sub_60981FC0
 * address: 0x60981FC0   size: 308   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60981FC0(int a1, int a2)
{
  char v2; // r12
  int v3; // r4
  char v5; // r12
  int *v6; // r0
  int v7; // r0
  int v8; // r5

  v3 = FIELD_U32(a1, 36);
  if ( ((unsigned int)&dword_60C9DA64 & ~(1620582364 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C9DA64) )
  {
    if ( ((unsigned int)&dword_60C9DA14 & ~(1620582404 << v5) & 1) == 0 && _cxa_guard_acquire(&dword_60C9DA14) )
    {
      dword_60C9DA10 = 0;
      _cxa_guard_release(&dword_60C9DA14);
    }
    dword_60C9DA60 = (int)&dword_60C9DA10;
    _cxa_guard_release(&dword_60C9DA64);
  }
  if ( !v3 )
    return 1;
  v6 = (int *)(**(int (__fastcall ***)(int))v3)(v3);
  if ( !v6 )
    return 1;
  while ( v6 != &dword_60C9DA60 )
  {
    v6 = (int *)*v6;
    if ( !v6 )
      return 1;
  }
  v7 = (*(int (__fastcall **)(_DWORD, int))(**(_DWORD **)(v3 + 4) + 32))(FIELD_U32(v3, 4), a2);
  v8 = v7;
  if ( v7 )
  {
    if ( !sub_60982EB0(v3, FIELD_U32(v7, 104)) )
      sub_60982EE0(v3, FIELD_U32(v8, 104), FIELD_U32(v8, 108));
    return 1;
  }
  return 0;
}
