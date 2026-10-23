/* sub_6039EDF4
 * address: 0x6039EDF4   size: 132   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6039EDF4(_DWORD *a1, int a2)
{
  int v4; // r6
  unsigned int v5; // r1
  int v6; // r7

  v4 = 0;
  v5 = a1[1];
  if ( v5 )
  {
    v6 = ActorMgrRelated_getById(ActorMgr__instance + 27168, v5);
    if ( v6 )
    {
      (*(void (__fastcall **)(_DWORD *, int))(*a1 + 4))(a1, a2);
      (*(void (__fastcall **)(_DWORD *))*a1)(a1);
      (*(void (__fastcall **)(int, int))(*(_DWORD *)v6 + 700))(v6, a2);
      return 1;
    }
  }
  return v4;
}
