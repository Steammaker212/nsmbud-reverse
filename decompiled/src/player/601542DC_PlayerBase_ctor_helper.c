/* PlayerBase_ctor_helper
 * address: 0x601542DC   size: 160   group: player
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall PlayerBase_ctor_helper(int a1)
{
  CollisionMgr_ctor((CollisionMgr *)a1);
  *(_DWORD *)a1 = off_60BD44E0;
  FIELD_U32(a1, 5348) = a1;
  FIELD_U32(a1, 5352) = 0;
  FIELD_U32(a1, 5356) = 0;
  FIELD_U8(a1, 5360) = -1;
  FIELD_U16(a1, 5362) = 0;
  FIELD_U8(a1, 5364) = 0;
  FIELD_U32(a1, 5368) = 1;
  FIELD_U32(a1, 5372) = 0;
  sub_6014A238((_DWORD *)(a1 + 5416));
  sub_6014A238((_DWORD *)(a1 + 5472));
  FIELD_U32(a1, 5532) = 0;
  memset((void *)(a1 + 5376), 0, 40);
  return a1;
}
