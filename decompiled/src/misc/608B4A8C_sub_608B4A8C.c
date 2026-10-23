/* sub_608B4A8C
 * address: 0x608B4A8C   size: 96   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608B4A8C(int a1, unsigned int a2)
{
  int v2; // r2
  unsigned int *v3; // r12
  int v4; // r2
  unsigned int v6; // r4

  v2 = 0;
  if ( FIELD_U8(a1, 12) )
  {
    v3 = *(unsigned int **)(a1 + 4);
    if ( *v3 > a2 )
    {
      v4 = FIELD_U32(a1, 8);
      if ( v4 )
        return *(_DWORD *)(v4 + 4 * a2);
      v6 = v3[3 * a2 + 2];
      return sub_608B4820(*(_DWORD *)a1) + v6 + 8;
    }
  }
  return v2;
}
