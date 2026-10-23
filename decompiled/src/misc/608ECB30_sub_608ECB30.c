/* sub_608ECB30
 * address: 0x608ECB30   size: 104   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608ECB30(_DWORD *a1)
{
  void (__fastcall ***v2)(_DWORD, int, _DWORD); // r0

  sead__MethodTreeNode__pushBackChild(a1[23] + 312, a1 + 98);
  sead__TaskBase__attachMethodWithCheck(a1, 1, a1 + 78);
  sead__MethodTreeNode__lock(a1 + 78);
  v2 = (void (__fastcall ***)(_DWORD, int, _DWORD))a1[96];
  if ( v2 )
    (**v2)(v2, (int)(a1 + 78), 0);
  a1[95] = 0;
  return sead__MethodTreeNode__unlock(a1 + 78);
}
