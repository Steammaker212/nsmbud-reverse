/* sub_6049F9D4
 * address: 0x6049F9D4   size: 104   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6049F9D4(int a1)
{
  if ( !FIELD_U8(dword_60C99DEC, 522) && FIELD_S32(a1, 22496) <= 2 )
  {
    sub_6047EFCC(a1 + 3676, 1);
    FIELD_U8(a1, 4137) = 1;
  }
  FIELD_U8(a1, 22500) = 0;
  FIELD_U32(a1, 22480) = 3;
  return 22480;
}
