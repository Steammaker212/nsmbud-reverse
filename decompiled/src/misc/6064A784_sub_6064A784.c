/* sub_6064A784
 * address: 0x6064A784   size: 64   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_6064A784(int a1, int a2)
{
  unsigned int v2; // r2
  int v3; // r1

  if ( !a2 )
    return (float)(FIELD_F32(a1, 112) - FIELD_F32(a1, 588)) > 0.0;
  v2 = FIELD_U8(a2, 533) - 1;
  v3 = 0;
  if ( v2 >= 2 )
    return (float)(FIELD_F32(a1, 112) - FIELD_F32(a1, 588)) > 0.0;
  return v3;
}
