/* sub_600DEBC8
 * address: 0x600DEBC8   size: 76   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_600DEBC8(_DWORD *a1)
{
  int v2; // r0
  int v3; // r1
  int v4; // r0

  v2 = (*(int (__fastcall **)(_DWORD *))(*a1 + 716))(a1);
  v3 = 1;
  if ( !v2 )
  {
    v4 = (*(int (__fastcall **)(_DWORD *))(*a1 + 720))(a1);
    v3 = 2;
    if ( v4 )
      v3 = 1;
  }
  a1[1795] = v3;
  return 7180;
}
