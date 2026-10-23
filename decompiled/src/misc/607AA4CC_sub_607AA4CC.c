/* sub_607AA4CC
 * address: 0x607AA4CC   size: 84   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607AA4CC(_DWORD *a1)
{
  int v1; // r4

  v1 = a1[1751];
  if ( a1[330] == 5 )
    return dword_60B0CA64[v1];
  else
    return dword_60B0C9BC[3 * v1 + (*(int (__fastcall **)(_DWORD *))(*a1 + 156))(a1)];
}
