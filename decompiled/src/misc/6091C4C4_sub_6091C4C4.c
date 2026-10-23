/* sub_6091C4C4
 * address: 0x6091C4C4   size: 676   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_6091C4C4(int a1, int a2, int a3, void *a4)
{
  int v6; // r5
  int v7; // r1
  unsigned int i; // r9
  int v9; // r0
  int v10; // r4
  signed int v11; // r6
  unsigned int v12; // r0
  _DWORD *v13; // r0
  _DWORD *v14; // r12
  unsigned int v15; // r2
  _DWORD *v16; // r1
  int v17; // r3
  int v18; // r6
  int v19; // r4
  int v20; // r0
  int v21; // r0
  unsigned int v22; // r1
  int v23; // r0
  int v26; // [sp+20h] [bp-40h]
  _DWORD *v27; // [sp+24h] [bp-3Ch]
  _DWORD v28[2]; // [sp+28h] [bp-38h] BYREF
  int (**v29)(); // [sp+30h] [bp-30h] BYREF
  int v30; // [sp+34h] [bp-2Ch]
  int v31[10]; // [sp+38h] [bp-28h] BYREF

  sub_6091C0E4(a1, a2, FIELD_U32(a3, 4), a4);
  v6 = a1 + 4;
  v26 = FIELD_U32(a3, 4);
  if ( v26 )
  {
    v7 = a3 + 8;
    for ( i = 0; i != v26; ++i )
    {
      v31[0] = v7;
      v27 = (_DWORD *)v7;
      v29 = &sead__SafeStringBase__vtable;
      v30 = v7 + 16;
      v9 = sub_6091B3D0(v31);
      v28[0] = &sead__SafeStringBase__vtable;
      v28[1] = v9;
      v10 = *(_DWORD *)(*(_DWORD *)v6 + 28);
      v11 = *(_DWORD *)(v31[0] + 8);
      if ( *(_DWORD *)(*(_DWORD *)v6 + 24) > i )
        v10 += 28 * i;
      sead__SafeStringBase__operator_assign(v10, (int)&v29);
      sead__SafeStringBase__operator_assign(v10 + 8, (int)v28);
      FIELD_U16(v10, 24) = 1;
      if ( v11 >= 1 )
      {
        v12 = 8 * v11 + 8;
        if ( v12 < 8 * v11 )
          v12 = -1;
        if ( !is_mul_ok(8u, v11) )
          v12 = -1;
        v13 = (_DWORD *)sub_608DE334(v12, (int)a4, 4);
        if ( v13 )
        {
          v14 = v13 + 2;
          *v13 = 8;
          v13[1] = v11;
          v15 = 8 * v11 - 8;
          v16 = v13 + 2;
          if ( (((unsigned __int8)(v15 >> 3) + 1) & 3) != 0 )
          {
            v17 = -(((unsigned __int8)(v15 >> 3) + 1) & 3);
            v16 = v13 + 2;
            do
            {
              *v16 = &sead__SafeStringBase__vtable;
              v16[1] = &byte_60B3BA34;
              v16 += 2;
              ++v17;
            }
            while ( v17 );
          }
          if ( v15 >= 0x18 )
          {
            do
            {
              *v16 = &sead__SafeStringBase__vtable;
              v16[1] = &byte_60B3BA34;
              v16[2] = &sead__SafeStringBase__vtable;
              v16[3] = &byte_60B3BA34;
              v16[4] = &sead__SafeStringBase__vtable;
              v16[5] = &byte_60B3BA34;
              v16[6] = &sead__SafeStringBase__vtable;
              v16[7] = &byte_60B3BA34;
              v16 += 8;
            }
            while ( v16 != &v14[2 * v11] );
          }
          FIELD_U32(v10, 16) = v11;
          FIELD_U32(v10, 20) = v14;
        }
      }
      if ( *(int *)(v31[0] + 8) >= 1 )
      {
        v18 = 0;
        v19 = 0;
        do
        {
          v20 = sub_6091B384((int)v31, v19);
          v29 = &sead__SafeStringBase__vtable;
          v30 = v20;
          v21 = *(_DWORD *)(*(_DWORD *)v6 + 28);
          if ( *(_DWORD *)(*(_DWORD *)v6 + 24) > i )
            v21 += 28 * i;
          v22 = FIELD_U32(v21, 16);
          v23 = FIELD_U32(v21, 20);
          if ( v22 > v19 )
            v23 += v18;
          (*(void (__fastcall **)(int, int (***)()))(*(_DWORD *)v23 + 8))(v23, &v29);
          ++v19;
          v18 += 8;
        }
        while ( v19 < *(_DWORD *)(v31[0] + 8) );
      }
      v7 = (int)v27 + *v27;
    }
  }
  return sub_6091C288((_DWORD *)(*(_DWORD *)v6 + 8), (int)a4);
}
