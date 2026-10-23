/* sub_608B30AC
 * address: 0x608B30AC   size: 496   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608B30AC(int *a1, unsigned int a2, int a3, char a4, int a5)
{
  int v9; // r5
  int v10; // r10
  int v11; // r4
  int v12; // r5
  int v13; // r0
  int v14; // r0
  unsigned int v15; // r7
  int v16; // r4
  int v17; // r0
  _DWORD *v18; // r7
  int v19; // r5
  int v20; // r0
  int v21; // r0
  int v23; // [sp+8h] [bp-48h] BYREF
  int v24; // [sp+Ch] [bp-44h]
  int v25; // [sp+10h] [bp-40h]
  char v26; // [sp+14h] [bp-3Ch]
  _BYTE v27[44]; // [sp+24h] [bp-2Ch] BYREF

  v9 = sub_608A9A94(a1[1], a2);
  if ( (a4 & 2) == 0 || (v10 = 0, sub_608B3598(a1, v9, a3, a5, 0)) )
  {
    v10 = 1;
    if ( (a4 & 8) != 0 )
    {
      v11 = (*(int (__fastcall **)(int *, int))(*a1 + 16))(a1, v9);
      if ( v11 )
      {
        v10 = 0;
        v24 = 0;
        LOWORD(v25) = 0;
        if ( sub_608A9D48(a1[1], a2, (int)&v23) == 1 )
        {
          v12 = v23;
          v13 = sub_608CBCA4(v27, v11);
          v10 = 0;
          v26 = 0;
          v25 = 0;
          v14 = sub_608CBE0C(v13, &v23, v12, 0);
          v15 = v23;
          if ( !v14 )
            v15 = -1;
          if ( v14 == 1 )
          {
            v10 = 0;
            v16 = v24;
            v23 = -1;
            LOBYTE(v25) = 0;
            if ( sub_608A9F2C(a1[1], v15, (int)&v23) == 1 )
            {
              if ( (_BYTE)v25 )
              {
                v17 = sub_608B3698(a1, v15, v16, a3, a5);
              }
              else
              {
                v21 = sub_608A9A94(a1[1], v15);
                v17 = sub_608B3598(a1, v21, a3, a5, 1);
              }
              if ( v17 )
                return 1;
            }
          }
        }
      }
      else
      {
        v18 = (_DWORD *)sub_608AA0A8(a1[1]);
        if ( *v18 )
        {
          v10 = 0;
          v19 = 0;
          while ( 1 )
          {
            v20 = sub_608A9A94(a1[1], v18[v19 + 1]);
            if ( !sub_608B3598(a1, v20, a3, a5, 1) )
              break;
            if ( (unsigned int)++v19 >= *v18 )
              return 1;
          }
        }
      }
    }
  }
  return v10;
}
