/* sub_6086D358
 * address: 0x6086D358   size: 228   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned int __fastcall sub_6086D358(int a1, _DWORD *a2)
{
  unsigned int v4; // r6
  int v5; // r0
  unsigned __int16 v6; // r1
  int v7; // r7
  int v8; // r4
  unsigned int v9; // r0
  unsigned __int16 v10; // r1
  int v11; // r7
  int v12; // r4
  int v13; // r0
  unsigned int v14; // r0

  v4 = 1;
  v5 = FIELD_U32(a1, 28);
  if ( v5 )
  {
    if ( (FIELD_U8(v5, 4) & 1) == 0 )
    {
      v4 = sub_6087D748(v5, a2);
      if ( v4 <= 1 )
        v4 = 1;
    }
  }
  v6 = FIELD_U16(a1, 24);
  if ( v6 )
  {
    v7 = 0;
    v8 = 0;
    do
    {
      if ( (*(_BYTE *)(FIELD_U32(a1, 32) + v7 + 4) & 1) == 0 )
      {
        v9 = sub_608754DC();
        v6 = FIELD_U16(a1, 24);
        if ( v4 < v9 )
          v4 = v9;
      }
      ++v8;
      v7 += 56;
    }
    while ( v8 < v6 );
  }
  v10 = FIELD_U16(a1, 26);
  if ( v10 )
  {
    v11 = 0;
    v12 = 0;
    do
    {
      v13 = FIELD_U32(a1, 36) + v11;
      if ( (FIELD_U8(v13, 4) & 1) == 0 )
      {
        v14 = sub_6086C280(v13, a2);
        v10 = FIELD_U16(a1, 26);
        if ( v4 < v14 )
          v4 = v14;
      }
      ++v12;
      v11 += 72;
    }
    while ( v12 < v10 );
  }
  return v4;
}
