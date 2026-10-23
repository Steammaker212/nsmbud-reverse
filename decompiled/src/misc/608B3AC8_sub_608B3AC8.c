/* sub_608B3AC8
 * address: 0x608B3AC8   size: 692   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608B3AC8(int *a1, int a2, int a3, int a4)
{
  unsigned int v7; // r5
  unsigned int v8; // r6
  int v9; // r7
  int v10; // r5
  unsigned int i; // r10
  int v12; // r0
  _DWORD *v13; // r0
  bool v14; // zf
  int v15; // r0
  unsigned int j; // r11
  unsigned int v17; // r6
  unsigned int v18; // r4
  unsigned int v20; // [sp+8h] [bp-48h] BYREF
  char v21; // [sp+Ch] [bp-44h]
  _DWORD v22[3]; // [sp+10h] [bp-40h] BYREF
  unsigned int v23; // [sp+1Ch] [bp-34h] BYREF
  unsigned int v24; // [sp+20h] [bp-30h]
  int v25; // [sp+24h] [bp-2Ch]
  int v26; // [sp+28h] [bp-28h] BYREF

  sub_608B0B70(v22, a2);
  v7 = *(_DWORD *)v22[0];
  if ( *(_DWORD *)v22[0] )
  {
    v8 = 0;
    while ( sub_608B0C4C((int)v22, &v23, v8) == 1 )
    {
      if ( v24 )
      {
        (*(void (__fastcall **)(int *, unsigned int))(*a1 + 8))(a1, v23);
      }
      else if ( !v8 )
      {
        v17 = sub_608B0CA4((int)v22);
        v10 = 1;
        if ( !v17 )
          return v10;
        v18 = 0;
        while ( sub_608B0CB8((int)v22, &v23, v18) != 1 || sub_608B2C3C((int)a1, v23, a3, v24, a4) )
        {
          if ( ++v18 >= v17 )
            return 1;
        }
        return 0;
      }
      if ( ++v8 >= v7 )
        goto LABEL_8;
    }
    return 0;
  }
  else
  {
LABEL_8:
    v9 = sub_608B0CA4((int)v22);
    v10 = 1;
    if ( v9 )
    {
      for ( i = 0; i != v9; ++i )
      {
        if ( sub_608B0CB8((int)v22, &v20, i) == 1 && (v21 & 8) != 0 )
        {
          if ( HIBYTE(v20) == 3 )
          {
            if ( v20 != -1 )
            {
              v26 = -1;
              if ( sub_608A9EC8(a1[1], (int)&v26, v20) == 1 )
              {
                if ( (*(int (__fastcall **)(int *, int))(*a1 + 16))(a1, v26) )
                {
                  v12 = sub_608B6BA8(&v23);
                  v13 = (_DWORD *)sub_608B6E78(v12);
                  v14 = v13 == 0;
                  if ( v13 )
                    v14 = *v13 == 0;
                  if ( !v14 )
                    sub_608B3F18(a1, v13[1], a3);
                }
              }
            }
          }
          else if ( HIBYTE(v20) == 2 )
          {
            v23 = -1;
            v24 = -1;
            v25 = 0;
            if ( sub_608A9F88(a1[1], v20, (int)&v23) == 1 && v23 != -1 )
            {
              v15 = sub_608A9B50(a1[1], v23);
              if ( v15 == 3 )
              {
                sub_608B3E5C(a1, v23, a3);
              }
              else if ( v15 == 1 )
              {
                for ( j = v23; j <= v24; ++j )
                  sub_608B3D7C(a1, j, a3);
              }
              v10 = 1;
            }
          }
          else if ( HIBYTE(v20) == 1 && sub_608A9B50(a1[1], v20) == 1 )
          {
            sub_608B3D7C(a1, v20, a3);
          }
        }
      }
    }
  }
  return v10;
}
