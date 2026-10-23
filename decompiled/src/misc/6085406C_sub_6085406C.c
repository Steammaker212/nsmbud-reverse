/* sub_6085406C
 * address: 0x6085406C   size: 48   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6085406C(int a1, int a2, int a3)
{
  int v3; // r3

  if ( FIELD_U32(a1, 216) != a2 || (v3 = 0, FIELD_U8(a1, 220) != a3) )
  {
    v3 = 1;
    FIELD_U32(a1, 216) = a2;
    FIELD_U8(a1, 220) = a3;
  }
  return v3;
}
