/* ActiveColliderMgr_isInActiveList
 * address: 0x6015B178   size: 132   group: collision
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall ActiveColliderMgr_isInActiveList(ActiveColliderMgr *this, ActiveCollider *node)
{
  int ret; // r2

  if ( FIELD_U32(node, 0x10).next || FIELD_U32(node, 0x10).prev || FIELD_U32(this, 0x10).first == &FIELD_U32(node, 0x10) )
    return 1;
  ret = 0;
  if ( (FIELD_U32(node, 0x74).field_1C & 0x800) == 0 )
    return ret;
  if ( FIELD_U32(node, 0x34).next )
    return 1;
  ret = 1;
  if ( FIELD_U32(node, 0x34).prev )
    return ret;
  return FIELD_U32(this, 0x34).first == &FIELD_U32(node, 0x34);
}
