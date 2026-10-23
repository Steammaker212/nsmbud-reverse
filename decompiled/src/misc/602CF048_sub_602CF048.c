/* sub_602CF048
 * address: 0x602CF048   size: 356   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_602CF048(int a1, int a2, int a3, float a4)
{
  int result; // r0
  int *v6; // r5
  int v7; // r7
  _DWORD *v8; // r6
  int v9; // r9
  int ResArchiveById; // r0
  float v11; // s1
  _DWORD v14[2]; // [sp+10h] [bp-48h] BYREF
  _BYTE v15[8]; // [sp+18h] [bp-40h] BYREF
  int (**v16)(); // [sp+20h] [bp-38h] BYREF
  char *v17; // [sp+24h] [bp-34h]

  v6 = (int *)(a1 + 6576);
  result = FIELD_U32(a1, 6576);
  if ( result != a2 )
  {
    *v6 = a2;
    v7 = 0;
    v8 = (_DWORD *)(a1 + 6316);
    while ( 1 )
    {
      v16 = &sead__SafeStringBase__vtable;
      v17 = &byte_60B3BA34;
      if ( a2 )
      {
        (*(void (__fastcall **)(_BYTE *, _DWORD *))(*v8 + 44))(v15, v8);
        sead__SafeStringBase__operator_assign((int)&v16, (int)v15);
        v9 = 1;
      }
      else
      {
        (*(void (__fastcall **)(_BYTE *, _DWORD *))(*v8 + 40))(v15, v8);
        sead__SafeStringBase__operator_assign((int)&v16, (int)v15);
        v9 = 0;
      }
      ResArchiveById = Profile__getResArchiveById(*(Profile **)(a1 + 12), 0);
      v14[0] = &sead__SafeStringBase__vtable;
      v11 = flt_60AF2010[v9];
      v14[1] = v17;
      sub_602D1D84(v8, v14, ResArchiveById, a3, a4, v11);
      result = sub_602D1DFC(v8, flt_60AFEA8C[5 * v9 + v7]);
      if ( v7 == 4 )
        break;
      v8 = (_DWORD *)v8[30];
      a2 = *v6;
      ++v7;
    }
  }
  return result;
}
