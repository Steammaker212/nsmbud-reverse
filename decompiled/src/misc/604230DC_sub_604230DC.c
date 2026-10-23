/* sub_604230DC
 * address: 0x604230DC   size: 120   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604230DC(int a1, int a2)
{
  int v4; // r4
  void (__fastcall ***v5)(_DWORD, int, int); // r0
  int v6; // r0

  v4 = a1 + 264;
  sead__MethodTreeNode__lock(a1 + 264);
  v5 = *(void (__fastcall ****)(_DWORD, int, int))(a1 + 336);
  if ( a2 == 1 )
  {
    if ( v5 )
      (**v5)(v5, v4, 1);
    v6 = 1;
  }
  else
  {
    if ( v5 )
      (**v5)(v5, v4, 0);
    v6 = 0;
  }
  FIELD_U32(a1, 332) = v6;
  return sead__MethodTreeNode__unlock(v4);
}
