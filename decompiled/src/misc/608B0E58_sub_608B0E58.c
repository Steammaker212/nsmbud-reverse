/* sub_608B0E58
 * address: 0x608B0E58   size: 108   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608B0E58(int a1)
{
  _DWORD *v2; // r0
  int v3; // r2
  int v4; // r3
  int result; // r0

  v2 = *(_DWORD **)a1;
  if ( v2 && (int)v2[1] >= 1 )
  {
    v3 = 0;
    v4 = 0;
    do
    {
      ++v4;
      *(_DWORD *)(*v2 + v3) = 0;
      v3 += 4;
    }
    while ( v4 < v2[1] );
  }
  if ( FIELD_U32(a1, 4) )
    sub_608D3C60();
  result = FIELD_U32(a1, 8);
  if ( result )
    return sub_608B46CC();
  return result;
}
