/* sub_6018194C
 * address: 0x6018194C   size: 348   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6018194C(int a1, _DWORD *a2)
{
  int result; // r0
  unsigned int v5; // r4
  char *v6; // r2
  unsigned int v7; // r0
  char *v8; // r9
  _DWORD *v9; // r8
  char *v10; // r0
  char *v11; // r11
  int v12; // r1
  int i; // r2
  int (**v14)(); // [sp+4h] [bp-2Ch] BYREF
  char *v15; // [sp+8h] [bp-28h]

  result = -1;
  if ( FIELD_S32(a1, 36) >= 1 )
  {
    v5 = 0;
    v6 = &byte_60B3BA34;
    while ( 1 )
    {
      v7 = 0;
      v8 = v6;
      if ( v5 < 0x100 )
        v7 = v5;
      v9 = (_DWORD *)(a1 + 32 * v7);
      v10 = v6;
      if ( (int)v9[70157] >= 1 )
        v10 = (char *)v9[70156];
      v14 = &sead__SafeStringBase__vtable;
      v15 = v10;
      (*(void (__fastcall **)(_DWORD *))(*a2 + 12))(a2);
      (*(void (__fastcall **)(_DWORD *))(*a2 + 12))(a2);
      v11 = (char *)a2[1];
      ((void (__fastcall *)(int (***)()))v14[3])(&v14);
      if ( v11 == v15 )
        break;
      v12 = a2[1];
      for ( i = 1; *(unsigned __int8 *)(v12 + i - 1) == (unsigned __int8)v15[i - 1]; i += 2 )
      {
        if ( !*(_BYTE *)(v12 + i - 1) )
          return v9[70161];
        if ( i > 0x80000 || *(unsigned __int8 *)(v12 + i) != (unsigned __int8)v15[i] )
          break;
        if ( !*(_BYTE *)(v12 + i) )
          return v9[70161];
      }
      ++v5;
      v6 = v8;
      if ( (signed int)v5 >= FIELD_U32(a1, 36) )
        return -1;
    }
    return v9[70161];
  }
  return result;
}
