/* sub_60211530
 * address: 0x60211530   size: 748   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_60211530(int a1)
{
  int v2; // r0
  int v3; // r5
  _DWORD *v4; // r5
  const char *v5; // r6
  int v6; // r1
  int i; // r2
  char *v8; // r0
  int j; // r1
  char *v10; // r0
  int k; // r1
  int (**v13)(); // [sp+4h] [bp-2Ch] BYREF
  const char *v14; // [sp+8h] [bp-28h]
  _DWORD v15[9]; // [sp+Ch] [bp-24h] BYREF

  memset(v15, 255, 12);
  v2 = sub_601CF9C0(dword_60C8AEF0);
  sub_6019EC34(v15, (_DWORD *)(v2 + 1032));
  v3 = 0;
  if ( v15[0] == 6 && sub_6022B648(dword_60C8D864, a1 + 284) == 1 && sub_601EABD0(dword_60C8B144) )
  {
    if ( sub_60213380(a1) == 1 )
    {
      v4 = (_DWORD *)sub_601E0010((int)v15);
      v13 = &sead__SafeStringBase__vtable;
      v14 = "F770";
      (*(void (__fastcall **)(_DWORD *))(*v4 + 12))(v4);
      (*(void (__fastcall **)(_DWORD *))(*v4 + 12))(v4);
      v5 = (const char *)v4[1];
      ((void (__fastcall *)(int (***)()))off_60BC0244)(&v13);
      if ( v5 == v14 )
        return 1;
      v6 = v4[1];
      for ( i = 1; *(unsigned __int8 *)(v6 + i - 1) == (unsigned __int8)v14[i - 1]; i += 2 )
      {
        if ( !*(_BYTE *)(v6 + i - 1) )
          return 1;
        if ( i >= 524289 || *(unsigned __int8 *)(v6 + i) != (unsigned __int8)v14[i] )
          break;
        if ( !*(_BYTE *)(v6 + i) )
          return 1;
      }
      (*(void (__fastcall **)(_DWORD *))(*v4 + 12))(v4);
      (*(void (__fastcall **)(_DWORD *))(*v4 + 12))(v4);
      v8 = (char *)v4[1];
      if ( v8 == "F730" )
        return 1;
      for ( j = 0; j < 524289; ++j )
      {
        if ( v8[j] != aF730[j] )
          break;
        if ( !v8[j] )
          return 1;
      }
      (*(void (__fastcall **)(_DWORD *))(*v4 + 12))(v4);
      (*(void (__fastcall **)(_DWORD *))(*v4 + 12))(v4);
      v10 = (char *)v4[1];
      if ( v10 == "F769" )
        return 1;
      for ( k = 0; k < 524289; ++k )
      {
        if ( v10[k] != aF769[k] )
          break;
        if ( !v10[k] )
          return 1;
      }
    }
    v13 = 0;
    sub_601E14F8((int)v15, 2u, (int *)&v13);
    if ( !v13 || (v3 = 1, v13[24] != *(int (**)())(a1 + 292)) )
    {
      v13 = 0;
      sub_601E14F8((int)v15, 3u, (int *)&v13);
      if ( !v13 || (v3 = 1, v13[24] != *(int (**)())(a1 + 292)) )
      {
        v13 = 0;
        sub_601E14F8((int)v15, 5u, (int *)&v13);
        return v13 && v13[24] == *(int (**)())(a1 + 292);
      }
    }
  }
  return v3;
}
