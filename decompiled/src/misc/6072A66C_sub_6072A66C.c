/* sub_6072A66C
 * address: 0x6072A66C   size: 112   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall sub_6072A66C(int a1, __int64 a2)
{
  int v3; // r12
  __int64 v4; // r0
  bool v5; // cc

  v3 = 1;
  v4 = 1;
  while ( (v4 & a2) == 0 )
  {
    if ( (unsigned int)a2 & (2 * (_DWORD)v4) | (unsigned int)(v4 >> 31) & HIDWORD(a2) )
      return (unsigned __int8)v3;
    v4 *= 4;
    v5 = v3 + 1 < 64;
    v3 += 2;
    if ( !v5 )
      return 255;
  }
  LOBYTE(v3) = v3 - 1;
  return (unsigned __int8)v3;
}
