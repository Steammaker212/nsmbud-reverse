/* sub_608B18E8
 * address: 0x608B18E8   size: 44   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608B18E8(int a1, int a2)
{
  int v2; // r2
  unsigned int v3; // r1
  int v4; // r0
  unsigned int v5; // t1
  int v6; // r2

  v2 = FIELD_U32(a1, 52);
  v3 = a2 & 0xFFFFFF;
  v5 = *(_DWORD *)(a1 + v2);
  v4 = a1 + v2;
  v6 = 0;
  if ( v3 < v5 )
    return v4 + *(_DWORD *)(v4 + 8 * v3 + 8);
  return v6;
}
