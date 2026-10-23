/* sub_60224724
 * address: 0x60224724   size: 720   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60224724(int a1)
{
  int v2; // r8
  int result; // r0
  signed int v4; // r4
  unsigned int i; // r5
  _DWORD *v6; // r4
  int *v7; // r7
  int *v8; // r6
  int v9; // r0
  signed int v10; // r8
  bool v11; // cc
  int v12; // r8
  unsigned int j; // r5
  _DWORD *v14; // r4
  int *v15; // r7
  int *v16; // r6
  int v17; // r0
  signed int v18; // r4
  int v19; // [sp+4h] [bp-5Ch]
  int v20; // [sp+8h] [bp-58h]
  signed int v21; // [sp+Ch] [bp-54h]
  int (**v22)(); // [sp+10h] [bp-50h] BYREF
  int *v23; // [sp+14h] [bp-4Ch]
  int v24; // [sp+18h] [bp-48h]
  int v25; // [sp+1Ch] [bp-44h] BYREF

  v2 = sub_601A443C(dword_60C89E18, FIELD_U32(a1, 1764), FIELD_U32(a1, 1768));
  v23 = &v25;
  v22 = &BufferedSafeStringBase_char_vtable_probably;
  v24 = 32;
  sead__BufferedSafeStringBase__assureTerminationImpl_const((int)&v22);
  *(_BYTE *)v23 = 0;
  v22 = &off_60BD4C20;
  result = FIELD_U32(v2, 28);
  if ( result >= 1 )
  {
    v4 = 0;
    v20 = v2;
    do
    {
      v19 = sub_60182F10(v2, 0, v4);
      v21 = v4;
      if ( v19 >= 1 )
      {
        for ( i = 0; i != v19; ++i )
        {
          v6 = (_DWORD *)sub_60182ED0(v2, 0, v4, i);
          v7 = v23;
          (*(void (__fastcall **)(_DWORD *))(*v6 + 12))(v6);
          v8 = (int *)v6[1];
          if ( v7 != v8 )
          {
            (*(void (__fastcall **)(_DWORD *))(*v6 + 12))(v6);
            v9 = v6[1];
            v10 = 0;
            while ( *(_BYTE *)(v9 + v10) )
            {
              if ( !*(_BYTE *)(v9 + v10 + 1) )
              {
                ++v10;
                break;
              }
              if ( !*(_BYTE *)(v9 + v10 + 2) )
              {
                v10 += 2;
                break;
              }
              v11 = v10 + 2 <= 0x7FFFF;
              v10 += 3;
              if ( !v11 )
              {
                v10 = 0;
                break;
              }
            }
            if ( v10 >= v24 )
              v10 = v24 - 1;
            qmemcpy(v7, v8, v10);
            *((_BYTE *)v7 + v10) = 0;
            v2 = v20;
          }
          if ( !sub_60226700(a1, &v22) )
            sub_602268CC(a1, &v22);
          v4 = v21;
        }
      }
      v12 = sub_60182F10(v2, 1, v4);
      if ( v12 >= 1 )
      {
        for ( j = 0; j != v12; ++j )
        {
          v14 = (_DWORD *)sub_60182ED0(v20, 1u, v4, j);
          v15 = v23;
          (*(void (__fastcall **)(_DWORD *))(*v14 + 12))(v14);
          v16 = (int *)v14[1];
          if ( v15 != v16 )
          {
            (*(void (__fastcall **)(_DWORD *))(*v14 + 12))(v14);
            v17 = v14[1];
            v18 = 0;
            while ( *(_BYTE *)(v17 + v18) )
            {
              if ( !*(_BYTE *)(v17 + v18 + 1) )
              {
                ++v18;
                break;
              }
              if ( !*(_BYTE *)(v17 + v18 + 2) )
              {
                v18 += 2;
                break;
              }
              v11 = v18 + 2 <= 0x7FFFF;
              v18 += 3;
              if ( !v11 )
              {
                v18 = 0;
                break;
              }
            }
            if ( v18 >= v24 )
              v18 = v24 - 1;
            qmemcpy(v15, v16, v18);
            *((_BYTE *)v15 + v18) = 0;
          }
          if ( !sub_60226700(a1, &v22) )
            sub_602268CC(a1, &v22);
          v4 = v21;
        }
      }
      v2 = v20;
      ++v4;
      result = FIELD_U32(v20, 28);
    }
    while ( v4 < result );
  }
  return result;
}
