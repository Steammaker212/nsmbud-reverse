/* sub_6091B360
 * address: 0x6091B360   size: 36   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6091B360(int a1)
{
  int v1; // r0
  int v2; // t1

  v1 = *(_DWORD *)a1 + *(_DWORD *)(*(_DWORD *)a1 + 4);
  v2 = FIELD_U32(v1, 24);
  v1 += 24;
  return v1
       + v2
       + *(_DWORD *)(v1 + v2)
       + *(_DWORD *)(v1 + v2 + *(_DWORD *)(v1 + v2))
       + *(_DWORD *)(v1 + v2 + *(_DWORD *)(v1 + v2) + *(_DWORD *)(v1 + v2 + *(_DWORD *)(v1 + v2)));
}
