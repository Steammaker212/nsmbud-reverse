/* sub_607C0FB4
 * address: 0x607C0FB4   size: 984   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned int __fastcall sub_607C0FB4(_DWORD *a1)
{
  unsigned int result; // r0
  unsigned int *v3; // r5
  int v4; // r0
  unsigned int v5; // r1
  int v6; // r2
  int v7; // r0
  int *v8; // r6
  int v9; // r1
  int v10; // r0
  int v11; // r1
  int v12; // r0
  int v13; // r0
  unsigned int v14; // r1
  int v15; // r2

  result = a1[3206];
  if ( result <= 1 )
  {
    v3 = a1 + 3209;
    result = a1[3209];
    switch ( result )
    {
      case 0u:
        sub_60794954((int)(a1 + 2839), 46, 10.0, 0.0);
        result = 1;
        if ( (float)(flt_60B0A898[a1[20]] * (float)(int)a1[3212]) <= 0.0 )
          result = 5;
        *v3 = result;
        if ( result == 1 )
          goto LABEL_55;
        return result;
      case 1u:
        v4 = a1[3212];
        v5 = v4;
        if ( v4 < 0 )
        {
          v5 = -v4;
          if ( v4 == 0x80000000 )
            goto LABEL_12;
        }
        if ( v5 <= 0x1000000 )
          goto LABEL_54;
        v5 = a1[3212];
        if ( v4 < 0 )
        {
          v5 = -v4;
LABEL_12:
          if ( v4 == 0x80000000 )
            v5 = a1[3212];
        }
        v6 = a1[3214];
        if ( v6 < 0 && v6 != 0x80000000 )
          v6 = -v6;
        if ( v5 <= v6 && (float)((float)v4 * flt_60B0A898[a1[20]]) <= 0.0 )
        {
          *v3 = 2;
          v8 = a1 + 2840;
          v7 = a1[2840];
          goto LABEL_48;
        }
        goto LABEL_54;
      case 2u:
        if ( sub_60793DA0(a1[2840], 32.0) == 1 )
        {
          sub_60793088((_DWORD *)a1[2840], 0.0);
          *v3 = 3;
        }
        goto LABEL_22;
      case 3u:
LABEL_22:
        v9 = a1[3212];
        v10 = a1[3214];
        if ( v9 > 0 )
        {
          if ( v10 > 0 )
            goto LABEL_54;
          goto LABEL_51;
        }
        if ( !v9 || v10 >= 0 )
        {
LABEL_51:
          sub_60794368(a1[2840]);
          (*(void (__fastcall **)(_DWORD, int, float, float, float))(*(_DWORD *)a1[2840] + 84))(
            a1[2840],
            131,
            1.0,
            10.0,
            32.0);
          *v3 = 4;
          return 4;
        }
        goto LABEL_54;
      case 4u:
        if ( sub_60793DA0(a1[2840], 64.0) == 1 )
        {
          sub_60793088((_DWORD *)a1[2840], 0.0);
          *v3 = 5;
        }
        goto LABEL_27;
      case 5u:
LABEL_27:
        sub_607C14E0(a1);
        goto LABEL_54;
      case 6u:
        if ( sub_60793DA0(a1[2840], 96.0) == 1 )
        {
          sub_60793088((_DWORD *)a1[2840], 0.0);
          *v3 = 7;
        }
        goto LABEL_30;
      case 7u:
LABEL_30:
        v11 = a1[3212];
        v12 = a1[3214];
        if ( v11 > 0 )
        {
          if ( v12 > 0 )
            goto LABEL_54;
          goto LABEL_57;
        }
        if ( !v11 || v12 >= 0 )
        {
LABEL_57:
          sub_60794368(a1[2840]);
          (*(void (__fastcall **)(_DWORD, int, float, float, float))(*(_DWORD *)a1[2840] + 84))(
            a1[2840],
            131,
            1.0,
            10.0,
            96.0);
          *v3 = 8;
          return 8;
        }
LABEL_54:
        result = *v3;
        if ( *v3 == 1 )
LABEL_55:
          result = sub_60794954((int)(a1 + 2839), 46, 10.0, 0.0);
        break;
      case 8u:
        v8 = a1 + 2840;
        if ( sub_60793CA8(a1[2840]) == 1 )
          *v3 = 1;
        v13 = a1[3212];
        v14 = v13;
        if ( v13 < 0 )
        {
          v14 = -v13;
          if ( v13 == 0x80000000 )
            goto LABEL_40;
        }
        if ( v14 > 0x1000000 )
        {
          v14 = a1[3212];
          if ( v13 < 0 )
          {
            v14 = -v13;
LABEL_40:
            if ( v13 == 0x80000000 )
              v14 = a1[3212];
          }
          v15 = a1[3214];
          if ( v15 < 0 && v15 != 0x80000000 )
            v15 = -v15;
          if ( v14 <= v15 && (float)((float)v13 * flt_60B0A898[a1[20]]) <= 0.0 )
          {
            *v3 = 2;
            v7 = *v8;
LABEL_48:
            sub_60794368(v7);
            (*(void (__fastcall **)(int, int, float, float, float))(*(_DWORD *)*v8 + 84))(*v8, 131, 1.0, 10.0, 1.0);
          }
        }
        goto LABEL_54;
      default:
        return result;
    }
  }
  return result;
}
