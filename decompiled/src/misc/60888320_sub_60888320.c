/* sub_60888320
 * address: 0x60888320   size: 76   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60888320(int a1, int a2, int a3, int a4, int a5)
{
  int v5; // r12
  int v6; // r0
  int v7; // lr
  int result; // r0

  v5 = FIELD_U32(a1, 16);
  v6 = a5;
  v7 = FIELD_U8(v5, 103);
  if ( v7 <= a5 )
    v6 = v7 - 1;
  result = FIELD_U32(v5, 32) + 56 * v6;
  if ( result )
    return sub_60872358((_DWORD *)result, a2, 0, FIELD_U16(result, 52), a3, a4);
  return result;
}
