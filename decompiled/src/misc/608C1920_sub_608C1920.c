/* sub_608C1920
 * address: 0x608C1920   size: 140   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned int __fastcall sub_608C1920(int a1, int a2)
{
  int v4; // r6
  int v5; // r0
  int v6; // r2
  _BYTE v8[4]; // [sp+0h] [bp-18h] BYREF
  int v9; // [sp+4h] [bp-14h]

  v4 = FIELD_U32(a1, 8);
  v8[0] = byte_60CC8D12;
  v8[1] = byte_60CC8D13;
  v9 = dword_60C5AF24;
  v5 = sub_608B0CEC((int)v8);
  v6 = 2 * v5 + 57112;
  if ( !v5 )
    v6 = 57088;
  return ((v6 * v4 + 4095) & 0xFFFFF000) + ((a2 + 10048 * FIELD_U32(a1, 8) - 1) & -a2);
}
