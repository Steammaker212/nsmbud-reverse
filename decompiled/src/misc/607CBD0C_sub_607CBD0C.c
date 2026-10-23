/* sub_607CBD0C
 * address: 0x607CBD0C   size: 68   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607CBD0C(int a1)
{
  _DWORD *v2; // r4

  v2 = (_DWORD *)PlayerMgr_instance;
  if ( PlayerMgr_instance )
  {
    sub_607890B0((_DWORD *)PlayerMgr_instance, a1);
    sub_6078B290(v2, a1);
    sub_6078B118(v2);
  }
  return 1;
}
