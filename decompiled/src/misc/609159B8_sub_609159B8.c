/* sub_609159B8
 * address: 0x609159B8   size: 36   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned int __fastcall sub_609159B8(int a1)
{
  return (((a1 ^ (a1 >> 31)) + ((unsigned int)a1 >> 31) + 4095) & 0xFFFFF000) * ((a1 >> 31) | 1);
}
