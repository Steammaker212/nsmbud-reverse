/* sub_602109A8
 * address: 0x602109A8   size: 36   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_602109A8(int a1, float a2)
{
  unsigned int v2; // r1
  int result; // r0

  v2 = FIELD_U32(a1, 464);
  if ( v2 >= 2 )
    v2 = 0;
  result = **(_DWORD **)(*(_DWORD *)(a1 + 4 * v2 + 372) + 12);
  FIELD_F32(result, 24) = a2;
  return result;
}
