/* sub_608B5330
 * address: 0x608B5330   size: 48   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned int __fastcall sub_608B5330(int a1, int a2)
{
  int v4; // r6

  v4 = ((int (*)(void))sub_608B5378)() + 0x1FFF;
  return (v4 & 0xFFFFF000) + sub_608B5378(a1, a2);
}
