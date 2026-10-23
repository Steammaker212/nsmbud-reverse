/* sub_6065AF60
 * address: 0x6065AF60   size: 104   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_6065AF60(int a1)
{
  int v1; // r3
  int v2; // r2
  int v3; // r1
  int v4; // r0
  _DWORD v5[5]; // [sp+4h] [bp-14h] BYREF

  v1 = FIELD_S8(a1, 6169);
  if ( v1 >= 0 )
  {
    v2 = FIELD_U32(a1, 6112);
    v3 = FIELD_U32(a1, 6116);
    v4 = FIELD_U32(a1, 116);
    v5[0] = v2;
    v5[1] = v3;
    v5[2] = v4;
    sub_60022540(dword_60C7F52C, (int)v5, 4u, v1, 1);
  }
}
