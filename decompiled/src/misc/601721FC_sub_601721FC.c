/* sub_601721FC
 * address: 0x601721FC   size: 80   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601721FC(int a1)
{
  int v1; // r12
  int v2; // r2
  int v3; // r3
  _DWORD *v4; // r1
  int *v5; // r2
  int result; // r0

  v1 = FIELD_U32(a1, 100);
  FIELD_U32(a1, 548) = v1;
  v2 = FIELD_U32(a1, 104);
  FIELD_U32(a1, 552) = v2;
  v3 = FIELD_U32(a1, 108);
  FIELD_U32(a1, 556) = v3;
  v4 = (_DWORD *)dword_60CC6D78;
  FIELD_U32(dword_60CC6D78, 2100) = v1;
  v4[526] = v2;
  v4[527] = v3;
  v5 = v4 + 534;
  if ( !FIELD_U8(a1, 607) )
    v5 = (int *)(a1 + 64);
  result = *v5;
  v4[534] = *v5;
  return result;
}
