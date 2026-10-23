/* sub_6071DF2C
 * address: 0x6071DF2C   size: 80   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6071DF2C(int a1, int a2)
{
  int result; // r0
  int v5; // r0
  int v6; // [sp+0h] [bp-78h] BYREF

  result = FIELD_U8(a1, 1509);
  if ( result )
  {
    v5 = sub_6090B350(&v6);
    sub_6090B4B0(v5, FIELD_U32(a2, 40));
    sub_6091ADF4(FIELD_U32(a1, 8260), FIELD_U32(a2, 40));
    return sub_6090B260(FIELD_U32(a2, 12), FIELD_U32(a2, 40));
  }
  return result;
}
