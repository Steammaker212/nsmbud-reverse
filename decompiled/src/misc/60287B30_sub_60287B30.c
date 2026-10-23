/* sub_60287B30
 * address: 0x60287B30   size: 88   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_60287B30(_DWORD *result)
{
  int v1; // r12
  int v2; // r3
  unsigned int v3; // r1

  result[799] &= ~0x20000u;
  result[798] &= 0xFFFFF1FF;
  v1 = result[794];
  v2 = result[796];
  v3 = result[797] & 0xFEBD7FFF;
  result[795] &= 0xFEBD7FFF;
  result[797] = v3;
  result[794] = v1 & 0xFFFFF1BF;
  result[796] = v2 & 0xFFFFF1BF;
  return result;
}
