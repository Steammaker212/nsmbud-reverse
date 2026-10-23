/* sub_606CA124
 * address: 0x606CA124   size: 124   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_606CA124(_DWORD *a1, int a2, int a3)
{
  unsigned int v6; // r1

  v6 = a1[1535];
  if ( v6 && ActorMgrRelated_getById(ActorMgr__instance + 27168, v6) )
    return (*(int (__fastcall **)(_DWORD *, int, int))(*a1 + 228))(a1, a2, a3);
  else
    return 0;
}
