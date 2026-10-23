/* sub_602A8EE0
 * address: 0x602A8EE0   size: 88   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_602A8EE0(int a1)
{
  if ( ActorMgrRelated_getById(ActorMgr__instance + 27168, FIELD_U32(a1, 6316)) )
    return (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 648))(a1);
  FIELD_U8(a1, 6320) = 1;
  return 6320;
}
