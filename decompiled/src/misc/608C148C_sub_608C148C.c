/* sub_608C148C
 * address: 0x608C148C   size: 104   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned int __fastcall sub_608C148C(int a1)
{
  int v2; // r0
  int v3; // r1
  _BYTE v5[4]; // [sp+0h] [bp-10h] BYREF
  int v6; // [sp+4h] [bp-Ch]

  v5[0] = byte_60CC8D12;
  v5[1] = byte_60CC8D13;
  v6 = dword_60C5AF24;
  v2 = sub_608B0CEC((int)v5);
  v3 = 2 * v2 + 57112;
  if ( !v2 )
    v3 = 57088;
  return (v3 * a1 + 63) & 0xFFFFFFC0;
}
