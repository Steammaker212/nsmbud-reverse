/* TileGod_getRTTI
 * address: 0x605CF894   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *TileGod_getRTTI()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60CB10F8 & ~(1616705704 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60CB10F8) )
  {
    dword_60CB10F4 = (int)&off_60BC00C8;
    _cxa_guard_release(&dword_60CB10F8);
  }
  return &dword_60CB10F4;
}
