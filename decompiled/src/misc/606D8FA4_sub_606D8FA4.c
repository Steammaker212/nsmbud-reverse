/* sub_606D8FA4
 * address: 0x606D8FA4   size: 120   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_606D8FA4(int a1)
{
  unsigned int v2; // r1

  v2 = FIELD_U32(a1, 6100);
  if ( !v2 )
    goto LABEL_4;
  if ( ActorMgrRelated_getById(ActorMgr__instance + 27168, v2) )
  {
    (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 196))(a1);
LABEL_4:
    StateMgr__execute((StateMgr *)(a1 + 6084));
    (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 208))(a1);
    return 1;
  }
  return 0;
}
