/* sub_605F3C9C
 * address: 0x605F3C9C   size: 284   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605F3C9C(int a1)
{
  int v2; // r1
  int v3; // r0
  int result; // r0

  CollisionMgr_init((CollisionMgr *)(a1 + 648), (StateActor *)a1, &stru_60B05DEC, 0, &stru_60B05DF8);
  v2 = FIELD_U32(a1, 3200);
  v3 = v2 | 0x20000;
  FIELD_U32(a1, 3200) = v2 | 0x20000;
  FIELD_U32(a1, 6180) = 3;
  if ( FIELD_U8(a1, 6176) )
  {
    v3 = v2 | 0x40020000;
    FIELD_U32(a1, 3200) = v2 | 0x40020000;
    FIELD_U32(a1, 6180) = 0;
  }
  if ( (FIELD_U8(a1, 20) & 0xF0) != 0 )
    FIELD_U32(a1, 3200) = v3 | 0x400000;
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
