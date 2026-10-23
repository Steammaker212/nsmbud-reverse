/* sub_601164E8
 * address: 0x601164E8   size: 168   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_601164E8(int *a1)
{
  int *v1; // r4
  int v2; // r4
  char v3; // r12

  v1 = a1 + 1811;
  (*(void (__fastcall **)(int *))(*a1 + 1084))(a1);
  v2 = *v1;
  if ( ((unsigned int)&dword_60C86B30 & ~(1611752724 << v3) & 1) == 0 && _cxa_guard_acquire(&dword_60C86B30) )
  {
    dword_60C86B2C = (int)&off_60BC2CD4;
    _cxa_guard_release(&dword_60C86B30);
  }
  if ( v2 )
  {
    if ( (**(int (__fastcall ***)(int, int *))v2)(v2, &dword_60C86B2C) == 1 )
      (*(void (__fastcall **)(int))(*(_DWORD *)v2 + 816))(v2);
  }
}
