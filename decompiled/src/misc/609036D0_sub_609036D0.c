/* sub_609036D0
 * address: 0x609036D0   size: 488   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned int __fastcall sub_609036D0(_DWORD *a1, int *a2, int a3, unsigned int a4)
{
  unsigned int i; // r4
  signed int v8; // r5
  signed int v9; // r0
  int v10; // r0
  int v11; // r6
  unsigned int v12; // r0
  unsigned int v13; // r5
  bool v14; // cf
  int v15; // r0
  int v16; // r1
  int v17; // r0
  int v18; // r0
  _BYTE *v19; // r1
  int v20; // r0
  _BYTE *v21; // r6
  bool v22; // cc

  for ( i = 0; ; ++i )
  {
    v11 = *a2;
    v12 = ((int (__fastcall *)(_DWORD))off_60C5CAFC[(a1[12] ^ 1) + 2])(*(unsigned __int16 *)(a1[7] + 6));
    v13 = *a2 + i;
    v14 = i >= a4;
    if ( i < a4 )
      v14 = v11 + i >= v12;
    if ( v14 )
      break;
    v15 = ((int (__fastcall *)(_DWORD))off_60C5CAFC[(a1[12] ^ 1) + 4])(*(_DWORD *)(a1[10] + 16 * v13 + 4));
    if ( v15 )
    {
      v16 = a1[8];
      v17 = v15 & 0xFFFFFF;
      if ( (unsigned int)(v16 + v17) <= a1[11] )
      {
        v19 = (_BYTE *)(v16 + 4 * v17);
        v20 = a3 + 272 * i;
        v21 = *(_BYTE **)(v20 + 4);
        if ( v21 != v19 )
        {
          v8 = 0;
          while ( v19[v8] )
          {
            if ( !v19[v8 + 1] )
            {
              ++v8;
              break;
            }
            if ( !v19[v8 + 2] )
            {
              v8 += 2;
              break;
            }
            v22 = v8 + 2 < 0x80000;
            v8 += 3;
            if ( !v22 )
            {
              v8 = 0;
              break;
            }
          }
          v9 = FIELD_U32(v20, 8);
          if ( v8 >= v9 )
            v8 = v9 - 1;
          qmemcpy(v21, v19, v8);
          v21[v8] = 0;
        }
      }
      else
      {
        **(_BYTE **)(a3 + 272 * i + 4) = 0;
      }
    }
    else
    {
      v18 = ((int (__fastcall *)(_DWORD))off_60C5CAFC[(a1[12] ^ 1) + 4])(*(_DWORD *)(a1[10] + 16 * v13));
      sub_608FDDF4(a3 + 272 * i, "%08x", v18);
    }
    v10 = 17 * i;
    *(_BYTE *)(a3 + 16 * v10 + 268) = 0;
  }
  *a2 = v13;
  return i;
}
