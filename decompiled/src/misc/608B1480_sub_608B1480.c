/* sub_608B1480
 * address: 0x608B1480   size: 52   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608B1480(int a1, int a2)
{
  int v2; // r12
  unsigned int v3; // r3
  int v4; // r1

  v2 = FIELD_U32(a1, 16);
  v3 = v2 + a2;
  v4 = 0;
  if ( v3 <= FIELD_U32(a1, 12) )
  {
    FIELD_U32(a1, 16) = (v3 + 4095) & 0xFFFFF000;
    return v2;
  }
  return v4;
}
