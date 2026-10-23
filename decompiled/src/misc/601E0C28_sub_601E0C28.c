/* sub_601E0C28
 * address: 0x601E0C28   size: 468   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601E0C28(int a1)
{
  unsigned int v2; // r6
  int v3; // r7
  unsigned int v4; // r8
  int v5; // r1
  int v6; // r0
  int v7; // r0
  _DWORD *v8; // r0
  int v9; // r1
  int v10; // r2
  int v11; // r0
  _DWORD *v12; // r0
  int v13; // r1
  int v14; // r2
  _DWORD v16[4]; // [sp+0h] [bp-40h] BYREF
  _DWORD v17[3]; // [sp+10h] [bp-30h] BYREF
  int v18; // [sp+1Ch] [bp-24h] BYREF
  int v19; // [sp+20h] [bp-20h]
  unsigned int v20; // [sp+24h] [bp-1Ch]

  v2 = 0;
  v3 = sub_601A443C(dword_60C89E18, 7, 0);
  v4 = -1;
  if ( FIELD_S32(v3, 32) >= 1 )
  {
    while ( !sub_60183054(v3, v2, 0x80000000) )
    {
      if ( (signed int)++v2 >= FIELD_U32(v3, 32) )
      {
        v4 = -1;
        goto LABEL_6;
      }
    }
    v4 = v2;
  }
LABEL_6:
  v18 = -1;
  v19 = -1;
  v20 = -1;
  if ( a1 == 8 )
  {
    sub_601E0AB8(&v18);
  }
  else
  {
    v17[0] = a1;
    v19 = 0;
    switch ( a1 )
    {
      case 0:
        v5 = 0;
        v18 = 0;
        goto LABEL_19;
      case 1:
        v6 = 1;
        goto LABEL_16;
      case 2:
        v6 = 2;
        goto LABEL_16;
      case 3:
        v6 = 3;
        goto LABEL_16;
      case 4:
        v6 = 4;
        goto LABEL_16;
      case 5:
        v6 = 5;
        goto LABEL_16;
      case 6:
        v6 = 6;
LABEL_16:
        v18 = v6;
        v5 = 0;
        goto LABEL_19;
      case 7:
        v18 = 7;
        v5 = 0;
        v19 = 1;
        goto LABEL_19;
      case 9:
        v5 = 1;
        v18 = 0;
LABEL_19:
        sub_601D9F00(&v18, v5);
        break;
      default:
        break;
    }
  }
  v7 = sub_601A4454(dword_60C89E18, v18, v19);
  v8 = (_DWORD *)sub_60178780(v7, v20);
  v9 = v8[18];
  v10 = v8[19];
  v17[2] = v8[20];
  v17[1] = v10;
  v17[0] = v9;
  v11 = sub_601A4454(dword_60C89E18, 7, 0);
  v12 = (_DWORD *)sub_60178780(v11, v4);
  v13 = v12[18];
  v14 = v12[19];
  v16[2] = v12[20];
  v16[0] = v13;
  v16[1] = v14;
  return sub_608332B0(v17, v16);
}
