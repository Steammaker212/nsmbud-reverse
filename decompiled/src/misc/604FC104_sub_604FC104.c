/* sub_604FC104
 * address: 0x604FC104   size: 204   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604FC104(int a1)
{
  int v1; // r4
  int v2; // r12
  int v3; // r1
  unsigned int v4; // r3
  unsigned int v5; // r3
  unsigned int v6; // r1
  unsigned int v7; // r2

  v1 = a1;
  v2 = dword_60C99E1C;
  if ( dword_60C99E1C )
  {
    v3 = FIELD_U32(a1, 40080);
    v4 = 9 * v3 + FIELD_U32(a1, 40088);
    if ( v4 <= 0x35 )
    {
      v5 = *(_DWORD *)(dword_60C99E1C + 4 * v4 + 16);
      if ( v5 <= 0x35 )
      {
        *(_DWORD *)(dword_60C99E1C + 4424 * v5 + 232) = FIELD_U32(a1, 40076);
        v3 = FIELD_U32(a1, 40080);
      }
    }
    v6 = 9 * v3 + FIELD_U32(a1, 36536);
    if ( v6 <= 0x35 )
    {
      v7 = *(_DWORD *)(v2 + 4 * v6 + 16);
      if ( v7 <= 0x35 )
        *(_BYTE *)(v2 + 4424 * v7 + 244) = 1;
    }
    if ( v6 < 0x36 )
      a1 += v6;
    FIELD_U8(a1, 40014) = 1;
  }
  sub_60502694(v1 + 35508);
  FIELD_U8(v1, 40097) = 1;
  return 40097;
}
