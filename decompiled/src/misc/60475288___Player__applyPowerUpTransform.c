/* ??Player__applyPowerUpTransform
 * address: 0x60475288   size: 76   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall __Player__applyPowerUpTransform(int a1, int a2, int a3, int *a4)
{
  int result; // r0
  int v9; // r6

  result = *a4;
  if ( *a4 >= 1 )
  {
    v9 = 0;
    do
    {
      *(_DWORD *)(a2 + 4 * v9++) = sub_6047488C(a1, a3);
      a3 += 8;
      result = *a4;
    }
    while ( v9 < *a4 );
  }
  return result;
}
