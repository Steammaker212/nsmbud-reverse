/* sub_604CC7F4
 * address: 0x604CC7F4   size: 520   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int sub_604CC7F4()
{
  int v0; // r10
  int v1; // r11
  int v2; // r9
  int v3; // r6
  int result; // r0
  unsigned __int8 v5; // r4
  int v6; // r7
  int v7; // r8
  unsigned __int8 v8; // r4
  int v9; // r7
  int v10; // r8
  int v11; // [sp+4h] [bp-2Ch]
  char *v12; // [sp+8h] [bp-28h]

  v0 = dword_60CC6E04;
  v1 = dword_60C99E44;
  v12 = (char *)(dword_60CC6D78 + 796);
  v2 = 0;
  v11 = sub_603F69FC((char *)(dword_60CC6D78 + 796), 7, 42);
  do
  {
    v3 = 0;
    if ( v11 < 3 )
    {
      while ( 1 )
      {
        result = sub_6040137C(v1, v2, v3);
        v5 = result;
        if ( result == -1 )
          goto LABEL_12;
        v6 = sub_6040135C(v1, v2, v3);
        result = sub_6082920C(v0, (unsigned __int8)v6, v5);
        if ( result )
          goto LABEL_12;
        if ( v6 == 10 )
          goto LABEL_11;
        v7 = sub_603F69FC(v12, (unsigned __int8)v6, v5);
        result = sub_604013A0(v1, v2, v3);
        if ( result )
          break;
        if ( v7 >= 2 )
          goto LABEL_11;
LABEL_12:
        if ( ++v3 == 12 )
          goto LABEL_22;
      }
      result = sub_603F69FC(v12, (unsigned __int8)v6, v5);
      if ( result < 1 || v7 < 2 )
        goto LABEL_12;
LABEL_11:
      result = sub_608291A4(v0, (unsigned __int8)v6, v5);
      goto LABEL_12;
    }
    do
    {
      result = sub_6040137C(v1, v2, v3);
      v8 = result;
      if ( result != -1 )
      {
        v9 = sub_6040135C(v1, v2, v3);
        result = sub_6082920C(v0, (unsigned __int8)v9, v8);
        if ( !result )
        {
          if ( v9 == 10 )
            goto LABEL_20;
          v10 = sub_603F69FC(v12, (unsigned __int8)v9, v8);
          result = sub_604013A0(v1, v2, v3);
          if ( result == 1 )
            result = sub_603F69FC(v12, (unsigned __int8)v9, v8);
          if ( v10 >= 2 )
LABEL_20:
            result = sub_608291A4(v0, (unsigned __int8)v9, v8);
        }
      }
      ++v3;
    }
    while ( v3 != 12 );
LABEL_22:
    ++v2;
  }
  while ( v2 != 10 );
  return result;
}
