/* sub_6048A51C
 * address: 0x6048A51C   size: 332   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6048A51C(int a1)
{
  int result; // r0
  int v3; // r1
  int v4; // r2
  int v5; // r8
  int v6; // r7
  int v7; // r0
  int v8; // r5
  int v9; // r0
  int v10; // r1
  int i; // r2
  unsigned int v12; // r0
  unsigned int v13; // r0
  unsigned int v14; // r0
  int v15; // [sp+0h] [bp-48h]
  int v16; // [sp+4h] [bp-44h]
  int v17; // [sp+8h] [bp-40h]
  unsigned int v18; // [sp+Ch] [bp-3Ch]
  _DWORD v19[14]; // [sp+10h] [bp-38h] BYREF

  memset(v19, 0, 16);
  result = a1 + 3820;
  v3 = FIELD_U32(a1, 3824);
  if ( v3 != result )
  {
    v4 = FIELD_U32(a1, 3832);
    v5 = 0;
    v6 = v3 - v4;
    v15 = result - v4;
    v16 = v4;
    do
    {
      v7 = 0;
      v17 = v3;
      do
      {
        v8 = v7;
        v18 = v7;
        v9 = sub_60492030();
        v10 = FIELD_U32(v6, 88);
        if ( v9 == v10 )
        {
LABEL_12:
          v12 = v18;
          if ( v18 >= 4 )
            v12 = 0;
          if ( v19[v12] == v18 )
          {
            v13 = v18;
            if ( v18 >= 4 )
              v13 = 0;
            *(_DWORD *)(a1 + 4 * v13 + 6260) = v5;
          }
          v14 = v18;
          if ( v18 >= 4 )
            v14 = 0;
          ++v19[v14];
        }
        else
        {
          for ( i = 1; *(unsigned __int8 *)(v9 + i - 1) == *(unsigned __int8 *)(v10 + i - 1); i += 2 )
          {
            if ( !*(_BYTE *)(v9 + i - 1) )
              goto LABEL_12;
            if ( i > 0x80000 || *(unsigned __int8 *)(v9 + i) != *(unsigned __int8 *)(v10 + i) )
              break;
            if ( !*(_BYTE *)(v9 + i) )
              goto LABEL_12;
          }
        }
        v7 = v8 + 1;
        if ( v8 > 3 )
          v7 = 4;
      }
      while ( v7 != 4 );
      ++v5;
      v3 = FIELD_U32(v17, 4);
      v6 = v3 - v16;
      result = v15;
    }
    while ( v3 - v16 != v15 );
  }
  return result;
}
