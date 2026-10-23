/* sub_6038F238
 * address: 0x6038F238   size: 156   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6038F238(int a1, int a2)
{
  char v2; // r12
  int v3; // r4
  int v4; // r5

  v3 = FIELD_U32(a2, 64);
  if ( ((unsigned int)&dword_60C8816C & ~(1614344784 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C8816C) )
  {
    dword_60C88168 = (int)&off_60BC04AC;
    _cxa_guard_release(&dword_60C8816C);
  }
  v4 = 0;
  if ( v3 && (**(int (__fastcall ***)(int, int *))v3)(v3, &dword_60C88168) == 1 )
  {
    (*(void (__fastcall **)(int))(*(_DWORD *)v3 + 624))(v3);
    return 1;
  }
  return v4;
}
