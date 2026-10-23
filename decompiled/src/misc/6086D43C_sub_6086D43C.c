/* sub_6086D43C
 * address: 0x6086D43C   size: 276   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6086D43C(int a1, _DWORD *a2)
{
  int v4; // r9
  int v5; // r0
  unsigned __int16 v6; // r0
  int v7; // r4
  int v8; // r6
  int v9; // r7
  int v10; // r0
  unsigned __int16 v11; // r0
  int v12; // r4
  int v13; // r6
  unsigned __int8 *v14; // r7
  int v15; // r0

  v4 = 0;
  v5 = FIELD_U32(a1, 28);
  if ( v5 && (FIELD_U8(v5, 4) & 1) == 0 )
    v4 = sub_6087D7B0(v5, a2);
  v6 = FIELD_U16(a1, 24);
  if ( v6 )
  {
    v7 = 0;
    v8 = 0;
    do
    {
      v9 = FIELD_U32(a1, 32) + v7;
      if ( (FIELD_U8(v9, 4) & 1) == 0 )
      {
        v10 = sub_608754DC(FIELD_U32(a1, 32) + v7, a2);
        v4 = ((v4 + v10 - 1) & -v10) + sub_6087552C(v9, a2);
        v6 = FIELD_U16(a1, 24);
      }
      ++v8;
      v7 += 56;
    }
    while ( v8 < v6 );
  }
  v11 = FIELD_U16(a1, 26);
  if ( v11 )
  {
    v12 = 0;
    v13 = 0;
    do
    {
      v14 = (unsigned __int8 *)(FIELD_U32(a1, 36) + v12);
      if ( (v14[4] & 1) == 0 )
      {
        v15 = sub_6086C280(FIELD_U32(a1, 36) + v12, a2);
        v4 = ((v4 + v15 - 1) & -v15) + sub_6086C2D8(v14, a2);
        v11 = FIELD_U16(a1, 26);
      }
      ++v13;
      v12 += 72;
    }
    while ( v13 < v11 );
  }
  return v4;
}
