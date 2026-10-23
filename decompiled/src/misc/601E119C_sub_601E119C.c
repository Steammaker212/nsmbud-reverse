/* sub_601E119C
 * address: 0x601E119C   size: 356   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_601E119C(int a1, unsigned int a2)
{
  int v4; // r10
  int v5; // r6
  int v6; // r0
  int v7; // r5
  _DWORD *v8; // r11
  int v9; // r0
  int v10; // r0
  signed int v11; // r6
  char v12; // r4
  int v13; // r7
  int v14; // r0
  char v15; // r1
  int v16; // r0
  int v18; // [sp+0h] [bp-30h] BYREF
  int v19; // [sp+4h] [bp-2Ch]
  unsigned int v20; // [sp+8h] [bp-28h]

  v4 = sub_601DA824(a1);
  v5 = 0;
  if ( v4 )
  {
    v6 = sub_601A4454(dword_60C89E18, *(_DWORD *)a1, FIELD_U32(a1, 4));
    v7 = sub_60178780(v6, FIELD_U32(a1, 8));
    v8 = (_DWORD *)sub_60178694(v7, a2);
    if ( v8 )
    {
      v18 = -1;
      v19 = -1;
      v20 = -1;
      while ( 1 )
      {
        v18 = v8[21];
        v19 = v8[22];
        v20 = v8[24];
        if ( (sub_601DA824((int)&v18) & v4) != 0 )
          break;
        v9 = sub_601A4454(dword_60C89E18, v18, v19);
        v10 = sub_60178780(v9, v20);
        v5 = 0;
        if ( !sub_60178798(v10, &v18) || !sub_6019A214(v8 + 1) )
          return (_DWORD *)v5;
        v11 = 0;
        v12 = 0;
        v13 = v7;
        do
        {
          v14 = sub_60178694((int)v8, v11);
          v7 = (int)v8;
          v15 = 0;
          if ( v14 == 0 || v14 == v13 )
            v7 = v13;
          else
            v8 = (_DWORD *)v14;
          if ( v14 != v13 )
            v15 = 1;
          v16 = (v14 != 0) & (unsigned __int8)v15;
          v12 |= v16;
          if ( v16 )
            break;
          ++v11;
          v13 = v7;
        }
        while ( v11 < 6 );
        if ( (v12 & 1) == 0 )
          return 0;
      }
      return v8;
    }
  }
  return (_DWORD *)v5;
}
