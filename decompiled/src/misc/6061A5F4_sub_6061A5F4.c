/* sub_6061A5F4
 * address: 0x6061A5F4   size: 128   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6061A5F4(int a1)
{
  CollisionMgr *v2; // r0
  int result; // r0

  FIELD_U32(a1, 120) = 0;
  FIELD_U32(a1, 124) = 0;
  FIELD_U32(a1, 128) = 0;
  FIELD_U32(a1, 100) = -1103101952;
  FIELD_U32(a1, 136) = -1065353216;
  v2 = (CollisionMgr *)(a1 + 648);
  if ( (FIELD_U8(a1, 25) & 1) != 0 )
    CollisionMgr_init(v2, (StateActor *)a1, &stru_60B06700, 0, 0);
  else
    CollisionMgr_init(v2, (StateActor *)a1, &stru_60B066F4, 0, 0);
  result = FIELD_U32(a1, 3200) | 0x600;
  FIELD_U32(a1, 3200) = result;
  return result;
}
