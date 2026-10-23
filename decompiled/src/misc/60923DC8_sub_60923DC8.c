/* sub_60923DC8
 * address: 0x60923DC8   size: 344   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60923DC8(_DWORD *a1, unsigned int a2, _DWORD *a3)
{
  unsigned __int16 *v5; // r3
  unsigned int v6; // r2
  int v7; // r4
  unsigned int v8; // r6
  int result; // r0
  int v10; // r5
  int v11; // r0
  _DWORD *v12; // r7
  int v13; // r11
  int v14; // r0
  int v15; // r1
  int i; // r2
  unsigned __int16 *v17; // r1

  v5 = (unsigned __int16 *)a1[4];
  v6 = a1[5];
  if ( a1[3] > a2 )
    v5 += 2 * a2;
  v7 = *v5;
  v8 = v5[1] + v7;
  result = -1;
  if ( v6 < v8 )
    v8 = a1[5];
  if ( v6 < v7 )
    v7 = a1[5];
  if ( v7 != v8 )
  {
    v10 = a1[6];
    while ( 1 )
    {
      v11 = *(_DWORD *)(v10 + 4 * v7);
      if ( v11 )
      {
        v12 = (_DWORD *)(*(int (__fastcall **)(int))(*(_DWORD *)v11 + 64))(v11);
        (*(void (__fastcall **)(_DWORD *))(*v12 + 12))(v12);
        (*(void (__fastcall **)(_DWORD *))(*v12 + 12))(v12);
        v13 = v12[1];
        (*(void (__fastcall **)(_DWORD *))(*a3 + 12))(a3);
        v14 = a3[1];
        if ( v13 == v14 )
        {
LABEL_21:
          result = -1;
          if ( v7 >= 0 )
          {
            v17 = (unsigned __int16 *)a1[4];
            if ( a1[3] > a2 )
              v17 += 2 * a2;
            return v7 - *v17;
          }
          return result;
        }
        v15 = v12[1];
        for ( i = 1; *(unsigned __int8 *)(v15 + i - 1) == *(unsigned __int8 *)(v14 + i - 1); i += 2 )
        {
          if ( !*(_BYTE *)(v15 + i - 1) )
            goto LABEL_21;
          if ( i > 0x80000 || *(unsigned __int8 *)(v15 + i) != *(unsigned __int8 *)(v14 + i) )
            break;
          if ( !*(_BYTE *)(v15 + i) )
            goto LABEL_21;
        }
      }
      if ( ++v7 == v8 )
        return -1;
    }
  }
  return result;
}
