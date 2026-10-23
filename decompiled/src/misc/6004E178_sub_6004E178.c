/* sub_6004E178
 * address: 0x6004E178   size: 344   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6004E178(int a1)
{
  _DWORD *v2; // r0
  int v3; // r5
  _DWORD *v4; // r1
  unsigned int v5; // r2
  unsigned int v6; // r0
  _DWORD *v7; // r1
  unsigned int v8; // r0
  _BYTE *v9; // r5
  int result; // r0
  _DWORD *v11; // r0
  int v12; // r6
  _DWORD *v13; // r1
  unsigned int v14; // r2
  unsigned int v15; // r0
  _DWORD *v16; // r1
  unsigned int v17; // r0

  if ( (FIELD_U8(a1, 2872) & 1) != 0 )
  {
    v3 = a1 + 7204;
    v2 = *(_DWORD **)(a1 + 7204);
    v4 = (_DWORD *)v2[3];
    v5 = v2[2];
    v6 = v2[17];
    if ( v5 > v6 )
      v4 += v6;
    if ( sub_60418548(*v4 + 4) )
    {
      (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 1140))(a1);
    }
    else
    {
      v7 = *(_DWORD **)(*(_DWORD *)v3 + 12);
      v8 = *(_DWORD *)(*(_DWORD *)v3 + 68);
      if ( *(_DWORD *)(*(_DWORD *)v3 + 8) > v8 )
        v7 += v8;
      if ( sub_60418548(*v7 + 4) )
        (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 1144))(a1);
    }
  }
  v9 = (_BYTE *)(a1 + 8388);
  if ( FIELD_U8(a1, 8388) )
  {
    *v9 = 0;
    return 0;
  }
  else
  {
    v12 = a1 + 7204;
    v11 = *(_DWORD **)(a1 + 7204);
    v13 = (_DWORD *)v11[3];
    v14 = v11[2];
    v15 = v11[17];
    if ( v14 > v15 )
      v13 += v15;
    if ( sub_60418548(*v13 + 4) )
      goto LABEL_18;
    v16 = *(_DWORD **)(*(_DWORD *)v12 + 12);
    v17 = *(_DWORD *)(*(_DWORD *)v12 + 68);
    if ( *(_DWORD *)(*(_DWORD *)v12 + 8) > v17 )
      v16 += v17;
    result = sub_60418548(*v16 + 4);
    if ( result == 1 )
    {
LABEL_18:
      result = a1 + 8389;
      if ( FIELD_U8(a1, 8389) )
      {
        *(_BYTE *)result = 0;
      }
      else
      {
        (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 1148))(a1);
        *v9 = 1;
        return 1;
      }
    }
  }
  return result;
}
