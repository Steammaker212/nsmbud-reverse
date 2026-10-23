/* sub_608B1D48
 * address: 0x608B1D48   size: 52   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608B1D48(int a1)
{
  int v1; // r0
  unsigned int v2; // r2
  unsigned int v3; // t1
  int v4; // r1

  v3 = FIELD_U32(a1, 20);
  v1 = a1 + 20;
  v2 = v3;
  v4 = 0xFFFF;
  if ( (v3 & 8) != 0 )
    return *(unsigned __int16 *)(v1 + 4 * ((v2 & 1) + ((v2 >> 1) & 1) + ((v2 >> 2) & 1)) + 6);
  return v4;
}
