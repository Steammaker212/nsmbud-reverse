/* sub_60774040
 * address: 0x60774040   size: 140   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_60774040(int a1, int a2)
{
  char v2; // r12
  int *v3; // r4
  int v6; // [sp+0h] [bp-18h] BYREF
  int target; // [sp+4h] [bp-14h] BYREF

  v3 = (int *)(a1 + 160);
  if ( ((unsigned int)dword_60CBFA80 & ~(1618428000 << v2) & 1) == 0 && _cxa_guard_acquire(dword_60CBFA80) )
  {
    dword_60CBFA80[1] = 1085672288;
    dword_60CBFA80[2] = -1085672288;
    _cxa_guard_release(dword_60CBFA80);
  }
  target = dword_60CBFA80[a2 + 1];
  v6 = 0x20000000;
  return moveValueTo(v3, &target, &v6);
}
