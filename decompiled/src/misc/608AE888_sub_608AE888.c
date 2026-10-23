/* sub_608AE888
 * address: 0x608AE888   size: 112   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608AE888(int a1, int a2)
{
  int v2; // r5
  int v4; // r0
  int v5; // r1
  _BYTE v7[4]; // [sp+0h] [bp-18h] BYREF
  int v8; // [sp+4h] [bp-14h]

  v2 = FIELD_U32(a1, 20);
  v7[0] = byte_60CC8D12;
  v7[1] = byte_60CC8D13;
  v8 = dword_60C5AF24;
  v4 = sub_608B0CEC(v7);
  v5 = 2 * v4 + 1992;
  if ( !v4 )
    v5 = 1968;
  return (a2 + v5 * v2 - 1) & -a2;
}
