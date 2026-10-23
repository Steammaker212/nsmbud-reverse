/* sub_60301BE4
 * address: 0x60301BE4   size: 192   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60301BE4(int a1)
{
  sub_603005F4(a1, 3);
  (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 648))(a1);
  sub_602A7CEC((char *)a1);
  CollisionMgr_init((CollisionMgr *)(a1 + 648), (StateActor *)a1, &stru_60AFF088, 0, 0);
  FIELD_U32(a1, 3200) |= 0x80000000;
  FIELD_U32(a1, 3204) |= 1u;
  FIELD_U32(a1, 3192) |= 0x80000000;
  FIELD_U32(a1, 3196) |= 1u;
  FIELD_U32(a1, 3176) |= 0x80000000;
  FIELD_U32(a1, 3184) |= 0x80000000;
  FIELD_U32(a1, 3180) |= 1u;
  FIELD_U32(a1, 3188) |= 1u;
  FIELD_U32(a1, 8496) = 1;
  return 8496;
}
