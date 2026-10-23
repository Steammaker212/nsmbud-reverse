/* sub_60099418
 * address: 0x60099418   size: 164   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60099418(_DWORD *a1)
{
  __int16 v2; // r1
  int v3; // r0

  sub_60421AD4(a1[1774]);
  a1[30] = 0;
  a1[31] = 0;
  a1[32] = 0;
  if ( (*(int (__fastcall **)(_DWORD *))(*a1 + 716))(a1) == 1 )
  {
    v2 = 60;
  }
  else
  {
    v3 = (*(int (__fastcall **)(_DWORD *))(*a1 + 720))(a1);
    v2 = 30;
    if ( v3 == 1 )
      v2 = 60;
  }
  *((_WORD *)a1 + 3138) = v2;
  return 6276;
}
