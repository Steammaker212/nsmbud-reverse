/* sub_60767464
 * address: 0x60767464   size: 148   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60767464(int a1)
{
  if ( (FIELD_U8(a1, 1211) & 4) != 0 )
    FIELD_U16(PlayerMgr_instance, 204) |= 1 << FIELD_U8(a1, 84);
  FIELD_U32(a1, 9724) = FIELD_U32(a1, 9696);
  (*(void (__fastcall **)(int, int))(*(_DWORD *)a1 + 624))(a1, 3);
  sub_6078667C(a1 + 688, 10);
  FIELD_U32(a1, 1232) |= 0x1000000u;
  FIELD_U32(a1, 1236) |= 0x10000u;
  return (*(int (__fastcall **)(int, int))(*(_DWORD *)a1 + 620))(a1, 1);
}
