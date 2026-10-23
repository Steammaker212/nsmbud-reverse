/* sub_605FF8E4
 * address: 0x605FF8E4   size: 156   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605FF8E4(int a1)
{
  int v2; // r0

  FIELD_F32(a1, 492) = FIELD_F32(a1, 6840) - FIELD_F32(a1, 108);
  StageActor__cullCheck((StageActor *)a1, 0);
  if ( !v2 )
  {
    StateMgr__execute((StateMgr *)(a1 + 6084));
    if ( FIELD_U8(a1, 6876) )
    {
      FIELD_U8(a1, 19) = 1;
      return 1;
    }
    if ( !FIELD_U8(a1, 6878) || FIELD_U32(a1, 6824) )
    {
      ShapedCollider_execute((ColliderBase *)(a1 + 6168));
      ((void (__fastcall *)(int))loc_605FF658)(a1);
    }
  }
  return 1;
}
