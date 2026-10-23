/* sub_608B329C
 * address: 0x608B329C   size: 460   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608B329C(int *a1, unsigned int a2, int a3, char a4, int a5)
{
  int v8; // r4
  int v9; // r10
  int v10; // r0
  _DWORD *v11; // r7
  int v12; // r9
  _DWORD *v13; // r0
  unsigned int v14; // r4
  int v15; // r6
  int v16; // r0
  _DWORD *v17; // r7
  int v18; // r6
  int v19; // r0
  _BYTE v21[12]; // [sp+4h] [bp-3Ch] BYREF
  int v22; // [sp+10h] [bp-30h] BYREF
  char v23; // [sp+18h] [bp-28h]

  v8 = sub_608A9A94(a1[1], a2);
  if ( (a4 & 4) == 0 || (v9 = 0, sub_608B3598(a1, v8, a3, a5, 0)) )
  {
    v9 = 1;
    if ( (a4 & 8) != 0 )
    {
      if ( (*(int (__fastcall **)(int *, int))(*a1 + 16))(a1, v8) )
      {
        v10 = sub_608B6BA8(v21);
        v11 = (_DWORD *)sub_608B6E78(v10);
        if ( !v11 )
          return 0;
        if ( *v11 )
        {
          v12 = 0;
          while ( 1 )
          {
            v13 = &v11[2 * v12];
            v14 = v13[1];
            v15 = v13[2];
            v22 = -1;
            v23 = 0;
            if ( sub_608A9F2C(a1[1], v14, (int)&v22) != 1 )
              break;
            if ( v23 )
            {
              if ( !sub_608B3698(a1, v14, v15, a3, a5) )
                return 0;
            }
            else
            {
              v16 = sub_608A9A94(a1[1], v14);
              if ( !sub_608B3598(a1, v16, a3, a5, 1) )
                return 0;
            }
            if ( (unsigned int)++v12 >= *v11 )
              return v9;
          }
          return 0;
        }
      }
      else
      {
        v17 = (_DWORD *)sub_608AA0A8(a1[1]);
        if ( *v17 )
        {
          v9 = 0;
          v18 = 0;
          while ( 1 )
          {
            v19 = sub_608A9A94(a1[1], v17[v18 + 1]);
            if ( !sub_608B3598(a1, v19, a3, a5, 1) )
              break;
            if ( (unsigned int)++v18 >= *v17 )
              return 1;
          }
        }
      }
    }
  }
  return v9;
}
