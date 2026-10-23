/* sub_608DA208
 * address: 0x608DA208   size: 40   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608DA208(int a1, int a2)
{
  int v2; // r2
  int v3; // r0
  int v4; // t1
  int v5; // r2

  v2 = FIELD_U32(a1, 4);
  v4 = *(_DWORD *)(a1 + v2);
  v3 = a1 + v2;
  v5 = 0;
  if ( v4 > a2 )
    return v3 + *(_DWORD *)(v3 + 4 * a2 + 4);
  return v5;
}
