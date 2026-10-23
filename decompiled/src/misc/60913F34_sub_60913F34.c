/* sub_60913F34
 * address: 0x60913F34   size: 52   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60913F34(_DWORD *a1, int a2)
{
  int v2; // r2
  int v3; // r12
  int *v4; // r3
  int v6; // r2

  if ( FIELD_U8(a2, 272) )
    FIELD_U8(a2, 272) = 0;
  v2 = a1[4];
  v3 = a1[3];
  v4 = (int *)(v2 + 8);
  if ( !v2 )
    v4 = a1 + 1;
  v6 = *v4;
  FIELD_U8(a2, 272) = 1;
  FIELD_U8(a2, 273) |= 1u;
  *(_DWORD *)a2 = v3;
  FIELD_U32(a2, 8) = v6;
  return a2;
}
