/* sub_608524F0
 * address: 0x608524F0   size: 140   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned int __fastcall sub_608524F0(int a1, int a2, float a3)
{
  _BOOL4 v6; // r0
  bool v7; // zf
  unsigned int result; // r0

  if ( (float)-(float)(unsigned int)sub_608502E4(a1) > a3 || (float)(unsigned int)sub_608502E4(a1) < a3 )
  {
    v6 = sub_60850310(a1);
    v7 = a2 == 0;
    if ( !a2 )
      v7 = v6;
    if ( !v7 )
      return sub_60850310(a1);
  }
  FIELD_U32(a1, 40) = a2;
  FIELD_F32(a1, 36) = a3;
  result = FIELD_U32(a1, 44) & 0xFFFFFFF8;
  FIELD_U32(a1, 44) = result;
  return result;
}
