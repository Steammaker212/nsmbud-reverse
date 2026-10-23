/* sub_608C1700
 * address: 0x608C1700   size: 64   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608C1700(int a1, int a2)
{
  int v3; // r0
  int v4; // r1
  _BYTE v6[16]; // [sp+4h] [bp-2Ch] BYREF
  int v7; // [sp+14h] [bp-1Ch]

  v3 = sub_608A9E10(a2, (int)v6);
  v4 = v7;
  if ( !v3 )
    v4 = 0;
  return 10496 * FIELD_U32(a1, 96) * v4;
}
