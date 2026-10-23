/* sub_60264790
 * address: 0x60264790   size: 112   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_60264790(_DWORD *result)
{
  int v1; // r3
  int v2; // lr
  int v3; // r12

  v1 = result[798];
  v2 = result[794];
  v3 = result[796];
  result[800] &= 0xBFFFF7FF;
  result[798] = v1 & 0xBFFFF7FF;
  result[794] = v2 & 0xBFFFF7FF;
  result[796] = v3 & 0xBFFFF7FF;
  result[801] &= ~0x200u;
  result[799] &= ~0x200u;
  result[795] &= ~0x200u;
  result[797] &= ~0x200u;
  return result;
}
