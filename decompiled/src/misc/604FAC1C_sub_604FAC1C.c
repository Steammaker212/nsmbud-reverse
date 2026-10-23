/* sub_604FAC1C
 * address: 0x604FAC1C   size: 72   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604FAC1C(int a1)
{
  int result; // r0

  result = FIELD_U8(a1, 3684);
  if ( result )
  {
    StateMgr__execute((StateMgr *)(a1 + 24));
    sub_6050A8A4(FIELD_U32(a1, 3668));
    sub_6050A8A4(FIELD_U32(a1, 3672));
    sub_6050A8A4(FIELD_U32(a1, 3676));
    return sub_60473B58((_DWORD *)(a1 + 40), 0xEu, 0);
  }
  return result;
}
