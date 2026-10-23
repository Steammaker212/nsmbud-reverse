/* sub_604364F8
 * address: 0x604364F8   size: 356   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604364F8(int a1, _DWORD *a2, int a3)
{
  int v4; // r1
  int v5; // r10
  int v6; // r9
  int v7; // r7
  int v8; // r0
  bool v9; // zf
  int v10; // r0
  int v11; // r11
  int v12; // r1
  int i; // r2
  int v15; // [sp+4h] [bp-3Ch]
  int v17; // [sp+Ch] [bp-34h]
  int (**v19)(); // [sp+14h] [bp-2Ch] BYREF
  int v20; // [sp+18h] [bp-28h]

  v15 = FIELD_U16(a1, 66);
  if ( FIELD_U16(a1, 66) )
  {
    v4 = 0;
    do
    {
      v17 = v4;
      v5 = FIELD_U32(a1, 76) + 72 * v4;
      v6 = *(unsigned __int8 *)(*(_DWORD *)v5 + 169);
      if ( *(_BYTE *)(*(_DWORD *)v5 + 169) )
      {
        v7 = 0;
        do
        {
          v8 = sub_609186E8(v5, v7);
          v9 = v8 == 0;
          if ( v8 )
            v9 = FIELD_U32(v8, 80) == 0;
          if ( !v9 )
          {
            v10 = FIELD_U32(v8, 96);
            v19 = &sead__SafeStringBase__vtable;
            v20 = v10 + 2;
            (*(void (__fastcall **)(_DWORD *))(*a2 + 12))(a2);
            (*(void (__fastcall **)(_DWORD *))(*a2 + 12))(a2);
            v11 = a2[1];
            ((void (__fastcall *)(int (***)()))v19[3])(&v19);
            if ( v11 == v20 )
            {
LABEL_16:
              sub_6091872C(v5, v7, a3);
            }
            else
            {
              v12 = a2[1];
              for ( i = 1; *(unsigned __int8 *)(v12 + i - 1) == *(unsigned __int8 *)(v20 + i - 1); i += 2 )
              {
                if ( !*(_BYTE *)(v12 + i - 1) )
                  goto LABEL_16;
                if ( i > 0x80000 || *(unsigned __int8 *)(v12 + i) != *(unsigned __int8 *)(v20 + i) )
                  break;
                if ( !*(_BYTE *)(v12 + i) )
                  goto LABEL_16;
              }
            }
          }
          ++v7;
        }
        while ( v7 != v6 );
      }
      v4 = v17 + 1;
    }
    while ( v17 + 1 != v15 );
  }
  FIELD_U8(a1, 436) = 1;
  return 1;
}
