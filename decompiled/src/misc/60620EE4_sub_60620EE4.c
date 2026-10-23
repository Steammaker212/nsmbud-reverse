/* sub_60620EE4
 * address: 0x60620EE4   size: 156   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_60620EE4(int a1, int a2, int a3)
{
  char v3; // r12
  int v4; // r5

  v4 = FIELD_U32(a2, 64);
  if ( ((unsigned int)dword_60CB3828 & ~(1617039104 << v3) & 1) == 0 && _cxa_guard_acquire(dword_60CB3828) )
  {
    dword_60CB3824 = (int)&off_60BC04AC;
    _cxa_guard_release(dword_60CB3828);
  }
  if ( v4 )
  {
    if ( (**(int (__fastcall ***)(int, int *))v4)(v4, &dword_60CB3824) == 1 )
      (*(void (__fastcall **)(int, int))(*(_DWORD *)v4 + 628))(v4, a3);
  }
}
