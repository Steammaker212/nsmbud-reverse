/* sub_6003433C
 * address: 0x6003433C   size: 72   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_6003433C(int a1, int a2, int a3)
{
  return FIELD_U32(a3, 140) == 2
      && (FIELD_U8(a2, 148) & 4) != 0
      && (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 216))(a1) != 0;
}
