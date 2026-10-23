/* sub_608B417C
 * address: 0x608B417C   size: 256   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608B417C(int *a1, int a2, int a3)
{
  int v5; // r0
  _DWORD *v6; // r6
  int v7; // r11
  _DWORD *v8; // r0
  unsigned int v9; // r7
  int v10; // r4
  int v11; // r0
  _BYTE v13[12]; // [sp+4h] [bp-3Ch] BYREF
  int v14; // [sp+10h] [bp-30h] BYREF
  char v15; // [sp+18h] [bp-28h]

  if ( a2 )
  {
    v5 = sub_608B6BA8(v13);
    v6 = (_DWORD *)sub_608B6E78(v5);
    if ( v6 )
    {
      if ( !*v6 )
        return 1;
      v7 = 0;
      while ( 1 )
      {
        v8 = &v6[2 * v7];
        v9 = v8[1];
        v10 = v8[2];
        v14 = -1;
        v15 = 0;
        if ( sub_608A9F2C(a1[1], v9, (int)&v14) != 1 )
          break;
        if ( v15 )
        {
          if ( !sub_608B3698(a1, v9, v10, a3, 0) )
            return 0;
        }
        else
        {
          v11 = sub_608A9A94(a1[1], v9);
          if ( !sub_608B3598(a1, v11, a3, 0, 1) )
            return 0;
        }
        if ( (unsigned int)++v7 >= *v6 )
          return 1;
      }
    }
  }
  return 0;
}
