/* sub_605D9BC8
 * address: 0x605D9BC8   size: 100   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605D9BC8(int a1)
{
  int v1; // r3
  int result; // r0
  int v3; // t1

  v1 = 0x40000000;
  FIELD_U32(a1, 6260) &= 0xFFFFFFE7;
  v3 = FIELD_U32(a1, 6264);
  result = a1 + 6264;
  *(_DWORD *)result = v3 & 0xFFFFFFFD;
  FIELD_U32(result, 80) = 0;
  if ( *(_DWORD *)(result - 6184) == 1 )
    v1 = -1073741824;
  *(_DWORD *)(result - 6104) = v1;
  *(_DWORD *)(result - 6160) = 0;
  FIELD_U8(result, 84) = 0;
  return result;
}
