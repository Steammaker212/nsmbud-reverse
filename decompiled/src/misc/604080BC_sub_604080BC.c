/* sub_604080BC
 * address: 0x604080BC   size: 80   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604080BC(int result, int *a2, int *a3)
{
  int v3; // r12
  int v4; // r2
  int v5; // r2
  int v6; // r3
  int v7; // r1

  v3 = *a3;
  v4 = 0;
  while ( !FIELD_U8(result, 3833) || FIELD_U32(result, 3860) != v3 )
  {
    ++v4;
    result += 3856;
    if ( v4 >= 60 )
      return result;
  }
  if ( v4 >= 0 && FIELD_U8(result, 3833) )
  {
    result += 16;
    if ( FIELD_U8(result, 3823) )
    {
      v5 = *a2;
      v6 = a2[1];
      v7 = a2[2];
      FIELD_U32(result, 3720) = v5;
      FIELD_U32(result, 3724) = v6;
      FIELD_U32(result, 3728) = v7;
    }
  }
  return result;
}
