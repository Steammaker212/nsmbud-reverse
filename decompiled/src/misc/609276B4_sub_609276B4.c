/* sub_609276B4
 * address: 0x609276B4   size: 460   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_609276B4(_DWORD *a1, int a2)
{
  _DWORD *v3; // r5
  char *v4; // r6
  int v5; // r2
  int j; // r5
  int result; // r0
  int v8; // r0
  int v9; // r0
  int v10; // r5
  _DWORD *v11; // r4
  int v12; // t1
  int v13; // r6
  int v14; // r2
  int v15; // r1
  int i; // r4
  _DWORD v17[2]; // [sp+4h] [bp-24h] BYREF
  int v18; // [sp+Ch] [bp-1Ch] BYREF

  v18 = a2;
  v3 = a1 + 10;
  (*(void (__fastcall **)(_DWORD *))(a1[10] + 12))(a1 + 10);
  (*(void (__fastcall **)(_DWORD *))(*v3 + 12))(v3);
  v4 = (char *)v3[1];
  off_60C5CB30[3]();
  if ( v4 == off_60C5CB34 )
  {
LABEL_9:
    v17[0] = &sead__SafeStringBase__vtable;
    v17[1] = "type";
    v8 = sub_60941AB4(v17);
    v9 = sub_609515BC(&v18, v8);
    if ( v9 == -1 )
      v10 = 0;
    else
      v10 = v18 + ((4 * FIELD_U32(v18, 4)) & 0x3FFFC) + 8 * v9;
    v12 = a1[30];
    v11 = a1 + 30;
    v13 = FIELD_U32(v10, 4);
    (*(void (__fastcall **)(_DWORD *))(v12 + 12))(v11);
    (*(void (__fastcall **)(_DWORD *))(*v11 + 12))(v11);
    v14 = v11[1];
    v15 = v10 + ((4 * v13) & 0x3FFFFFC);
    if ( v14 == v15 )
    {
      return 1;
    }
    else
    {
      for ( i = 1; ; i += 2 )
      {
        result = 0;
        if ( *(unsigned __int8 *)(v14 + i - 1) != *(unsigned __int8 *)(v15 + i - 1) )
          break;
        if ( !*(_BYTE *)(v14 + i - 1) )
          return 1;
        if ( i >= 524289 )
          break;
        if ( *(unsigned __int8 *)(v14 + i) != *(unsigned __int8 *)(v15 + i) )
          break;
        result = 1;
        if ( !*(_BYTE *)(v14 + i) )
          break;
      }
    }
  }
  else
  {
    v5 = a1[11];
    for ( j = 1; ; j += 2 )
    {
      result = 0;
      if ( *(unsigned __int8 *)(v5 + j - 1) != (unsigned __int8)off_60C5CB34[j - 1] )
        break;
      if ( !*(_BYTE *)(v5 + j - 1) )
        goto LABEL_9;
      if ( j >= 524289 || *(unsigned __int8 *)(v5 + j) != (unsigned __int8)off_60C5CB34[j] )
        break;
      if ( !*(_BYTE *)(v5 + j) )
        goto LABEL_9;
    }
  }
  return result;
}
