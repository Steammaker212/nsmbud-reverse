/* sub_60462B7C
 * address: 0x60462B7C   size: 48   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall sub_60462B7C(int a1)
{
  int *v2; // r1

  if ( FIELD_U8(a1, 86) == 1 )
    return -2600.0;
  v2 = dword_60462BB0;
  if ( FIELD_U32(a1, 6168) == 5 )
    v2 = &dword_60462BB0[1];
  return *(float *)v2;
}
