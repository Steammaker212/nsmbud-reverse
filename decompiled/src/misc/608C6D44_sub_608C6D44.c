/* sub_608C6D44
 * address: 0x608C6D44   size: 284   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608C6D44(_DWORD *a1, _BYTE *a2, int a3, int a4, _DWORD *a5)
{
  int v8; // r0
  _DWORD *v9; // r4
  int v10; // r9
  int v11; // r5
  bool v12; // zf
  int v13; // r7
  int v15[3]; // [sp+0h] [bp-48h] BYREF
  char v16; // [sp+Ch] [bp-3Ch]
  int v17; // [sp+10h] [bp-38h] BYREF
  char v18; // [sp+18h] [bp-30h]
  _BYTE v19[44]; // [sp+1Ch] [bp-2Ch] BYREF

  *a1 = -1;
  a1[1] = 0;
  *a2 = 0;
  v8 = sub_608B6BA8((int)v19, a3);
  v9 = (_DWORD *)sub_608B6E78(v8);
  if ( !v9 )
    return -2;
  if ( !*v9 )
    return 1;
  v10 = sub_608B4094(a5, v9[1]);
  if ( !v10 )
    return -1;
  v11 = 0;
  v17 = -1;
  v18 = 0;
  sub_608A9F2C(a4, v9[1], (int)&v17);
  *a1 = v9[1];
  a1[1] = v10;
  v12 = v18 == 0;
  *a2 = v18;
  if ( !v12 )
  {
    sub_608B4894(v15, v10, 1);
    if ( *v9 )
    {
      v13 = 0;
      while ( v16 && sub_608B4A8C((int)v15, v9[2]) )
      {
        if ( (unsigned int)++v13 >= *v9 )
          return v11;
      }
      return 2;
    }
  }
  return v11;
}
