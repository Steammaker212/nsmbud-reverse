/* sub_607A26B8
 * address: 0x607A26B8   size: 64   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607A26B8(int a1, int a2)
{
  int result; // r0

  if ( a2 != 1 || !sub_6079DF08(a1) )
    sub_6079EA38((_DWORD *)a1);
  result = FIELD_U8(a1, 1234);
  if ( (result & 0x10) != 0 )
    return sub_607B6AE0(a1);
  return result;
}
