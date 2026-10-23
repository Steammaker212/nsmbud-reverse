/* sub_608AE904
 * address: 0x608AE904   size: 56   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608AE904(int a1, int *a2, int a3)
{
  int v4; // r2
  int result; // r0
  int v6; // r4

  v4 = a1 + 24;
  result = FIELD_U32(a1, 28);
  if ( result != v4 )
  {
    v6 = *a2;
    do
    {
      *(_DWORD *)(result - 36) = v6;
      *(_DWORD *)(result - 32) = a3;
      v6 += a3;
      result = FIELD_U32(result, 4);
    }
    while ( result != v4 );
  }
  return result;
}
