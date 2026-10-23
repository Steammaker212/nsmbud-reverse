/* sub_602E6F24
 * address: 0x602E6F24   size: 48   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_602E6F24(_DWORD *a1, float a2)
{
  _DWORD *v2; // r0
  int *v3; // r1
  unsigned int v4; // r2
  unsigned int v5; // r0
  int result; // r0

  v2 = (_DWORD *)*a1;
  v3 = (int *)v2[3];
  v4 = v2[2];
  v5 = v2[17];
  if ( v4 > v5 )
    v3 += v5;
  result = *v3;
  FIELD_F32(result, 20) = a2;
  FIELD_U32(result, 28) |= 2u;
  return result;
}
