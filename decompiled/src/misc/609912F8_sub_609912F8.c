/* sub_609912F8
 * address: 0x609912F8   size: 96   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_609912F8(int a1)
{
  int v1; // r1
  _BOOL4 result; // r0
  float v3; // s16

  v1 = FIELD_U32(a1, 48);
  if ( !v1 )
    return 0;
  result = 1;
  if ( FIELD_F32(v1, 44) <= 0.0 )
  {
    v3 = FIELD_F32(v1, 16);
    return v3 == (float)(unsigned int)sub_608502E4(v1);
  }
  return result;
}
