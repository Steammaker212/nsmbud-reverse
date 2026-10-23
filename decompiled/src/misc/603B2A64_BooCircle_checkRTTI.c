/* BooCircle_checkRTTI
 * address: 0x603B2A64   size: 120   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall BooCircle_checkRTTI(int a1, int *a2)
{
  char v2; // r12

  if ( ((unsigned int)dword_60C97C68 & ~(1614490236 << v2) & 1) == 0 && _cxa_guard_acquire(dword_60C97C68) )
  {
    dword_60C97C64 = (int)&off_60BC00C8;
    _cxa_guard_release(dword_60C97C68);
  }
  return a2 == &dword_60C97C64 || sub_60026DC8(a2);
}
