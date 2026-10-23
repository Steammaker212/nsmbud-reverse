/* sub_607B0DAC
 * address: 0x607B0DAC   size: 32   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607B0DAC(int a1)
{
  int v1; // r1
  int v2; // r0
  int v3; // r1

  v1 = FIELD_U32(a1, 9976);
  v2 = FIELD_U32(a1, 648);
  if ( v1 )
    v3 = 37;
  else
    v3 = 144;
  return PlayerBase_dispatchVirtual3(v2, v3, 0.0);
}
