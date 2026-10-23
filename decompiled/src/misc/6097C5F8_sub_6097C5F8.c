/* sub_6097C5F8
 * address: 0x6097C5F8   size: 80   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6097C5F8(int result, int a2)
{
  int v3; // r6
  int v4; // r5
  unsigned int v5; // r0

  v3 = result;
  v4 = FIELD_U32(a2, 16);
  if ( v4 )
  {
    v5 = sub_6098BED8(FIELD_U32(a2, 16));
    if ( v5 >= 2 )
      v5 = 0;
    result = *(_DWORD *)(v3 + 4 * v5 + 16);
    if ( result )
    {
      FIELD_U32(result, 40) = a2;
      FIELD_U32(v4, 104) = a2;
    }
  }
  return result;
}
