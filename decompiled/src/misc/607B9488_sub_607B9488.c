/* sub_607B9488
 * address: 0x607B9488   size: 104   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607B9488(_DWORD *a1)
{
  unsigned int v2; // r6
  int v3; // r0
  int v4; // r5

  v2 = a1[330];
  v3 = sub_6079D894((int)a1);
  if ( v3 )
  {
    v2 = FIELD_U32(v3, 1320);
  }
  else if ( v2 <= 9 )
  {
    v4 = 1;
    if ( ((1 << v2) & 0x390) != 0 )
    {
      if ( (*(int (__fastcall **)(_DWORD *))(*a1 + 1068))(a1) )
        return v4;
    }
  }
  if ( (v2 | 1) == 9 )
    return 7;
  return v2;
}
