/* sub_601E94F0
 * address: 0x601E94F0   size: 240   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int sub_601E94F0()
{
  int (__fastcall ***v0)(_DWORD, int *); // r4
  char v1; // r12
  int v2; // r5
  _DWORD v4[24]; // [sp+0h] [bp-60h] BYREF

  v4[0] = 0;
  memset(&v4[2], 0, 72);
  sub_601905DC(v4);
  v4[0] = 59;
  v4[1] = sub_601916C8(dword_60C8996C, 59);
  v0 = *(int (__fastcall ****)(_DWORD, int *))sub_601693A0(878);
  if ( ((unsigned int)&dword_60C8AF50 & ~(1612617052 << v1) & 1) == 0 && _cxa_guard_acquire(&dword_60C8AF50) )
  {
    dword_60C8AF4C = (int)&off_60BD6B64;
    _cxa_guard_release(&dword_60C8AF50);
  }
  v2 = (int)(v0 + 2);
  if ( !(**v0)(v0, &dword_60C8AF4C) )
    v2 = 8;
  v4[4] = *(_DWORD *)v2;
  return sub_60191160((_DWORD *)dword_60C8996C, v4);
}
