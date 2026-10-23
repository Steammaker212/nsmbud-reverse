/* sub_603C085C
 * address: 0x603C085C   size: 120   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_603C085C(int a1)
{
  int result; // r0

  result = *(unsigned __int8 *)(**(_DWORD **)(FIELD_U32(a1, 6304) + 12) + 28);
  if ( (result & 0x10) != 0 )
  {
    if ( ActorMgrRelated_getById(ActorMgr__instance + 27168, FIELD_U32(a1, 6352)) )
      Actor__removeChild((Actor *)a1, *(Actor **)(a1 + 6328));
    return (*(int (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C985C0);
  }
  return result;
}
