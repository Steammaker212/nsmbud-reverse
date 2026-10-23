/* sub_601D9A30
 * address: 0x601D9A30   size: 160   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int sub_601D9A30()
{
  int (__fastcall ***v0)(_DWORD, int *); // r4
  char v1; // r12
  int v2; // r0

  v0 = *(int (__fastcall ****)(_DWORD, int *))sub_601693A0(909);
  if ( ((unsigned int)dword_60C8AF58 & ~(1612552792 << v1) & 1) == 0 && _cxa_guard_acquire(dword_60C8AF58) )
  {
    dword_60C8AF54 = (int)&off_60BD4E08;
    _cxa_guard_release(dword_60C8AF58);
  }
  if ( !v0 )
    return cobStarGate_ref_1FBE34(0);
  v2 = (**v0)(v0, &dword_60C8AF54);
  if ( v2 )
    v2 = (int)v0;
  return cobStarGate_ref_1FBE34(v2);
}
