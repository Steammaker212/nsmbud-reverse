/* sub_604511EC
 * address: 0x604511EC   size: 500   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604511EC(_DWORD *a1, _DWORD *a2, int a3)
{
  __int64 v5; // r0
  int v6; // r9
  int v7; // r4
  int v8; // r7
  int v9; // r4
  int i; // r9
  int v11; // r0
  int v12; // r6
  int v13; // r1
  int j; // r2
  int (**v17)(); // [sp+Ch] [bp-2Ch] BYREF
  int v18; // [sp+10h] [bp-28h]

  LODWORD(v5) = sub_60918698(a1[34]);
  v6 = v5;
  if ( (int)v5 >= 1 )
  {
    v7 = 0;
    do
    {
      v8 = sub_60918688(a1[34], v7);
      (*(void (__fastcall **)(_DWORD *))(*a2 + 12))(a2);
      LODWORD(v5) = a2[1];
      if ( v8 == (_DWORD)v5 )
      {
LABEL_11:
        sub_609186C8(a1[34], v7);
        LODWORD(v5) = sub_609186A0(a1[34], v7, a3);
      }
      else
      {
        for ( HIDWORD(v5) = 1;
              *(unsigned __int8 *)(v8 + HIDWORD(v5) - 1) == *(unsigned __int8 *)(v5 + HIDWORD(v5) - 1);
              HIDWORD(v5) += 2 )
        {
          if ( !*(_BYTE *)(v8 + HIDWORD(v5) - 1) )
            goto LABEL_11;
          if ( SHIDWORD(v5) >= 524289
            || *(unsigned __int8 *)(v8 + HIDWORD(v5)) != *(unsigned __int8 *)(v5 + HIDWORD(v5)) )
          {
            break;
          }
          if ( !*(_BYTE *)(v8 + HIDWORD(v5)) )
            goto LABEL_11;
        }
      }
      ++v7;
    }
    while ( v7 != v6 );
  }
  v9 = a1[29];
  if ( v9 >= 1 )
  {
    for ( i = 0; i != v9; ++i )
    {
      v11 = *(_DWORD *)(*(_DWORD *)(a1[25] + 64) + 8 * i);
      v17 = &sead__SafeStringBase__vtable;
      v18 = v11 + 2;
      (*(void (__fastcall **)(_DWORD *))(*a2 + 12))(a2);
      (*(void (__fastcall **)(_DWORD *))(*a2 + 12))(a2);
      v12 = a2[1];
      ((void (__fastcall *)(int (***)()))v17[3])(&v17);
      LODWORD(v5) = v18;
      if ( v12 == v18 )
      {
LABEL_23:
        v5 = FIELD_U64(a3, 144);
        *(_DWORD *)(a1[32] + 4 * i) = FIELD_U32(a3, 136);
        *(_QWORD *)(a1[33] + 8 * i) = v5;
      }
      else
      {
        v13 = a2[1];
        for ( j = 1; *(unsigned __int8 *)(v13 + j - 1) == *(unsigned __int8 *)(v18 + j - 1); j += 2 )
        {
          if ( !*(_BYTE *)(v13 + j - 1) )
            goto LABEL_23;
          if ( j >= 524289 || *(unsigned __int8 *)(v13 + j) != *(unsigned __int8 *)(v18 + j) )
            break;
          if ( !*(_BYTE *)(v13 + j) )
            goto LABEL_23;
        }
      }
    }
  }
  return v5;
}
