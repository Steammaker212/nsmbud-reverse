/* sub_60650F20
 * address: 0x60650F20   size: 128   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60650F20(int a1)
{
  __int64 v2; // r0
  int result; // r0

  v2 = sub_6072A6DC(EventMgr__instance, FIELD_U8(a1, 539), FIELD_U8(a1, 540));
  result = FIELD_U32(EventMgr__instance, 16) & v2
         | ((FIELD_U64(EventMgr__instance, 16) & (unsigned __int64)v2) >> 32);
  if ( result )
  {
    sub_60639354(a1 + 6812);
    StateMgr__changeState((StateMgr *)(a1 + 6084), &stru_60CB620C);
    FIELD_U32(a1, 108) = FIELD_U32(a1, 6844);
    FIELD_U32(a1, 112) = FIELD_U32(a1, 6848);
    result = FIELD_U32(a1, 6852);
    FIELD_U32(a1, 116) = result;
  }
  return result;
}
