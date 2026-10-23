/* sub_609AD21C
 * address: 0x609AD21C   size: 416   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_609AD21C(int a1, int a2, int a3)
{
  unsigned int v3; // r1
  _BYTE *v5; // r0
  unsigned int v6; // r2
  unsigned int v7; // r2
  unsigned int v8; // r3
  unsigned int v9; // r2
  int v10; // r7
  int v11; // r2
  int v12; // r3
  int v13; // r6
  int v14; // r0
  _DWORD v15[36]; // [sp+0h] [bp-90h] BYREF

  v3 = FIELD_U32(a3, 8);
  v5 = (_BYTE *)(a1 + 576);
  if ( (*(_BYTE *)a3 & 2) != 0
    || (v6 = FIELD_U32(a3, 12), __PAIR64__(v6, v3) >= (unsigned __int64)(unsigned int)v5 + 1)
    || __PAIR64__(v6, v3) < (unsigned int)v5 )
  {
    if ( (v7 = a1 + 24, a1 + 12 <= v3) && v7 > v3
      || (v8 = a1 + 36, v7 <= v3) && v8 > v3
      || (v9 = a1 + 48, v8 <= v3) && v9 > v3
      || v9 <= v3 && a1 + 60 > v3 )
    {
      if ( *v5 )
      {
        v10 = FIELD_U8(a1, 23);
        if ( !FIELD_U8(a1, 23) )
          goto LABEL_20;
        v11 = 0;
        do
        {
          v12 = v11 + 2;
          if ( (unsigned int)(v11 + 2) >= 0x80 )
            v12 = 0;
          v15[v11++] = *(_DWORD *)(a1 + 4 * v12 + 60);
        }
        while ( v10 != v11 );
        if ( v10 )
        {
          v13 = FIELD_U8(a1, 20);
          FIELD_U8(a1, 32) = v13;
          FIELD_U8(a1, 35) = v10;
          FIELD_U32(a1, 188) = v10;
          FIELD_U32(a1, 192) = v13;
          qmemcpy((void *)(a1 + 196), v15, 4 * v10);
          FIELD_U8(a1, 44) = v13;
          FIELD_U8(a1, 47) = v10;
          FIELD_U32(a1, 316) = v10;
          FIELD_U32(a1, 320) = v13;
          qmemcpy((void *)(a1 + 324), v15, 4 * v10);
          FIELD_U8(a1, 56) = v13;
          FIELD_U8(a1, 59) = v10;
          FIELD_U32(a1, 444) = v10;
          FIELD_U32(a1, 448) = v13;
          qmemcpy((void *)(a1 + 452), v15, 4 * v10);
        }
        else
        {
LABEL_20:
          v14 = FIELD_U8(a1, 20);
          FIELD_U8(a1, 32) = v14;
          FIELD_U8(a1, 35) = 0;
          FIELD_U32(a1, 192) = v14;
          FIELD_U32(a1, 188) = v10;
          FIELD_U8(a1, 44) = v14;
          FIELD_U8(a1, 47) = 0;
          FIELD_U32(a1, 320) = v14;
          FIELD_U32(a1, 316) = v10;
          FIELD_U8(a1, 56) = v14;
          FIELD_U8(a1, 59) = 0;
          FIELD_U32(a1, 444) = v10;
          FIELD_U32(a1, 448) = v14;
        }
      }
    }
  }
}
