/* sub_608CD158
 * address: 0x608CD158   size: 132   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608CD158(int a1, int a2)
{
  int v4; // r6
  int v5; // r0
  int v6; // r3
  _BYTE v8[4]; // [sp+0h] [bp-18h] BYREF
  int v9; // [sp+4h] [bp-14h]

  v4 = FIELD_U32(a1, 20);
  v8[0] = byte_60CC8D12;
  v8[1] = byte_60CC8D13;
  v9 = dword_60C5AF24;
  v5 = sub_608B0CEC((int)v8);
  v6 = 2 * v5 + 792;
  if ( !v5 )
    v6 = 768;
  return ((a2 - 1 + v6 * v4) & -a2) + ((a2 - 1 + 792 * FIELD_U32(a1, 20)) & -a2);
}
