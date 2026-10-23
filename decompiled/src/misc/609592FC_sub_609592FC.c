/* sub_609592FC
 * address: 0x609592FC   size: 28   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_609592FC(int result, int a2)
{
  if ( FIELD_U8(result, 361) )
    return sub_60835BA8(a2 + 8, (_DWORD *)(result + 200));
  return result;
}
