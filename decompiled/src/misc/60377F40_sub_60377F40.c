/* sub_60377F40
 * address: 0x60377F40   size: 152   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_60377F40(int a1)
{
  char v1; // r12
  int v2; // r4
  int v3; // r0
  bool v4; // zf

  v2 = FIELD_U32(a1, 104);
  if ( ((unsigned int)&dword_60C906C0 & ~(1614249816 << v1) & 1) == 0 && _cxa_guard_acquire(&dword_60C906C0) )
  {
    dword_60C906BC = (int)&off_60BC00E0;
    _cxa_guard_release(&dword_60C906C0);
  }
  if ( !v2 )
    return 0;
  v3 = (**(int (__fastcall ***)(int, int *))v2)(v2, &dword_60C906BC);
  v4 = v3 == 1;
  if ( v3 == 1 )
    v4 = FIELD_U8(v2, 19) == 0;
  return v4 && sub_602A5688(v2);
}
