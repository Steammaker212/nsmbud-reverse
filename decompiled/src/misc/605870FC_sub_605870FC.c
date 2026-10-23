/* sub_605870FC
 * address: 0x605870FC   size: 184   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605870FC(int a1)
{
  CollisionMgr *v2; // r0
  int result; // r0
  bool v4; // zf

  FIELD_U32(a1, 120) = 0;
  FIELD_U32(a1, 124) = -1093874483;
  FIELD_U32(a1, 128) = 0;
  FIELD_U32(a1, 6316) = dword_60CAF240;
  FIELD_U32(a1, 160) = 0;
  v2 = (CollisionMgr *)(a1 + 648);
  if ( FIELD_U32(a1, 6324) == 2 )
    CollisionMgr_init(v2, (StateActor *)a1, &stru_60B04AA4, 0, 0);
  else
    CollisionMgr_init(v2, (StateActor *)a1, &stru_60B04AB0, 0, 0);
  result = FIELD_U8(dword_60CC6D8C, 17);
  v4 = result == 0;
  if ( FIELD_U8(dword_60CC6D8C, 17) )
  {
    result = FIELD_U8(a1, 26);
    v4 = (result & 1) == 0;
  }
  if ( !v4 )
  {
    FIELD_U32(a1, 6344) = 0;
    result = FIELD_U32(a1, 3200) | 0x40000000;
    FIELD_U32(a1, 3200) = result;
  }
  return result;
}
