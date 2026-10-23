/* sub_608C1668
 * address: 0x608C1668   size: 152   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608C1668(int a1, int a2, int a3, unsigned int a4)
{
  int v8; // r0
  int v9; // r1
  int result; // r0
  int v11; // r0
  int v12; // r3
  _BYTE v13[16]; // [sp+4h] [bp-3Ch] BYREF
  int v14; // [sp+14h] [bp-2Ch]

  sub_608A9E10(a2, (int)v13);
  sub_608A9E10(a2, (int)v13);
  v8 = sub_608A9E10(a2, (int)v13);
  v9 = v14;
  if ( !v8 )
    v9 = 0;
  result = 0;
  if ( 10496 * FIELD_U32(a1, 96) * v9 <= a4 )
  {
    v11 = sub_608A9E10(a2, (int)v13);
    v12 = v14;
    if ( !v11 )
      v12 = 0;
    sub_608D6E8C(a1 + 68, a3, a4, v12);
    return 1;
  }
  return result;
}
