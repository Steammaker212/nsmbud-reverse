/* sead__CalculateTask__pauseCalcRec
 * address: 0x608EBEE4   size: 120   group: sdklib
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sead__CalculateTask__pauseCalcRec(int a1, int a2)
{
  int v4; // r4
  void (__fastcall ***v5)(_DWORD, int, int); // r0
  int v6; // r0

  v4 = a1 + 112;
  sead__MethodTreeNode__lock(a1 + 112);
  v5 = *(void (__fastcall ****)(_DWORD, int, int))(a1 + 184);
  if ( a2 == 1 )
  {
    if ( v5 )
      (**v5)(v5, v4, 3);
    v6 = 3;
  }
  else
  {
    if ( v5 )
      (**v5)(v5, v4, 0);
    v6 = 0;
  }
  FIELD_U32(a1, 180) = v6;
  return sead__MethodTreeNode__unlock(v4);
}
