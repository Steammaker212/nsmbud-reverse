/* sub_609A8F28
 * address: 0x609A8F28   size: 116   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_609A8F28(_DWORD *a1, int a2, int a3)
{
  int v6; // r7
  unsigned int v7; // r0
  int result; // r0
  int i; // r4

  v6 = 3;
  v7 = a1[48] - 3;
  if ( v7 <= 0xA )
    v6 = dword_60B75420[v7];
  result = a1[44];
  if ( result >= 1 )
  {
    for ( i = 0; i < result; ++i )
    {
      MultiFilterBlur_ref(a1, a2, a3, a1[40], v6);
      result = a1[44];
    }
  }
  return result;
}
