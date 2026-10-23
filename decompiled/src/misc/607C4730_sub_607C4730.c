/* sub_607C4730
 * address: 0x607C4730   size: 72   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_607C4730(_DWORD *result)
{
  int v1; // r1

  v1 = result[306];
  result[307] &= 0xFFFDBFFF;
  result[304] &= ~0x4000000u;
  result[306] = v1 & 0xFFFF6ADB;
  result[303] &= ~0x2000000u;
  result[3169] = 0;
  return result;
}
