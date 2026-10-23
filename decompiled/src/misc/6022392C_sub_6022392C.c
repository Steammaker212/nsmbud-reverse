/* sub_6022392C
 * address: 0x6022392C   size: 592   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6022392C(int a1)
{
  int result; // r0
  int v3; // r4
  int v4; // r0
  int *v5; // r8
  int *v6; // r9
  signed int v7; // r10
  bool v8; // cc
  char *v9; // r0
  int v10; // r0
  int *v11; // r2
  int v12; // [sp+4h] [bp-84h]
  int v13; // [sp+8h] [bp-80h]
  int v14; // [sp+Ch] [bp-7Ch]
  int v15; // [sp+24h] [bp-64h]
  int v16; // [sp+28h] [bp-60h]
  int (**v17)(); // [sp+2Ch] [bp-5Ch] BYREF
  int *v18; // [sp+30h] [bp-58h]
  int v19; // [sp+34h] [bp-54h]
  int (**v20)(); // [sp+38h] [bp-50h] BYREF
  int *v21; // [sp+3Ch] [bp-4Ch]
  int v22; // [sp+40h] [bp-48h]
  int v23; // [sp+44h] [bp-44h] BYREF

  v13 = sub_601A443C(dword_60C89E18, FIELD_U32(a1, 1764), FIELD_U32(a1, 1768));
  v14 = a1;
  v15 = **(_DWORD **)(a1 + 4);
  result = (*(int (**)(void))(*(_DWORD *)v15 + 92))();
  v16 = result;
  if ( result >= 1 )
  {
    v3 = 0;
    v12 = 0;
    do
    {
      v4 = (*(int (__fastcall **)(int, int))(*(_DWORD *)v15 + 88))(v15, v3);
      v17 = &sead__SafeStringBase__vtable;
      v18 = (int *)v4;
      v21 = &v23;
      v20 = &BufferedSafeStringBase_char_vtable_probably;
      v22 = 32;
      sead__BufferedSafeStringBase__assureTerminationImpl_const((int)&v20);
      v20 = &off_60BD4C38;
      v5 = v21;
      ((void (__fastcall *)(int (***)()))v17[3])(&v17);
      v6 = v18;
      if ( v5 != v18 )
      {
        ((void (__fastcall *)(int (***)()))v17[3])(&v17);
        v7 = 0;
        while ( *((_BYTE *)v18 + v7) )
        {
          if ( !*((_BYTE *)v18 + v7 + 1) )
          {
            ++v7;
            break;
          }
          if ( !*((_BYTE *)v18 + v7 + 2) )
          {
            v7 += 2;
            break;
          }
          v8 = v7 + 2 < 0x80000;
          v7 += 3;
          if ( !v8 )
          {
            v7 = 0;
            break;
          }
        }
        if ( v7 >= v22 )
          v7 = v22 - 1;
        qmemcpy(v5, v6, v7);
        *((_BYTE *)v5 + v7) = 0;
      }
      v20 = &off_60BD4C20;
      v9 = (char *)v21;
      if ( v22 <= 0 )
        v9 = &byte_60B3BA34;
      if ( *v9 == 70 )
      {
        v10 = sub_60181AB4(v13, &v20);
        v11 = *(int **)(v14 + 1768);
        v17 = *(int (***)())(v14 + 1764);
        v18 = v11;
        v19 = v10;
        if ( sub_601DA114((int)&v17) )
          sub_6081F01C(dword_60CC6D78, v12++, &v17);
      }
      result = v16;
      ++v3;
    }
    while ( v3 != v16 );
  }
  return result;
}
