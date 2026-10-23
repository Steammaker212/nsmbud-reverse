/* sub_608CF7BC
 * address: 0x608CF7BC   size: 168   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608CF7BC(int a1)
{
  int v1; // r4
  unsigned int v2; // r0

  v1 = 0;
  FIELD_U32(a1, 16) = 0;
  FIELD_U8(a1, 8) = 1;
  v2 = nn__fs__OpenFile();
  if ( !v2 )
    return v1;
  if ( (v2 & 0x1FF) != 2 )
    return -2130706432;
  v1 = -2130706431;
  if ( (v2 & 0x3FFE00) != 0x200 )
  {
    if ( ((v2 >> 9) & 0x1FFF) - 4000 < 0x3E8 )
      return -2130706430;
    if ( (v2 & 0x3FFE00) == 0xE00 )
      return -2130706429;
    return -2130706432;
  }
  return v1;
}
