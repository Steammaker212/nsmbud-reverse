/* sub_608AD1CC
 * address: 0x608AD1CC   size: 96   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608AD1CC(int a1, _DWORD *a2, int a3, int a4)
{
  int v7; // r2

  v7 = (*(int (__fastcall **)(int, int, _DWORD))(*(_DWORD *)a1 + 16))(a1, a3, 0);
  if ( v7 == -1 )
    return 2;
  else
    return sub_608AD0F0(a1, a2, v7, 0, a4);
}
