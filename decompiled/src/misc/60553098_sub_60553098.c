/* sub_60553098
 * address: 0x60553098   size: 152   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60553098(int a1)
{
  int result; // r0

  result = FIELD_U8(a1, 40);
  if ( result )
  {
    StateMgr__execute((StateMgr *)(a1 + 24));
    sub_6050229C(a1 + 17840);
    sub_6050A8A4(a1 + 19932);
    sub_60473B58((_DWORD *)(a1 + 44), 0xEu, 0);
    if ( FIELD_U32(a1, 70220) )
      sub_60555088();
    if ( FIELD_U32(a1, 70224) )
      sub_60555088();
    if ( FIELD_U32(a1, 70228) )
      sub_60555088();
    return sub_60553130(a1);
  }
  return result;
}
