/* sub_608228E4
 * address: 0x608228E4   size: 88   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608228E4(int a1, int a2, int a3, _DWORD *a4)
{
  int v4; // r12
  int v5; // r5
  int v7; // r0

  v5 = 0;
  v7 = (*(int (__fastcall **)(int, int, int))(*(_DWORD *)a2 + 24))(a2, a3, v4);
  if ( v7 )
  {
    v5 = v7;
    if ( a4 )
      *a4 = 0;
  }
  return v5;
}
