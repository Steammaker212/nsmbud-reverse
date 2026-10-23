/* star_color_ref
 * address: 0x605EB074   size: 160   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall star_color_ref(int *a1)
{
  char v1; // r12
  int v3; // r0
  int v4; // r5
  int result; // r0

  v3 = a1[44];
  if ( (v3 & 0x20) == 0 )
  {
    v4 = a1[3];
    if ( ((unsigned int)dword_60CB1CA0 & ~(1616818332 << v1) & 1) == 0 && _cxa_guard_acquire(dword_60CB1CA0) )
    {
      dword_60CB1CC8 = (int)&sead__SafeStringBase__vtable;
      dword_60CB1CCC = (int)"star_color";
      _cxa_guard_release(dword_60CB1CA0);
    }
    ShuAnim_play(**(_DWORD ***)(v4 + 28), *a1, &dword_60CB1CC8);
    sub_605EB3B0(*(_DWORD *)v4, 1);
    v3 = a1[44];
  }
  result = v3 | 0x20;
  a1[44] = result;
  return result;
}
