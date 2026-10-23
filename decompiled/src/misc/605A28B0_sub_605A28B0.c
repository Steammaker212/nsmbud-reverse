/* sub_605A28B0
 * address: 0x605A28B0   size: 112   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605A28B0(int a1)
{
  int v2; // r1

  ShapedCollider_execute((ColliderBase *)(a1 + 72328));
  v2 = FIELD_U32(a1, 72984);
  if ( v2 )
    FIELD_U32(a1, 72984) = v2 - 1;
  if ( FIELD_U8(a1, 73004) )
    --FIELD_U8(a1, 73004);
  TerrainActor_onExecute(a1);
  sub_605C1DA0(a1 + 73008);
  sub_605A2714(a1);
  return 1;
}
