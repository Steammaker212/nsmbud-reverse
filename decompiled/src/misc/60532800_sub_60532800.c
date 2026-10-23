/* sub_60532800
 * address: 0x60532800   size: 48   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall sub_60532800(int a1)
{
  int v1; // r0
  float result; // s0
  bool v3; // zf

  v1 = FIELD_U32(a1, 52);
  result = 0.0;
  v3 = v1 == 0;
  if ( v1 )
  {
    v1 = FIELD_U32(v1, 64);
    v3 = v1 == 0;
  }
  if ( !v3 )
    return (float)(unsigned int)sub_608502E4(v1);
  return result;
}
