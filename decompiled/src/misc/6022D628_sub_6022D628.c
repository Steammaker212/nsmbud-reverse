/* sub_6022D628
 * address: 0x6022D628   size: 588   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool sub_6022D628()
{
  int v0; // r1
  unsigned int v1; // r5
  int v2; // r7
  unsigned int v3; // r5
  _BOOL4 result; // r0
  _DWORD *v5; // [sp+14h] [bp-4Ch] BYREF
  int v6; // [sp+18h] [bp-48h] BYREF
  int v7; // [sp+1Ch] [bp-44h]
  int v8; // [sp+20h] [bp-40h]
  int v9[3]; // [sp+24h] [bp-3Ch] BYREF
  _DWORD v10[12]; // [sp+30h] [bp-30h] BYREF

  v10[0] = FIELD_U32(dword_60CC6D78, 480);
  v10[1] = FIELD_U32(dword_60CC6D78, 484);
  v0 = FIELD_U32(dword_60CC6D78, 488);
  memset(v9, 255, sizeof(v9));
  v10[2] = v0;
  v1 = FIELD_U32(dword_60CC6D78, 492);
  v2 = sub_601E131C(5);
  sub_601E17C0((int)v10, v1, v9, 1);
  sub_6019EC34(v10, v9);
  while ( 1 )
  {
    sub_601DFFE4((int)v10);
    v6 = -1;
    v7 = -1;
    v8 = -1;
    if ( v2 == 2 )
      goto LABEL_8;
    sub_601E14F8((int)v10, 2u, (int *)&v5);
    if ( v5 )
    {
      v6 = v5[21];
      v7 = v5[22];
      v8 = v5[24];
      if ( sub_6081F070(dword_60CC6D78, &v6) >= 0 )
      {
        v3 = 2;
        if ( sub_6081F058(dword_60CC6D78) )
          goto LABEL_14;
      }
    }
    if ( v2 != 3 )
    {
LABEL_8:
      sub_601E14F8((int)v10, 3u, (int *)&v5);
      if ( v5 )
      {
        v6 = v5[21];
        v7 = v5[22];
        v8 = v5[24];
        if ( sub_6081F070(dword_60CC6D78, &v6) >= 0 )
        {
          v3 = 3;
          if ( sub_6081F058(dword_60CC6D78) )
            goto LABEL_14;
        }
      }
    }
    sub_601E14F8((int)v10, 5u, (int *)&v5);
    v6 = v5[21];
    v7 = v5[22];
    v8 = v5[24];
    if ( sub_6081F070(dword_60CC6D78, &v6) >= 0 )
      sub_6081F038(dword_60CC6D78);
    v3 = 5;
LABEL_14:
    sub_601E17C0((int)v10, v3, &v6, 1);
    result = sub_601DA484((int)&v6);
    if ( result )
      return result;
    sub_6019EC34(v10, &v6);
    v2 = sub_601E131C(v3);
  }
}
