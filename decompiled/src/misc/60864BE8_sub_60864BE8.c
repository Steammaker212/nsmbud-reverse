/* sub_60864BE8
 * address: 0x60864BE8   size: 104   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned int __fastcall sub_60864BE8(_DWORD *a1, unsigned int *a2, int a3)
{
  bool v4; // cc
  unsigned int result; // r0
  int v6; // r12
  int v7; // lr
  unsigned int v8; // r2
  unsigned int v9; // lr

  v4 = a3 <= 0;
  result = 0;
  if ( a3 >= 0 )
    v4 = a1[4] <= a3;
  if ( !v4 )
  {
    v6 = a1[6];
    v7 = a1[3] + 16 * a3;
    v8 = FIELD_U32(v7, 8);
    if ( !v6 )
      v8 = bswap32(v8);
    if ( !a2 )
      return a1[5] + v8;
    v9 = FIELD_U32(v7, 12);
    if ( !v6 )
      v9 = bswap32(v9);
    if ( v9 >= v8 )
    {
      *a2 = v8;
      a2[1] = v9 - v8;
      return a1[5] + v8;
    }
  }
  return result;
}
