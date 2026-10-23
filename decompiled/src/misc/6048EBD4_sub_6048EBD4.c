/* sub_6048EBD4
 * address: 0x6048EBD4   size: 640   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6048EBD4(int a1, int a2)
{
  int v4; // r9
  _DWORD *v5; // r8
  unsigned int v6; // r0
  int v7; // r10
  unsigned int v8; // r0
  unsigned int v9; // r0
  int result; // r0
  _DWORD v11[24]; // [sp+0h] [bp-E8h] BYREF
  _DWORD v12[24]; // [sp+60h] [bp-88h] BYREF
  unsigned int v13; // [sp+C0h] [bp-28h]

  v4 = 0;
  v5 = (_DWORD *)(a1 + 14228);
  do
  {
    v13 = v4;
    if ( v4 == *v5 )
    {
      v6 = v13;
      v7 = 0;
      if ( v13 >= 4 )
        v6 = 0;
      qmemcpy(v12, (const void *)(a1 + 96 * v6 + 5876), sizeof(v12));
      v8 = v13;
      if ( v13 >= 4 )
        v8 = 0;
      qmemcpy(v11, (const void *)(a1 + 96 * v8 + 6304), sizeof(v11));
      do
      {
        if ( v12[v7] != a2 )
          *(_BYTE *)(v11[v7] + 64) &= ~1u;
        ++v7;
      }
      while ( v7 != 24 );
    }
    else
    {
      v9 = v13;
      if ( v13 >= 4 )
        v9 = 0;
      qmemcpy(v12, (const void *)(a1 + 96 * v9 + 6304), sizeof(v12));
      *(_BYTE *)(v12[0] + 64) &= ~1u;
      *(_BYTE *)(v12[1] + 64) &= ~1u;
      *(_BYTE *)(v12[2] + 64) &= ~1u;
      *(_BYTE *)(v12[3] + 64) &= ~1u;
      *(_BYTE *)(v12[4] + 64) &= ~1u;
      *(_BYTE *)(v12[5] + 64) &= ~1u;
      *(_BYTE *)(v12[6] + 64) &= ~1u;
      *(_BYTE *)(v12[7] + 64) &= ~1u;
      *(_BYTE *)(v12[8] + 64) &= ~1u;
      *(_BYTE *)(v12[9] + 64) &= ~1u;
      *(_BYTE *)(v12[10] + 64) &= ~1u;
      *(_BYTE *)(v12[11] + 64) &= ~1u;
      *(_BYTE *)(v12[12] + 64) &= ~1u;
      *(_BYTE *)(v12[13] + 64) &= ~1u;
      *(_BYTE *)(v12[14] + 64) &= ~1u;
      *(_BYTE *)(v12[15] + 64) &= ~1u;
      *(_BYTE *)(v12[16] + 64) &= ~1u;
      *(_BYTE *)(v12[17] + 64) &= ~1u;
      *(_BYTE *)(v12[18] + 64) &= ~1u;
      *(_BYTE *)(v12[19] + 64) &= ~1u;
      *(_BYTE *)(v12[20] + 64) &= ~1u;
      *(_BYTE *)(v12[21] + 64) &= ~1u;
      *(_BYTE *)(v12[22] + 64) &= ~1u;
      *(_BYTE *)(v12[23] + 64) &= ~1u;
    }
    result = v4 + 1;
    if ( v4 > 3 )
      result = 4;
    v4 = result;
  }
  while ( result != 4 );
  return result;
}
