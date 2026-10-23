/* sub_608EFF80
 * address: 0x608EFF80   size: 84   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608EFF80(int a1, _DWORD *a2)
{
  int v4; // r4
  int v5; // r0
  int v6; // r0
  int v7; // r5

  v4 = a1 + 4;
  sead__CriticalSection__lock(a1 + 4);
  v5 = a2[25];
  if ( v5 )
    v6 = sub_608EC97C(v5, a2);
  else
    v6 = sub_608F0894(a1, a2, 0);
  v7 = v6;
  sead__CriticalSection__unlock(v4);
  return v7;
}
