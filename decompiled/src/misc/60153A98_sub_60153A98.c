/* sub_60153A98
 * address: 0x60153A98   size: 56   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

ColliderMgr *__fastcall sub_60153A98(ColliderMgr *result, int a2)
{
  if ( !FIELD_U32(a2, 80) && !FIELD_U32(a2, 84) && FIELD_U32(result, 0x10)[4].first != (ColliderListNode *)(a2 + 76) )
    return (*(ColliderMgr *(__fastcall **)(ColliderList *))(FIELD_U32(result, 0x10)[4].vtable + 8))(&FIELD_U32(result, 0x10)[4]);
  return result;
}
