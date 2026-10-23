/* sub_608B4C78
 * address: 0x608B4C78   size: 364   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608B4C78(_DWORD *a1, int a2)
{
  int v3; // r0
  unsigned __int8 *v4; // r0
  unsigned int v5; // r2
  int v6; // r10
  int v7; // r0
  int v8; // r2
  _DWORD *v9; // r3
  _WORD *v10; // r5
  unsigned int i; // r7
  int v12; // r6
  _WORD *v13; // r4
  int v14; // r4

  v3 = *((char *)a1 + 16);
  if ( v3 == 1 )
  {
    sub_608B4E40(a1 + 3);
  }
  else if ( !v3 )
  {
    v4 = (unsigned __int8 *)a1[1];
    v5 = *v4;
    v6 = *((_DWORD *)v4 + 5);
    if ( v5 >= 2 )
      v5 = 2;
    *(_DWORD *)a2 = v5;
    FIELD_U32(a2, 8) = v6;
    FIELD_U32(a2, 12) = *(_DWORD *)(a1[1] + 4);
    v7 = *(unsigned __int8 *)(a1[1] + 1);
    if ( v7 != 1 )
      LOBYTE(v7) = 0;
    FIELD_U8(a2, 4) = v7;
    FIELD_U32(a2, 16) = *(_DWORD *)(a1[1] + 8);
    FIELD_U32(a2, 20) = *(_DWORD *)(a1[1] + 12);
    FIELD_U32(a2, 28) = *(_DWORD *)(*a1 + 12) - 32;
    v8 = a1[1];
    v9 = (_DWORD *)(v8 + 8);
    if ( *(_DWORD *)(*a1 + 8) >> 9 > 0x80u )
      v9 = (_DWORD *)(v8 + 16);
    FIELD_U32(a2, 24) = *v9;
    if ( v6 >= 1 )
    {
      v10 = (_WORD *)(a2 + 40);
      for ( i = 0; i != v6; ++i )
      {
        if ( i <= 1 )
        {
          v12 = sub_608D4C8C(a1[1], i);
          if ( FIELD_U32(v12, 12) )
          {
            v13 = (_WORD *)sub_608D4CC0(v12);
            qmemcpy(v10, v13, 0x26u);
            v10[20] = v13[20];
            v10[19] = v13[19];
            v10[21] = v13[21];
          }
          *((_DWORD *)v10 - 2) = sub_608D4CB4(v12, a1[2]);
          v14 = sub_608D4C8C(a1[1], v6 - 1);
          *((_DWORD *)v10 - 1) = *(_DWORD *)(sub_608D4C34(*a1) + 4) - 8 - FIELD_U32(v14, 4);
        }
        v10 += 26;
      }
    }
  }
  return 1;
}
