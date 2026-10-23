/* sub_607180AC
 * address: 0x607180AC   size: 32   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607180AC(int a1)
{
  _DWORD *v1; // r0
  int v2; // r1
  int v3; // t1

  v3 = FIELD_U32(a1, 14564);
  v1 = (_DWORD *)(a1 + 14564);
  v2 = v3;
  if ( v3 > 98 )
    v2 = 0;
  *v1 = v2 + 1;
  return v2;
}
