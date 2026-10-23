/* sub_603F0658
 * address: 0x603F0658   size: 272   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_603F0658(int a1, int a2)
{
  if ( FIELD_U8(a1, 5762) && FIELD_U32(a1, 5740) == a2 )
    return FIELD_U32(a1, 5728);
  if ( FIELD_U8(a1, 11514) && FIELD_U32(a1, 11492) == a2 )
    return FIELD_U32(a1, 11480);
  if ( FIELD_U8(a1, 17266) && FIELD_U32(a1, 17244) == a2 )
    return FIELD_U32(a1, 17232);
  if ( FIELD_U8(a1, 23018) && FIELD_U32(a1, 22996) == a2 )
    return FIELD_U32(a1, 22984);
  if ( FIELD_U8(a1, 28770) && FIELD_U32(a1, 28748) == a2 )
    return FIELD_U32(a1, 28736);
  if ( FIELD_U8(a1, 34522) && FIELD_U32(a1, 34500) == a2 )
    return FIELD_U32(a1, 34488);
  return -1;
}
