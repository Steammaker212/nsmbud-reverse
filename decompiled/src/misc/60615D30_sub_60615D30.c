/* sub_60615D30
 * address: 0x60615D30   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_60615D30()
{
  char v0; // r12

  if ( ((unsigned int)dword_60CB31E0 & ~(1616993604 << v0) & 1) == 0 && _cxa_guard_acquire(dword_60CB31E0) )
  {
    dword_60CB31DC = (int)&off_60BC00C8;
    _cxa_guard_release(dword_60CB31E0);
  }
  return &dword_60CB31DC;
}
