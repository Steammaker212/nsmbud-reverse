/* sub_6061F7AC
 * address: 0x6061F7AC   size: 100   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6061F7AC(_DWORD *a1)
{
  int result; // r0
  unsigned int v3; // r1

  result = 6320;
  v3 = a1[1580];
  if ( v3 )
  {
    result = ActorMgrRelated_getById(ActorMgr__instance + 27168, v3);
    if ( !result )
    {
      a1[1580] = 0;
      return (*(int (__fastcall **)(_DWORD *, void *))(*a1 + 192))(a1, &unk_60CB3754);
    }
  }
  return result;
}
