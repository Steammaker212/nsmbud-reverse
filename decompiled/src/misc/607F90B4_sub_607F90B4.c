/* sub_607F90B4
 * address: 0x607F90B4   size: 104   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *__fastcall sub_607F90B4(int a1)
{
  unsigned __int8 *v1; // r1
  int *result; // r0
  int v3; // r2
  int v4; // r3

  v1 = (unsigned __int8 *)dword_60C99DEC;
  FIELD_U32(a1, 85052) = 0;
  result = (int *)(a1 + 85052);
  v3 = v1[36];
  *result = v3;
  if ( v1[108] )
  {
    v4 = 2;
    if ( !v3 )
      v4 = 1;
    v3 = v4;
    *result = v4;
  }
  if ( v1[180] )
    *result = ++v3;
  if ( v1[252] )
    *result = v3 + 1;
  return result;
}
