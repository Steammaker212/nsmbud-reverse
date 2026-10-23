/* sub_6064AD08
 * address: 0x6064AD08   size: 536   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6064AD08(int *a1)
{
  int result; // r0
  _DWORD *i; // r1
  int v4; // r5
  int v5; // r5
  int v6; // r1
  int *v7; // r5
  int v8; // r1
  int v9; // r1
  int *v10; // r5
  int v11; // r1
  int v12; // r1
  int *v13; // r5
  int v14; // r1
  int v15; // r1
  int *v16; // r5
  int v17; // r1
  int v18; // [sp+0h] [bp-20h]
  int v19; // [sp+4h] [bp-1Ch]
  int v20; // [sp+8h] [bp-18h]
  int v21; // [sp+Ch] [bp-14h]

  result = 0;
  v21 = 0;
  v20 = 0;
  v19 = 0;
  v18 = 0;
  for ( i = (_DWORD *)a1[1590]; i; i = (_DWORD *)i[1] )
  {
    if ( *i )
    {
      v4 = *(_DWORD *)(*i + 2196);
      if ( (unsigned int)FIELD_U8(v4, 533) - 1 <= 1 )
      {
        v5 = FIELD_S8(v4, 84);
        if ( v5 != -1 )
          *(&v18 + v5) = 1;
      }
    }
  }
  v7 = a1 + 1840;
  v6 = a1[1840];
  if ( !v6 )
  {
    result = 0;
    if ( v18 != 1 )
    {
LABEL_14:
      v8 = v18;
      goto LABEL_15;
    }
    sub_6040B3B0((_BYTE *)dword_60C9A1F0, FIELD_U8(dword_60C9A1F0, 6531));
    v6 = *v7;
    result = 1;
  }
  if ( v6 != 1 )
    goto LABEL_14;
  v8 = v18;
  if ( !v18 )
    result = 1;
LABEL_15:
  *v7 = v8;
  v10 = a1 + 1841;
  v9 = a1[1841];
  if ( !v9 )
  {
    if ( v19 != 1 )
    {
LABEL_22:
      v11 = v19;
      goto LABEL_23;
    }
    sub_6040B3B0((_BYTE *)dword_60C9A1F0, FIELD_U8(dword_60C9A1F0, 6531));
    v9 = *v10;
    result = 1;
  }
  if ( v9 != 1 )
    goto LABEL_22;
  v11 = v19;
  if ( !v19 )
    result = 1;
LABEL_23:
  *v10 = v11;
  v13 = a1 + 1842;
  v12 = a1[1842];
  if ( !v12 )
  {
    if ( v20 != 1 )
    {
LABEL_30:
      v14 = v20;
      goto LABEL_31;
    }
    sub_6040B3B0((_BYTE *)dword_60C9A1F0, FIELD_U8(dword_60C9A1F0, 6531));
    v12 = *v13;
    result = 1;
  }
  if ( v12 != 1 )
    goto LABEL_30;
  v14 = v20;
  if ( !v20 )
    result = 1;
LABEL_31:
  *v13 = v14;
  v16 = a1 + 1843;
  v15 = a1[1843];
  if ( !v15 )
  {
    if ( v21 != 1 )
    {
LABEL_37:
      v17 = v21;
LABEL_38:
      *v16 = v17;
      if ( !result )
        return result;
      goto LABEL_39;
    }
    sub_6040B3B0((_BYTE *)dword_60C9A1F0, FIELD_U8(dword_60C9A1F0, 6531));
    v15 = *v16;
    result = 1;
  }
  if ( v15 != 1 )
    goto LABEL_37;
  v17 = v21;
  if ( v21 )
    goto LABEL_38;
  *v16 = 0;
LABEL_39:
  result = a1[1827];
  a1[1820] = result;
  return result;
}
