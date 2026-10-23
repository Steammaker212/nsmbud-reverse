/* sub_605E3388
 * address: 0x605E3388   size: 72   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned int __fastcall sub_605E3388(_DWORD *a1)
{
  unsigned int *v1; // r2
  int v2; // lr

  v1 = a1 + 1565;
  v2 = a1[1565];
  a1[1566] &= ~1u;
  a1[1567] &= 0xFFFFFFFC;
  *v1 = v2 & 0xEF7FF7FF;
  return v2 & 0xEF7FF7FF;
}
