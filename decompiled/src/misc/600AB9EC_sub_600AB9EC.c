/* sub_600AB9EC
 * address: 0x600AB9EC   size: 208   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_600AB9EC(int a1, int *a2)
{
  char v2; // r12

  if ( ((unsigned int)&dword_60C82EA4 & ~(1611315716 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C82EA4) )
  {
    dword_60C82EA0 = (int)&off_60BC0098;
    _cxa_guard_release(&dword_60C82EA4);
  }
  if ( a2 == &dword_60C82EA0 )
    return 1;
  if ( ((unsigned int)&dword_60C7B36C & ~(1611315808 << v2) & 1) == 0 )
  {
    if ( _cxa_guard_acquire(&dword_60C7B36C) )
    {
      Actor_RTTI = (int)&off_60BC00A4;
      _cxa_guard_release(&dword_60C7B36C);
    }
  }
  return a2 == &Actor_RTTI;
}
