/* sub_60225174
 * address: 0x60225174   size: 464   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60225174(int a1, int a2, const char **a3)
{
  int v6; // r0
  int v7; // r9
  _DWORD *v8; // r6
  _DWORD *v9; // r11
  _DWORD *v10; // r4
  unsigned __int8 *v11; // r10
  int v12; // r1
  int i; // r2
  unsigned __int8 *v14; // r6
  const void *v15; // r10
  signed int v16; // r4
  bool v17; // cc
  signed int v18; // r0
  int v20; // [sp+0h] [bp-50h] BYREF
  unsigned __int8 *v21; // [sp+4h] [bp-4Ch]

  (*((void (__fastcall **)(const char **))*a3 + 3))(a3);
  sub_6017D524(&v20, "mt%s", a3[1]);
  v6 = FIELD_U32(a1, 296);
  v7 = 0;
  if ( !v6 )
    return v7;
  v8 = *(_DWORD **)(a1 + 304);
  v9 = &v8[v6];
  while ( 1 )
  {
    v10 = (_DWORD *)*v8;
    if ( *v8 )
      break;
LABEL_13:
    if ( ++v8 == v9 )
      return v7;
  }
  (*(void (__fastcall **)(_DWORD))(*v10 + 12))(*v8);
  (*(void (__fastcall **)(_DWORD *))(*v10 + 12))(v10);
  v11 = (unsigned __int8 *)v10[1];
  (*(void (__fastcall **)(int *))(v20 + 12))(&v20);
  if ( v11 != v21 )
  {
    v12 = v10[1];
    for ( i = 1; *(unsigned __int8 *)(v12 + i - 1) == v21[i - 1]; i += 2 )
    {
      if ( !*(_BYTE *)(v12 + i - 1) )
        goto LABEL_15;
      if ( i >= 524289 || *(unsigned __int8 *)(v12 + i) != v21[i] )
        break;
      if ( !*(_BYTE *)(v12 + i) )
        goto LABEL_15;
    }
    goto LABEL_13;
  }
LABEL_15:
  v14 = *(unsigned __int8 **)(a2 + 4);
  (*(void (__fastcall **)(int *))(v20 + 12))(&v20);
  v15 = v21;
  v7 = 1;
  if ( v14 != v21 )
  {
    (*(void (__fastcall **)(int *))(v20 + 12))(&v20);
    v16 = 0;
    while ( v21[v16] )
    {
      if ( !v21[v16 + 1] )
      {
        ++v16;
        break;
      }
      if ( !v21[v16 + 2] )
      {
        v16 += 2;
        break;
      }
      v17 = v16 + 2 <= 0x7FFFF;
      v16 += 3;
      if ( !v17 )
      {
        v16 = 0;
        break;
      }
    }
    v18 = FIELD_U32(a2, 8);
    if ( v16 >= v18 )
      v16 = v18 - 1;
    qmemcpy(v14, v15, v16);
    v14[v16] = 0;
  }
  return v7;
}
