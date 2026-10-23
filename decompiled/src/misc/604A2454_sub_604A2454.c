/* sub_604A2454
 * address: 0x604A2454   size: 388   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604A2454(int a1)
{
  _DWORD *v2; // r6
  char v3; // r0
  unsigned int v4; // r5
  unsigned int v5; // r2
  unsigned int v6; // r1
  _BYTE *v7; // r8
  int v8; // r2
  int v9; // r1
  unsigned int v10; // r1
  int v11; // r1

  v2 = (_DWORD *)(a1 + 22496);
  if ( FIELD_S32(a1, 22496) >= 1 )
  {
    v3 = 0;
    v4 = 0;
    while ( 1 )
    {
      v10 = 0;
      if ( v4 < 4 )
        v10 = v4;
      v11 = *(_DWORD *)(a1 + 4 * v10 + 20276);
      if ( !FIELD_U8(v11, 2689) )
        goto LABEL_30;
      if ( FIELD_U8(v11, 2691) || FIELD_U8(v11, 2690) )
        goto LABEL_29;
      v5 = 0;
      v6 = FIELD_U32(v11, 2540);
      if ( v4 < 7 )
        v5 = v4;
      v7 = (_BYTE *)(a1 + v5 + 22388);
      if ( *v7 )
      {
        v8 = *(_DWORD *)(a1 + 4 * v5 + 22332);
        if ( v8 == 1 )
        {
          if ( v6 >= 5 )
            v6 = 0;
          if ( (*(_BYTE *)(a1 + 404 * v6 + 20316) & 0x40) == 0 )
            goto LABEL_30;
          sub_604A1C24(a1, v4);
        }
        else
        {
          if ( v8 )
            goto LABEL_30;
          if ( v6 >= 5 )
            v6 = 0;
          if ( (*(_BYTE *)(a1 + 404 * v6 + 20316) & 0x80) == 0 )
            goto LABEL_30;
          sub_604A1D14(a1, v4);
        }
LABEL_29:
        v3 = 1;
        goto LABEL_30;
      }
      if ( v6 >= 5 )
        v6 = 0;
      v9 = *(_DWORD *)(a1 + 404 * v6 + 20316);
      if ( (v9 & 0x40) != 0 )
        break;
      if ( (v9 & 0x80) != 0 )
      {
        sub_604A1D14(a1, v4);
LABEL_23:
        v3 = 1;
        *v7 = 1;
      }
LABEL_30:
      if ( (signed int)++v4 >= *v2 )
        return v3 & 1;
    }
    sub_604A1C24(a1, v4);
    goto LABEL_23;
  }
  v3 = 0;
  return v3 & 1;
}
