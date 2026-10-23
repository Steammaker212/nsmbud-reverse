/* sub_605F3EF8
 * address: 0x605F3EF8   size: 272   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605F3EF8(int a1)
{
  int result; // r0

  CollisionMgr_init((CollisionMgr *)(a1 + 648), (StateActor *)a1, &stru_60B05DEC, 0, &stru_60B05DF8);
  FIELD_U32(a1, 3200) |= 0x40000000u;
  FIELD_U32(a1, 3176) |= 0x40000000u;
  FIELD_U32(a1, 3184) |= 0x40000000u;
  (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 208))(a1);
  FIELD_U32(a1, 6180) = 3;
  (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 204))(a1);
  FIELD_U32(a1, 6048) = -1119040307;
  FIELD_U32(a1, 6040) = 1063675494;
  FIELD_U32(a1, 6044) = -1083808154;
  FIELD_U8(a1, 6056) = 1;
  result = FIELD_U32(a1, 6156);
  if ( result )
    return sub_603FD768(
             dword_60C99DF4,
             FIELD_U8(LevelInfo_instance, 18),
             1,
             FIELD_F32(a1, 6108),
             FIELD_F32(a1, 6112));
  return result;
}
