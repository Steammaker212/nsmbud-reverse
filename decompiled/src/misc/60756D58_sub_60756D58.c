/* sub_60756D58
 * address: 0x60756D58   size: 76   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60756D58(int a1)
{
  int v1; // r1
  unsigned int v2; // r2
  int v3; // r1
  int v4; // r0
  unsigned int v5; // r1
  int *v6; // r0
  int result; // r0

  v1 = FIELD_U32(a1, 292);
  if ( v1 )
  {
    v2 = FIELD_U32(v1, 24);
    v3 = FIELD_U32(v1, 28);
    if ( v2 > 3 )
      v3 += 12;
    *(_DWORD *)(*(_DWORD *)v3 + 136) = 0;
  }
  v4 = FIELD_U32(a1, 24);
  v5 = FIELD_U32(v4, 24);
  v6 = *(int **)(v4 + 28);
  if ( v5 > 3 )
    v6 += 3;
  result = *v6;
  FIELD_U32(result, 136) = 0;
  return result;
}
