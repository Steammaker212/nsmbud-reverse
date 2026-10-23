/* sub_606A2490
 * address: 0x606A2490   size: 56   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_606A2490(int a1, int a2, int a3)
{
  float v3; // s0

  v3 = FIELD_F32(a1, 108) - FIELD_F32(a1, 584);
  if ( a3 )
    return v3 > 0.0;
  else
    return v3 < 0.0;
}
