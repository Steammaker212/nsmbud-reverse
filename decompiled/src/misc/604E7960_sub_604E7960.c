/* sub_604E7960
 * address: 0x604E7960   size: 752   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604E7960(int a1, int a2)
{
  int result; // r0
  int v4; // r9
  __int16 v5; // r1
  unsigned int v6; // r4
  int v7; // r0
  int v8; // r0
  int v9; // r11
  int i; // r1
  unsigned int v11; // r1
  int v12; // r4
  int v13; // r0
  int v14; // r6
  int j; // r1
  int (**v17)(); // [sp+24h] [bp-44h] BYREF
  int v18; // [sp+28h] [bp-40h]
  __int16 v19; // [sp+2Ch] [bp-3Ch]
  char v20; // [sp+2Eh] [bp-3Ah]
  int (**v21)(); // [sp+30h] [bp-38h] BYREF
  int v22; // [sp+34h] [bp-34h]

  result = dword_60C99DD4;
  if ( dword_60C99DD4 )
  {
    v4 = 0;
    v21 = &sead__SafeStringBase__vtable;
    v22 = dword_60CA5A78;
    v5 = FIELD_U8(dword_60C99DD4, 733) | (FIELD_U8(dword_60C99DD4, 734) << 8);
    v20 = FIELD_U8(dword_60C99DD4, 735);
    v19 = v5;
    while ( 1 )
    {
      if ( (FIELD_U8(result, 736) & (unsigned __int8)(1 << v4)) != 0
        || (result = *((unsigned __int8 *)&v19 + v4), result != 255) )
      {
        v6 = dword_60B03208[v4];
        v7 = sub_6047482C(FIELD_U32(a1, 4), v6);
        if ( v7 )
        {
          v8 = FIELD_U32(v7, 56);
          v17 = &sead__SafeStringBase__vtable;
          v18 = v8;
          ((void (__fastcall *)(int (***)()))v21[3])(&v21);
          ((void (__fastcall *)(int (***)()))v21[3])(&v21);
          v9 = v22;
          ((void (__fastcall *)(int (***)()))v17[3])(&v17);
          result = v18;
          if ( v9 == v18 )
            goto LABEL_30;
          for ( i = 1; *(unsigned __int8 *)(v22 + i - 1) == *(unsigned __int8 *)(v18 + i - 1); i += 2 )
          {
            if ( !*(_BYTE *)(v22 + i - 1) )
              goto LABEL_30;
            if ( i >= 524289 || *(unsigned __int8 *)(v22 + i) != *(unsigned __int8 *)(v18 + i) )
              break;
            if ( !*(_BYTE *)(v22 + i) )
              goto LABEL_30;
          }
        }
        v11 = dword_60B031FC[v4];
        if ( v11 >= 0xD )
          v11 = 0;
        result = sub_6047467C(*(_DWORD **)(a1 + 4), v6, &v21, (int)&dword_60CA5C20[2 * v11], 1.0, 0);
        if ( result == 1 )
        {
          result = sub_6047482C(FIELD_U32(a1, 4), v6);
          v12 = result;
          if ( result )
          {
            v13 = FIELD_U32(result, 56);
            v17 = &sead__SafeStringBase__vtable;
            v18 = v13;
            ((void (__fastcall *)(int (***)()))v21[3])(&v21);
            ((void (__fastcall *)(int (***)()))v21[3])(&v21);
            v14 = v22;
            ((void (__fastcall *)(int (***)()))v17[3])(&v17);
            result = v18;
            if ( v14 == v18 )
            {
LABEL_28:
              result = a2;
              if ( a2 == 1 )
                result = (*(int (__fastcall **)(int))(*(_DWORD *)v12 + 108))(v12);
            }
            else
            {
              for ( j = 1; *(unsigned __int8 *)(v22 + j - 1) == *(unsigned __int8 *)(v18 + j - 1); j += 2 )
              {
                if ( !*(_BYTE *)(v22 + j - 1) )
                  goto LABEL_28;
                if ( j >= 524289 || *(unsigned __int8 *)(v22 + j) != *(unsigned __int8 *)(v18 + j) )
                  break;
                if ( !*(_BYTE *)(v22 + j) )
                  goto LABEL_28;
              }
            }
          }
        }
      }
LABEL_30:
      if ( ++v4 == 3 )
        return result;
      result = dword_60C99DD4;
    }
  }
  return result;
}
