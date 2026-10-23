/* sub_607BA5CC
 * address: 0x607BA5CC   size: 88   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607BA5CC(int a1)
{
  int v2; // r4
  int v3; // r0
  int v4; // r6
  int v5; // r1

  v2 = 0;
  v4 = a1 + 11360;
  v3 = FIELD_U32(a1, 11360);
  v5 = FIELD_U32(v3, 28);
  if ( v5 != 122 )
  {
    if ( v5 == 11 )
    {
      if ( sub_60793CA8(v3) != 1 )
        return v2;
      v5 = *(_DWORD *)(*(_DWORD *)v4 + 28);
    }
    if ( (v5 & 0xFFFFFFFE) != 0xE8 )
      return FIELD_U32(a1, 12104);
  }
  return v2;
}
