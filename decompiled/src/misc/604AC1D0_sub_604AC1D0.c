/* sub_604AC1D0
 * address: 0x604AC1D0   size: 584   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604AC1D0(int a1, int a2)
{
  int v2; // r10
  int v3; // r4
  int v4; // r0
  int v5; // r7
  int v6; // r0
  int v7; // r9
  int j; // r1
  unsigned int v9; // r1
  int v10; // r0
  int v11; // r7
  int v12; // r0
  int v13; // r9
  int i; // r1
  int (**v16)(); // [sp+4h] [bp-34h] BYREF
  int v17; // [sp+8h] [bp-30h]
  int (**v18)(); // [sp+Ch] [bp-2Ch] BYREF
  int v19; // [sp+10h] [bp-28h]

  v2 = a1 + 64;
  v3 = 0;
  v18 = &sead__SafeStringBase__vtable;
  v19 = dword_60CA178C;
  if ( !a2 )
  {
    while ( 1 )
    {
      v9 = dword_60B02D38[v3];
      if ( v9 != 5 )
      {
        v10 = sub_6047482C(v2, v9);
        v11 = v10;
        if ( v10 )
        {
          v12 = FIELD_U32(v10, 56);
          v16 = &sead__SafeStringBase__vtable;
          v17 = v12;
          ((void (__fastcall *)(int (***)()))v18[3])(&v18);
          ((void (__fastcall *)(int (***)()))v18[3])(&v18);
          v13 = v19;
          ((void (__fastcall *)(int (***)()))v16[3])(&v16);
          if ( v13 == v17 )
          {
LABEL_24:
            if ( (FIELD_U8(v11, 51) & 1) == 0 )
              return 0;
          }
          else
          {
            for ( i = 1; *(unsigned __int8 *)(v19 + i - 1) == *(unsigned __int8 *)(v17 + i - 1); i += 2 )
            {
              if ( !*(_BYTE *)(v19 + i - 1) )
                goto LABEL_24;
              if ( i >= 524289 || *(unsigned __int8 *)(v19 + i) != *(unsigned __int8 *)(v17 + i) )
                break;
              if ( !*(_BYTE *)(v19 + i) )
                goto LABEL_24;
            }
          }
        }
      }
      if ( ++v3 >= 4 )
        return 1;
    }
  }
  do
  {
    v4 = sub_6047482C(v2, dword_60B02D38[v3]);
    v5 = v4;
    if ( v4 )
    {
      v6 = FIELD_U32(v4, 56);
      v16 = &sead__SafeStringBase__vtable;
      v17 = v6;
      ((void (__fastcall *)(int (***)()))v18[3])(&v18);
      ((void (__fastcall *)(int (***)()))v18[3])(&v18);
      v7 = v19;
      ((void (__fastcall *)(int (***)()))v16[3])(&v16);
      if ( v7 == v17 )
      {
LABEL_11:
        if ( (FIELD_U8(v5, 51) & 1) == 0 )
          return 0;
      }
      else
      {
        for ( j = 1; *(unsigned __int8 *)(v19 + j - 1) == *(unsigned __int8 *)(v17 + j - 1); j += 2 )
        {
          if ( !*(_BYTE *)(v19 + j - 1) )
            goto LABEL_11;
          if ( j >= 524289 || *(unsigned __int8 *)(v19 + j) != *(unsigned __int8 *)(v17 + j) )
            break;
          if ( !*(_BYTE *)(v19 + j) )
            goto LABEL_11;
        }
      }
    }
    ++v3;
  }
  while ( v3 < 4 );
  return 1;
}
