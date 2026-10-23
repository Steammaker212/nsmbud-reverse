/* sub_60204DB8
 * address: 0x60204DB8   size: 32   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60204DB8(int result, int a2, int a3, float a4, float a5)
{
  bool v5; // nf

  v5 = a2 < 0;
  FIELD_F32(result, 292) = a4;
  FIELD_F32(result, 296) = a5;
  if ( !a2 )
    a2 = 1;
  if ( v5 )
    a2 = -1;
  FIELD_U32(result, 284) = a2;
  FIELD_U32(result, 288) = a3;
  return result;
}
