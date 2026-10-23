/* sub_607AB44C
 * address: 0x607AB44C   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_607AB44C(int a1)
{
  return sub_607B939C(a1) == 5
      && !(*(int (__fastcall **)(int))(*(_DWORD *)a1 + 1064))(a1)
      && FIELD_U8(a1, 12917)
      && !FIELD_U32(a1, 12920);
}
