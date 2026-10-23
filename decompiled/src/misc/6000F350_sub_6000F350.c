/* sub_6000F350
 * address: 0x6000F350   size: 28   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6000F350(LineFollower *a1)
{
  int reversed; // r1
  int rotation; // r0
  int v3; // r2

  reversed = (unsigned __int8)FIELD_U8(a1, 0x8E);
  rotation = FIELD_U32(a1, 0x84);
  v3 = -1073741824;
  if ( !reversed )
    v3 = 0x40000000;
  return v3 + rotation;
}
