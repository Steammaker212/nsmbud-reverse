/* sub_60902D24
 * address: 0x60902D24   size: 336   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60902D24(int a1, _DWORD *a2)
{
  int v4; // r4
  int v5; // r0
  bool v6; // zf
  int v7; // r0
  int v8; // r10
  _DWORD *v9; // r8
  int v10; // r9
  int *v11; // r10
  int v12; // t1
  int v13; // r7
  int v14; // r0
  int v15; // r1
  int i; // r2
  _DWORD *v18; // [sp+0h] [bp-30h]
  int v19; // [sp+8h] [bp-28h]

  v4 = 0;
  if ( *a2 )
  {
    v5 = a2[1];
    v6 = v5 == 0;
    if ( v5 )
      v6 = a2[2] == 0;
    if ( !v6 )
    {
      v7 = a2[4];
      if ( v7 )
        return (*(int (__fastcall **)(int, _DWORD *))(*(_DWORD *)v7 + 24))(v7, a2);
      v8 = FIELD_U32(a1, 20);
      if ( v8 == a1 + 16 )
      {
LABEL_18:
        v11 = (int *)(a1 + 44);
      }
      else
      {
        v9 = a2 + 5;
        v18 = a2 + 5;
        while ( 1 )
        {
          v19 = v8;
          v12 = FIELD_U32(v8, 8);
          v11 = (int *)(v8 + 8);
          v10 = v12;
          (*(void (__fastcall **)(int))(FIELD_U32(v12, 32) + 12))(v12 + 32);
          (*(void (__fastcall **)(int))(FIELD_U32(v12, 32) + 12))(v12 + 32);
          v13 = FIELD_U32(v12, 36);
          (*(void (__fastcall **)(_DWORD *))(a2[5] + 12))(v9);
          v14 = a2[6];
          if ( v13 == v14 )
            break;
          v15 = FIELD_U32(v10, 36);
          for ( i = 1; *(unsigned __int8 *)(v15 + i - 1) == *(unsigned __int8 *)(v14 + i - 1); i += 2 )
          {
            if ( !*(_BYTE *)(v15 + i - 1) )
              goto LABEL_19;
            if ( i > 0x80000 || *(unsigned __int8 *)(v15 + i) != *(unsigned __int8 *)(v14 + i) )
              break;
            if ( !*(_BYTE *)(v15 + i) )
              goto LABEL_19;
          }
          v9 = v18;
          v8 = FIELD_U32(v19, 4);
          if ( v8 == a1 + 16 )
            goto LABEL_18;
        }
      }
LABEL_19:
      v7 = *v11;
      if ( *v11 )
        return (*(int (__fastcall **)(int, _DWORD *))(*(_DWORD *)v7 + 24))(v7, a2);
    }
  }
  return v4;
}
