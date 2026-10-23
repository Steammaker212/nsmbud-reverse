/* sub_6091B384
 * address: 0x6091B384   size: 76   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6091B384(int a1, int a2)
{
  int v2; // r2
  int result; // r0
  int v4; // r3
  int v5; // t1

  v2 = 0;
  result = *(_DWORD *)a1 + *(_DWORD *)(*(_DWORD *)a1 + 4) + 16;
  while ( 1 )
  {
    --result;
    do
    {
      v5 = *(unsigned __int8 *)++result;
      v4 = v5;
    }
    while ( !v5 );
    if ( v2 == a2 )
      break;
    if ( v4 )
    {
      while ( *(_BYTE *)++result )
        ;
    }
    ++v2;
  }
  return result;
}
