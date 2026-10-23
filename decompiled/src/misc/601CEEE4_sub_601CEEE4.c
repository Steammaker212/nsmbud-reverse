/* sub_601CEEE4
 * address: 0x601CEEE4   size: 540   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

char *__fastcall sub_601CEEE4(int a1, _DWORD *a2)
{
  unsigned int v4; // r6
  int v5; // r0
  int v6; // r0
  int v8; // [sp+4h] [bp-2Ch]
  int v9; // [sp+8h] [bp-28h] BYREF
  int v10; // [sp+Ch] [bp-24h]
  int v11; // [sp+10h] [bp-20h]
  unsigned int v12; // [sp+14h] [bp-1Ch]

  v12 = 10;
  v9 = -1;
  v10 = -1;
  v11 = -1;
  if ( *a2 == 7 )
  {
    v12 = 7;
  }
  else if ( *a2 == 8 )
  {
    v12 = 8;
  }
  else
  {
    v4 = 0;
    while ( sub_601E06F0(v4, &v9) != 1 || v9 != *a2 || v10 != a2[1] || v11 != a2[2] )
    {
      if ( (int)++v4 >= 10 )
        goto LABEL_11;
    }
    v12 = v4;
  }
LABEL_11:
  v8 = sub_601E08C8(a1);
  switch ( v8 )
  {
    case 1:
      if ( !v12 )
      {
        v8 = 0;
        v5 = 1;
        goto LABEL_34;
      }
      return (char *)&unk_60AFCAC8 + 120 * v8 + 12 * v12;
    case 2:
      if ( v12 == 1 )
      {
        v6 = 1;
        goto LABEL_33;
      }
      if ( !v12 )
      {
        v6 = 0;
LABEL_33:
        v8 = v6;
        v5 = 2;
        goto LABEL_34;
      }
      return (char *)&unk_60AFCAC8 + 120 * v8 + 12 * v12;
    case 3:
      if ( v12 > 2 )
        return (char *)&unk_60AFCAC8 + 120 * v8 + 12 * v12;
      v8 = v12;
      v5 = 3;
      goto LABEL_34;
    case 4:
      if ( v12 > 3 )
        return (char *)&unk_60AFCAC8 + 120 * v8 + 12 * v12;
      v8 = v12;
      v5 = 4;
      goto LABEL_34;
    case 5:
      if ( v12 > 4 )
        return (char *)&unk_60AFCAC8 + 120 * v8 + 12 * v12;
      v8 = v12;
      v5 = 5;
      goto LABEL_34;
    case 6:
      if ( v12 > 5 )
        return (char *)&unk_60AFCAC8 + 120 * v8 + 12 * v12;
      v8 = v12;
      v5 = 6;
      goto LABEL_34;
    case 7:
      if ( v12 > 6 )
        return (char *)&unk_60AFCAC8 + 120 * v8 + 12 * v12;
      v8 = v12;
      v5 = 7;
      goto LABEL_34;
    case 8:
      if ( v12 > 7 )
        return (char *)&unk_60AFCAC8 + 120 * v8 + 12 * v12;
      v8 = v12;
      v5 = 8;
      goto LABEL_34;
    case 9:
      if ( v12 > 8 )
        return (char *)&unk_60AFCAC8 + 120 * v8 + 12 * v12;
      v8 = v12;
      v5 = 9;
LABEL_34:
      v12 = v5;
      return (char *)&unk_60AFCAC8 + 120 * v8 + 12 * v12;
    default:
      return (char *)&unk_60AFCAC8 + 120 * v8 + 12 * v12;
  }
}
