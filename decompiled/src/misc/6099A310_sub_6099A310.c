/* sub_6099A310
 * address: 0x6099A310   size: 324   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6099A310(_DWORD *a1, unsigned int a2)
{
  int v2; // r2
  int v3; // lr
  unsigned int v4; // r2
  int v5; // r3
  int v7; // lr
  int v8; // r4
  _DWORD *v9; // r5
  int v10; // r0
  unsigned int v11; // r0
  unsigned int v12; // r2
  int v13; // r4
  unsigned int *v14; // r3

  v2 = *(_DWORD *)(a1[4] + 20);
  if ( !v2 )
    return 0xFFFF;
  v3 = a1[3];
  while ( 1 )
  {
    v5 = v3 + v2;
    v4 = *(_DWORD *)(v3 + v2);
    if ( v4 <= a2 && FIELD_U32(v5, 4) >= a2 )
      break;
    v2 = FIELD_U32(v5, 12);
    if ( !v2 )
      return 0xFFFF;
  }
  v7 = a1[21];
  if ( v7 )
  {
    if ( v7 < 1 )
      return 0xFFFF;
    v8 = 0;
    while ( 1 )
    {
      v9 = &a1[v8];
      if ( v9[22] <= a2 && v9[26] >= a2 )
        break;
      if ( ++v8 >= v7 )
        return 0xFFFF;
    }
  }
  v10 = FIELD_U16(v5, 8);
  if ( v10 == 2 )
  {
    v11 = v5 + 20;
    v12 = v5 + 20 + 8 * FIELD_U16(v5, 16) - 8;
    if ( v5 + 20 > v12 )
      return 0xFFFF;
    while ( 1 )
    {
      while ( 1 )
      {
        v13 = (int)(((int)(v12 - v11) >> 3) + ((v12 - v11) >> 31)) >> 1;
        v14 = (unsigned int *)(v11 + 8 * v13);
        if ( *v14 >= a2 )
          break;
        v11 = (unsigned int)(v14 + 2);
        if ( (unsigned int)(v14 + 2) > v12 )
          return 0xFFFF;
      }
      if ( *v14 <= a2 )
        break;
      v12 = (unsigned int)(v14 - 2);
      if ( v11 > (unsigned int)(v14 - 2) )
        return 0xFFFF;
    }
    return *(unsigned __int16 *)(v11 + 8 * v13 + 4);
  }
  else
  {
    if ( v10 != 1 )
    {
      if ( !FIELD_U16(v5, 8) )
        return (unsigned __int16)(a2 - v4 + FIELD_U16(v5, 16));
      return 0xFFFF;
    }
    return *(unsigned __int16 *)(v5 + 2 * (a2 - v4) + 16);
  }
}
