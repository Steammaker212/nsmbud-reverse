/* sub_600BA158
 * address: 0x600BA158   size: 148   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_600BA158(int a1)
{
  char v1; // r12
  int v2; // r4

  v2 = FIELD_U32(a1, 56);
  if ( ((unsigned int)&dword_60C82838 & ~(1611374960 << v1) & 1) == 0 && _cxa_guard_acquire(&dword_60C82838) )
  {
    dword_60C82834 = (int)&off_60BC1FB4;
    _cxa_guard_release(&dword_60C82838);
  }
  if ( v2 && (**(int (__fastcall ***)(int, int *))v2)(v2, &dword_60C82834) == 1 && !FIELD_U8(v2, 536) )
    FIELD_U32(v2, 7152) = 1;
}
