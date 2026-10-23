/* sub_60390CCC
 * address: 0x60390CCC   size: 116   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60390CCC(unsigned int *a1, int a2)
{
  int result; // r0

  sub_6000B690(a1, a2);
  result = FIELD_U8(dword_60CC6D8C, 17);
  if ( FIELD_U8(dword_60CC6D8C, 17) )
  {
    result = a1[9];
    if ( FIELD_U8(result, 539) )
      return EventMgr_set(EventMgr__instance, (unsigned __int8)(FIELD_U8(result, 539) - 1), 0, 1, 0, 0, 0, 0);
  }
  return result;
}
