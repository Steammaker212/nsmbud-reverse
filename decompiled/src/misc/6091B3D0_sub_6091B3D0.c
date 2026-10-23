/* sub_6091B3D0
 * address: 0x6091B3D0   size: 80   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6091B3D0(int *a1)
{
  int v1; // r0
  int v2; // r1
  int v3; // r2
  int result; // r0
  int v5; // r3
  int v6; // t1

  v1 = *a1;
  v2 = FIELD_U32(v1, 8);
  v3 = 0;
  result = v1 + FIELD_U32(v1, 4) + 16;
  while ( 1 )
  {
    --result;
    do
    {
      v6 = *(unsigned __int8 *)++result;
      v5 = v6;
    }
    while ( !v6 );
    if ( v3 == v2 )
      break;
    if ( v5 )
    {
      while ( *(_BYTE *)++result )
        ;
    }
    ++v3;
  }
  return result;
}
