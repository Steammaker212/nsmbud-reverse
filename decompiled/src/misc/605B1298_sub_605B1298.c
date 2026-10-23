/* sub_605B1298
 * address: 0x605B1298   size: 144   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605B1298(int a1)
{
  StateMgr__execute((StateMgr *)(a1 + 6084));
  ShapedCollider_execute((ColliderBase *)(a1 + 6120));
  if ( FIELD_U16(a1, 6832) )
    --FIELD_U16(a1, 6832);
  FIELD_U8(a1, 6845) = 0;
  FIELD_U8(a1, 6916) = -1;
  FIELD_U8(a1, 6917) = -1;
  FIELD_U8(a1, 6928) = -1;
  FIELD_U8(a1, 6929) = -1;
  FIELD_U8(a1, 6940) = -1;
  FIELD_U8(a1, 6941) = -1;
  FIELD_U8(a1, 6952) = -1;
  FIELD_U8(a1, 6953) = -1;
  return 1;
}
