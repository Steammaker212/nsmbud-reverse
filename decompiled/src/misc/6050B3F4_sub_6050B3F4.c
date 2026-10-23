/* sub_6050B3F4
 * address: 0x6050B3F4   size: 220   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned int __fastcall sub_6050B3F4(int a1)
{
  int v2; // r0
  unsigned int v3; // r3
  int v4; // r0
  unsigned int v5; // r3
  unsigned int result; // r0

  v2 = FIELD_U32(a1, 36);
  if ( (v2 & 1) != 0 )
  {
    v5 = sub_604746E4(a1 + 40, &dword_60CA7ECC, &dword_60CA7ED4);
    if ( v5 != -1 )
      sub_604742D0((_DWORD *)(a1 + 40), 0, &dword_60CA7ECC, v5, 1.0, 0);
  }
  else if ( (v2 & 2) != 0 )
  {
    v3 = sub_604746E4(a1 + 40, &dword_60CA7EC4, &dword_60CA7ED4);
    if ( v3 != -1 )
      sub_604742D0((_DWORD *)(a1 + 40), 0, &dword_60CA7EC4, v3, 1.0, 0);
    v4 = sub_60473B4C(a1 + 40);
    sub_6098F1D4(v4);
  }
  result = FIELD_U32(a1, 36) & 0xFFFFFFFC;
  FIELD_U32(a1, 36) = result;
  return result;
}
