/* sub_608C6D14
 * address: 0x608C6D14   size: 44   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned int sub_608C6D14()
{
  dword_60C5B3B0 = 1664525 * dword_60C5B3B0 + 1013904223;
  return HIWORD(dword_60C5B3B0);
}
