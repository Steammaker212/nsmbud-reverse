/* sub_608109FC
 * address: 0x608109FC   size: 104   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608109FC(int result, int *a2, float a3)
{
  unsigned int v3; // r12
  int v4; // r3
  unsigned int v5; // lr
  int v6; // r1

  v3 = FIELD_U32(result, 120);
  if ( v3 )
  {
    v4 = result + 172;
    v5 = 0;
    while ( a2 != (int *)v4 || !*(_DWORD *)v4 )
    {
      ++v5;
      v4 += 24;
      if ( v5 >= v3 )
        return result;
    }
    FIELD_F32(v4, 4) = a3;
    v6 = *a2;
    if ( v6 )
      return sub_608B032C(v6, 0, FIELD_F32(result, 140) * a3);
  }
  return result;
}
