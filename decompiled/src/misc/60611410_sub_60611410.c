/* sub_60611410
 * address: 0x60611410   size: 112   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60611410(int a1, int a2)
{
  int v2; // r4
  int v3; // r1
  int v4; // r0
  bool v5; // zf
  signed int v7; // [sp+4h] [bp-14h] BYREF

  v2 = FIELD_U32(a2, 144);
  v3 = FIELD_U8(v2, 28);
  if ( !FIELD_U8(v2, 28) )
  {
    FIELD_U32(v2, 1096) = 60;
    goto LABEL_8;
  }
  v7 = 4;
  v4 = sub_606D4384(&v7, v3);
  v5 = v4 == 0;
  if ( v4 )
    v5 = v7 == 4;
  if ( !v5 && sub_606D4894() == 1 )
  {
    FIELD_U32(v2, 1096) = 60;
LABEL_8:
    FIELD_U32(v2, 1104) = 0;
  }
  return 1;
}
