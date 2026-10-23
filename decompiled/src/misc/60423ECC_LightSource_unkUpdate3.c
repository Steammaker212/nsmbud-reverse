/* LightSource_unkUpdate3
 * address: 0x60423ECC   size: 64   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall LightSource_unkUpdate3(LightSource *this)
{
  _BOOL4 result; // r0
  int v3; // r1

  result = sub_60236FD4(&FIELD_F32(this, 0x18));
  v3 = FIELD_U32(this, 0x14);
  if ( result )
  {
    if ( !v3 )
      return result;
    result = 0;
  }
  else
  {
    if ( !v3 )
      return result;
    result = 1;
  }
  FIELD_U32(v3, 68) = result;
  return result;
}
