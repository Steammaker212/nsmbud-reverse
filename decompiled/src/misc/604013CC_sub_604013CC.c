/* sub_604013CC
 * address: 0x604013CC   size: 448   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int sub_604013CC()
{
  int v0; // r11
  char *v1; // r9
  int v2; // r2
  int *v3; // r10
  int v4; // r8
  int result; // r0
  int v6; // r4
  int v7; // r7
  int v8; // r5
  int v9; // r4
  int *v10; // r5
  int v11; // r6
  int v12; // r10
  int v13; // r8
  int v14; // [sp+0h] [bp-30h]
  int v15; // [sp+4h] [bp-2Ch]
  int *v16; // [sp+8h] [bp-28h]

  v0 = dword_60CC6E04;
  v1 = (char *)(dword_60CC6D78 + 796);
  v14 = sub_603F69FC((char *)(dword_60CC6D78 + 796), 7, 42);
  v2 = 0;
  v3 = &dword_60B01A00;
  do
  {
    v15 = v2;
    v16 = v3;
    if ( v14 < 3 )
    {
      v4 = 12;
      while ( 1 )
      {
        result = *v3;
        if ( *v3 == -1 )
          goto LABEL_13;
        v6 = *(v3 - 1);
        v7 = (unsigned __int8)result;
        result = sub_6082920C(v0, (unsigned __int8)v6, (unsigned __int8)result);
        if ( result )
          goto LABEL_13;
        if ( v6 == 10 )
          goto LABEL_12;
        v8 = sub_603F69FC(v1, (unsigned __int8)v6, v7);
        result = *((unsigned __int8 *)v3 + 4);
        if ( *((_BYTE *)v3 + 4) )
          break;
        if ( v8 >= 2 )
          goto LABEL_12;
LABEL_13:
        v3 += 3;
        if ( !--v4 )
          goto LABEL_24;
      }
      result = sub_603F69FC(v1, (unsigned __int8)v6, v7);
      if ( result < 1 || v8 < 2 )
        goto LABEL_13;
LABEL_12:
      result = sub_608291A4(v0, (unsigned __int8)v6, v7);
      goto LABEL_13;
    }
    v9 = 12;
    v10 = v3;
    do
    {
      result = *v10;
      if ( *v10 != -1 )
      {
        v11 = *(v10 - 1);
        v12 = (unsigned __int8)result;
        result = sub_6082920C(v0, (unsigned __int8)v11, (unsigned __int8)result);
        if ( !result )
        {
          if ( v11 == 10 )
            goto LABEL_22;
          v13 = sub_603F69FC(v1, (unsigned __int8)v11, v12);
          result = *((unsigned __int8 *)v10 + 4);
          if ( *((_BYTE *)v10 + 4) )
            result = sub_603F69FC(v1, (unsigned __int8)v11, v12);
          if ( v13 >= 2 )
LABEL_22:
            result = sub_608291A4(v0, (unsigned __int8)v11, v12);
        }
      }
      v10 += 3;
      --v9;
    }
    while ( v9 );
LABEL_24:
    v2 = v15 + 1;
    v3 = v16 + 36;
  }
  while ( v15 != 10 );
  return result;
}
