/* sub_605E93C8
 * address: 0x605E93C8   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605E93C8(_DWORD *a1, int a2)
{
  int v2; // r12
  int v3; // r3
  int v4; // r2
  int v5; // r3
  _DWORD *v6; // r2

  v2 = a1[39];
  v3 = a1[41];
  if ( v3 < v2 )
  {
    a1[41] = v3 + 1;
    v4 = a1[40] + v3;
    v5 = v4 - v2;
    if ( v4 < v2 )
      v5 = v4;
    *(_DWORD *)(a1[38] + 4 * v5) = a2;
  }
  v6 = a1 + 71;
  if ( FIELD_U32(a2, 6256) == 1 )
    v6 = a1 + 70;
  return (*v6)++;
}
