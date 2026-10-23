/* sub_60920168
 * address: 0x60920168   size: 108   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60920168(int *a1)
{
  int v2; // r0
  int result; // r0
  int v4; // [sp+4h] [bp-14h] BYREF
  int v5; // [sp+8h] [bp-10h]
  int v6; // [sp+Ch] [bp-Ch]

  v2 = *a1;
  if ( v2 )
  {
    v4 = v2;
    v5 = a1[1];
    v6 = a1[2];
    sub_60913B04(&v4, a1[10]);
  }
  result = a1[3];
  if ( result )
  {
    v4 = a1[3];
    v5 = a1[4];
    v6 = a1[5];
    return sub_60913B04(&v4, a1[11]);
  }
  return result;
}
