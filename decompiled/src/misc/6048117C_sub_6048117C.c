/* sub_6048117C
 * address: 0x6048117C   size: 88   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6048117C(int a1)
{
  int result; // r0

  result = FIELD_U8(a1, 12836);
  if ( result )
  {
    StateMgr__execute((StateMgr *)(a1 + 24));
    sub_6050A950(a1 + 5608, FIELD_U32(a1, 12832));
    sub_6050A8A4(a1 + 5608);
    return sub_60473B58((_DWORD *)(a1 + 2060), 0xEu, 0);
  }
  return result;
}
