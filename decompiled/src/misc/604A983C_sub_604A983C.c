/* sub_604A983C
 * address: 0x604A983C   size: 124   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604A983C(int result)
{
  unsigned int v1; // r1
  unsigned int v2; // r4
  int v3; // r4

  v1 = 0;
  FIELD_U8(result, 279700) = 0;
  FIELD_U8(result, 279705) = 0;
  FIELD_U8(result, 279704) = 0;
  FIELD_U8(result, 279703) = 0;
  FIELD_U8(result, 279702) = 0;
  FIELD_U8(result, 279701) = 0;
  FIELD_U8(result, 279706) = 0;
  if ( FIELD_S32(result, 279736) >= 1 )
  {
    do
    {
      v2 = 0;
      if ( v1 < 4 )
        v2 = v1;
      ++v1;
      v3 = result + 20556 * v2;
      FIELD_U32(v3, 3732) |= 0x10u;
      FIELD_U8(v3, 24275) = 1;
    }
    while ( (signed int)v1 < FIELD_U32(result, 279736) );
  }
  return result;
}
