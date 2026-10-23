/* sub_607BB1FC
 * address: 0x607BB1FC   size: 28   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607BB1FC(int a1, int a2)
{
  _DWORD *v2; // r0
  int v3; // r2
  int v4; // t1

  v4 = FIELD_U32(a1, 11404);
  v2 = (_DWORD *)(a1 + 11404);
  v3 = v4;
  if ( v4 < a2 )
    *v2 = ++v3;
  return (char)v3;
}
