/* sub_605BCEA0
 * address: 0x605BCEA0   size: 104   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605BCEA0(_DWORD *a1)
{
  int result; // r0

  result = sub_6072A768(EventMgr__instance);
  if ( result )
  {
    result = sub_60729CF0(EventMgr__instance, 0);
    if ( result )
    {
      a1[1824] = 47;
      return (*(int (__fastcall **)(_DWORD *, void *))(*a1 + 192))(a1, &unk_60CB080C);
    }
  }
  return result;
}
