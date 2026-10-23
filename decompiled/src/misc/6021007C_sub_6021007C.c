/* sub_6021007C
 * address: 0x6021007C   size: 272   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6021007C(_DWORD *a1)
{
  int v2; // r5
  unsigned int v3; // r0
  int v4; // r6
  unsigned int v5; // r7
  _DWORD *v6; // r0
  int v7; // r0
  unsigned int v8; // r6
  int v9; // r7
  unsigned int v10; // r0
  _DWORD v12[2]; // [sp+4h] [bp-24h] BYREF
  int v13; // [sp+Ch] [bp-1Ch]

  v2 = 0;
  v3 = a1[88];
  if ( v3 <= 2 )
    v2 = *((_DWORD *)*(&off_60BD8EE8 + v3) + 2 * FIELD_U8(dword_60CC6D78, 2082) + 1);
  v12[0] = 4;
  v12[1] = 1;
  v13 = -1;
  v4 = sub_601A443C(dword_60C89E18, 4, 1);
  if ( FIELD_S32(v4, 32) >= 1 )
  {
    v5 = 0;
    while ( !sub_60183038(v4, v5, v2) )
    {
      if ( (signed int)++v5 >= FIELD_U32(v4, 32) )
        goto LABEL_9;
    }
    v13 = v5;
  }
LABEL_9:
  v6 = (_DWORD *)sub_601DFFE4((int)v12);
  a1[75] = v6[21];
  a1[76] = v6[22];
  v7 = v6[24];
  a1[77] = v7;
  a1[62] = v7;
  v8 = a1[60];
  v9 = dword_60CC6D78;
  v10 = sub_6018691C((int)a1);
  return sub_60186FC0(v9 + 984, v8, v10, (int)(a1 + 75));
}
