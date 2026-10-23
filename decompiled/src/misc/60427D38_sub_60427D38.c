/* sub_60427D38
 * address: 0x60427D38   size: 436   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60427D38(int a1, int a2, _DWORD *a3, int a4, int a5)
{
  int result; // r0
  unsigned int v7; // r4
  int v8; // r3
  int v9; // r9
  int v10; // r11
  int v11; // r1
  int v12; // r10
  int v13; // r0
  int v14; // r8
  int v15; // r1
  int i; // r2
  int v17; // r0
  int v19; // [sp+Ch] [bp-3Ch]
  int v20; // [sp+10h] [bp-38h]
  int v21; // [sp+14h] [bp-34h]
  int (**v23)(); // [sp+1Ch] [bp-2Ch] BYREF
  int v24; // [sp+20h] [bp-28h]

  result = FIELD_U16(a2, 64);
  v19 = result;
  if ( FIELD_U16(a2, 64) )
  {
    v7 = 0;
    do
    {
      v8 = FIELD_U32(a2, 244);
      v9 = *(_DWORD *)(*(_DWORD *)(FIELD_U32(a2, 440) + 16) + 3016 * v7 + 24);
      if ( FIELD_U32(a2, 240) > v7 )
        v8 += 120 * v7;
      v21 = v8;
      if ( v9 )
      {
        v20 = FIELD_U32(v9, 260);
        if ( v20 >= 1 )
        {
          v10 = 0;
          v11 = FIELD_U32(a2, 76) + 72 * *(unsigned __int16 *)(*(_DWORD *)(FIELD_U32(a2, 72) + 56 * v7) + 94);
          while ( 1 )
          {
            v12 = v11;
            v13 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)v11 + 56) + 8 * *(unsigned __int8 *)(v9 + 16 * v10 + 16));
            v23 = &sead__SafeStringBase__vtable;
            v24 = v13 + 2;
            (*(void (__fastcall **)(_DWORD *))(*a3 + 12))(a3);
            (*(void (__fastcall **)(_DWORD *))(*a3 + 12))(a3);
            v14 = a3[1];
            ((void (__fastcall *)(int (***)()))v23[3])(&v23);
            if ( v14 == v24 )
              break;
            v15 = a3[1];
            for ( i = 1; *(unsigned __int8 *)(v15 + i - 1) == *(unsigned __int8 *)(v24 + i - 1); i += 2 )
            {
              if ( !*(_BYTE *)(v15 + i - 1) )
                goto LABEL_19;
              if ( i > 0x80000 || *(unsigned __int8 *)(v15 + i) != *(unsigned __int8 *)(v24 + i) )
                break;
              if ( !*(_BYTE *)(v15 + i) )
                goto LABEL_19;
            }
            ++v10;
            v11 = v12;
            if ( v10 >= v20 )
              goto LABEL_20;
          }
LABEL_19:
          v17 = v21 + 4 * a5;
          FIELD_U32(v17, 96) = a4;
          FIELD_U32(v17, 104) = v10;
        }
      }
LABEL_20:
      result = v19;
      ++v7;
    }
    while ( v7 != v19 );
  }
  return result;
}
