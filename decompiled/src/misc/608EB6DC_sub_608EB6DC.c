/* sub_608EB6DC
 * address: 0x608EB6DC   size: 64   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608EB6DC(int a1)
{
  int result; // r0
  _BYTE v3[16]; // [sp+0h] [bp-10h] BYREF

  result = FIELD_U8(a1, 346) & 3;
  if ( result != 3 )
  {
    sub_608F2998(v3, FIELD_U32(a1, 244));
    return sub_608F2998(v3, FIELD_U32(a1, 244) + 16);
  }
  return result;
}
