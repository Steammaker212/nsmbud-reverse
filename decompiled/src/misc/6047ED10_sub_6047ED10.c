/* sub_6047ED10
 * address: 0x6047ED10   size: 348   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6047ED10(int result, int a2, int a3, int a4)
{
  int v4; // r1
  int v5; // r2
  int v6; // r8
  int v7; // r10
  int v8; // r11
  int v9; // r9
  int *v10; // r5
  int *v11; // r7
  int v12; // r0
  int v13; // r6
  int v14; // r1
  int i; // r2
  int v16; // [sp+0h] [bp-48h]
  int v17; // [sp+4h] [bp-44h]
  int v21; // [sp+14h] [bp-34h]
  int (**v22)(); // [sp+1Ch] [bp-2Ch] BYREF
  int v23; // [sp+20h] [bp-28h]

  v4 = result;
  if ( a4 >= 1 )
  {
    v5 = result + 12;
    v6 = 0;
    v17 = result;
    v16 = result + 12;
    do
    {
      v7 = FIELD_U32(v4, 16);
      v8 = 0;
      if ( v7 != v5 )
      {
        v9 = FIELD_U32(v4, 24);
        v10 = (int *)(a3 + 8 * v6);
        v8 = v7 - v9;
        v21 = v5 - v9;
        v11 = v10 + 1;
        while ( 1 )
        {
          v12 = FIELD_U32(v8, 88);
          v22 = &sead__SafeStringBase__vtable;
          v23 = v12;
          (*(void (__fastcall **)(int *))(*v10 + 12))(v10);
          (*(void (__fastcall **)(int *))(*v10 + 12))(v10);
          v13 = *v11;
          ((void (__fastcall *)(int (***)()))v22[3])(&v22);
          if ( v13 == v23 )
            break;
          v14 = *v11;
          for ( i = 1; *(unsigned __int8 *)(v14 + i - 1) == *(unsigned __int8 *)(v23 + i - 1); i += 2 )
          {
            if ( !*(_BYTE *)(v14 + i - 1) )
              goto LABEL_16;
            if ( i > 0x80000 || *(unsigned __int8 *)(v14 + i) != *(unsigned __int8 *)(v23 + i) )
              break;
            if ( !*(_BYTE *)(v14 + i) )
              goto LABEL_16;
          }
          v7 = FIELD_U32(v7, 4);
          v8 = v7 - v9;
          if ( v7 - v9 == v21 )
          {
            v8 = 0;
            break;
          }
        }
LABEL_16:
        v4 = v17;
        v5 = v16;
      }
      *(_DWORD *)(a2 + 4 * v6++) = v8;
      result = a4;
    }
    while ( v6 != a4 );
  }
  return result;
}
