/* sub_600E1D58
 * address: 0x600E1D58   size: 272   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_600E1D58(int a1, int a2)
{
  char v2; // r12
  int v3; // r4
  char v4; // r12
  int v5; // r4

  v3 = FIELD_U32(a2, 64);
  if ( ((unsigned int)&dword_60C84B4C & ~(1611537776 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C84B4C) )
  {
    dword_60C84B48 = (int)&off_60BCCA60;
    _cxa_guard_release(&dword_60C84B4C);
  }
  if ( !v3 || (**(int (__fastcall ***)(int, int *))v3)(v3, &dword_60C84B48) != 1 )
    return 0;
  v5 = FIELD_U32(v3, 56);
  if ( ((unsigned int)&dword_60C84B44 & ~(1611537896 << v4) & 1) == 0 && _cxa_guard_acquire(&dword_60C84B44) )
  {
    dword_60C84B40 = (int)&off_60BC8314;
    _cxa_guard_release(&dword_60C84B44);
  }
  if ( v5 && (**(int (__fastcall ***)(int, int *))v5)(v5, &dword_60C84B40) == 1 )
    return (*(int (__fastcall **)(int))(*(_DWORD *)v5 + 996))(v5);
  else
    return 0;
}
