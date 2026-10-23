/* sub_608E3184
 * address: 0x608E3184   size: 364   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608E3184(int a1, unsigned int *a2, int a3, int a4, unsigned int a5)
{
  int v6; // r3
  int v7; // r4
  unsigned int v8; // r10
  int v9; // r0
  int v10; // r11
  _BYTE *v11; // r5
  signed int v12; // r8
  bool v13; // cc
  signed int v14; // r0
  _DWORD *v18; // [sp+14h] [bp-344h]
  __int64 v19; // [sp+18h] [bp-340h] BYREF
  _BYTE v20[824]; // [sp+20h] [bp-338h] BYREF

  v18 = (_DWORD *)sub_608E78F8(a1, a3);
  if ( a5 )
  {
    v7 = 0;
    v8 = 0;
    while ( 1 )
    {
      v19 = 0;
      v9 = nn__fs__ReadDirectory(&v19, v20, *v18, v6, 1, 0);
      FIELD_U32(a1, 80) = v9;
      if ( v9 )
        break;
      if ( v19 != 1 )
      {
        v7 = 1;
        if ( a2 )
          *a2 = v8;
        return v7;
      }
      v10 = a4 + 272 * v8;
      v11 = *(_BYTE **)(v10 + 4);
      if ( v11 != v20 )
      {
        v12 = 0;
        while ( v20[v12] )
        {
          if ( !v20[v12 + 1] )
          {
            ++v12;
            break;
          }
          if ( !v20[v12 + 2] )
          {
            v12 += 2;
            break;
          }
          v13 = v12 + 2 < 0x80000;
          v12 += 3;
          if ( !v13 )
          {
            v12 = 0;
            break;
          }
        }
        v14 = FIELD_U32(v10, 8);
        if ( v12 >= v14 )
          v12 = v14 - 1;
        qmemcpy(*(void **)(v10 + 4), v20, v12);
        v11[v12] = 0;
      }
      ++v8;
      FIELD_U8(v10, 268) = v20[772] == 0;
      if ( v8 >= a5 )
        goto LABEL_18;
    }
  }
  else
  {
LABEL_18:
    v7 = 1;
    if ( a2 )
      *a2 = a5;
  }
  return v7;
}
