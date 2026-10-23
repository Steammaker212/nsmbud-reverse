/* sub_608AD060
 * address: 0x608AD060   size: 144   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608AD060(int a1, _DWORD *a2, int a3, int a4)
{
  int v7; // r2
  int v8; // r5

  v7 = (*(int (__fastcall **)(int, int, _DWORD))(*(_DWORD *)a1 + 16))(a1, a3, 0);
  if ( v7 == -1 )
    return 2;
  v8 = (*(int (__fastcall **)(int, _DWORD *, int, _DWORD, _DWORD, int))(*(_DWORD *)a1 + 8))(a1, a2, v7, 0, 0, a4);
  if ( !v8 )
  {
    v8 = 0;
    if ( *a2 )
      sub_608AF1FC();
  }
  return v8;
}
