/* sub_6052A1C4
 * address: 0x6052A1C4   size: 140   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6052A1C4(int a1, int a2, _DWORD *a3)
{
  int v6; // r0
  int v7; // r0
  int v8; // r6
  int v9; // r2

  v6 = sub_608DE1A4(0xB0u);
  FIELD_U32(a1, 36) = sub_6085852C(v6, a3[1]);
  v7 = sub_608DE1A4(0xB0u);
  v8 = v7;
  if ( a2 )
  {
    sub_6085852C(v7, a3[4]);
    sub_608589FC(FIELD_U32(a1, 36), v8);
    v9 = a3[4];
  }
  else
  {
    sub_6085852C(v7, a3[3]);
    sub_608589FC(FIELD_U32(a1, 36), v8);
    v9 = a3[3];
  }
  return sub_6052A250(a1, v8, v9);
}
