/* sub_60027634
 * address: 0x60027634   size: 100   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_60027634(int a1)
{
  FIELD_U8(dword_60C99D88, 31) = 0;
  (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 244))(a1);
  FIELD_U32(dword_60C99DD4, 1376) |= 2u;
  FIELD_U32(PlayerMgr_instance, 140) = -1;
  sub_60027390(a1);
}
