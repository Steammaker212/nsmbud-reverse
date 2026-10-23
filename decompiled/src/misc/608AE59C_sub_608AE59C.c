/* sub_608AE59C
 * address: 0x608AE59C   size: 184   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_608AE59C(int a1, int a2, _DWORD *a3, int a4)
{
  int v8; // r6
  int v9; // r0
  int v10; // r1
  unsigned int v11; // r4
  int v12; // r0
  _BYTE v14[4]; // [sp+0h] [bp-28h] BYREF
  int v15; // [sp+4h] [bp-24h]

  v8 = 0;
  if ( (*(_BYTE *)a3 & 0x3F) == 0 )
  {
    v14[0] = byte_60CC8D12;
    v14[1] = byte_60CC8D13;
    v15 = dword_60C5AF24;
    v9 = sub_608B0CEC(v14);
    v10 = 2 * v9 + 1992;
    if ( !v9 )
      v10 = 1968;
    v11 = *a3 + ((v10 * a2 + 63) & 0xFFFFFFC0);
    if ( (int)(v11 - a4) < 1 )
    {
      v12 = sub_608AE660(a1);
      *a3 = v11;
      return v12 == a2;
    }
  }
  return v8;
}
