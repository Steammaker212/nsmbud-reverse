/* sub_6074A004
 * address: 0x6074A004   size: 36   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_6074A004(int a1)
{
  _DWORD *v1; // r0

  v1 = *(_DWORD **)(a1 + 644);
  if ( v1[20] == 17 )
    sub_605EB89C(v1, 5.0);
  else
    sub_605EAB48((int)v1, 17);
}
