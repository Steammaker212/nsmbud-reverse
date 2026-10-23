/* sub_609548CC
 * address: 0x609548CC   size: 640   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_609548CC(_DWORD *a1, int a2)
{
  int v4; // r0
  int v5; // r6
  __int64 v6; // kr00_8
  unsigned int v7; // r0
  _DWORD *v8; // r0
  int v9; // r5
  _DWORD *v10; // r9
  int v11; // r0
  int v12; // r5
  int i; // r6
  int v14; // r6
  int v15; // r8
  _DWORD *v16; // r0
  _DWORD *v17; // r6
  _DWORD *v18; // r7
  int v19; // r0
  char *v20; // r4
  signed int v21; // r5
  bool v22; // cc
  signed int v23; // r0
  char v24; // [sp+4h] [bp-2Ch] BYREF

  v4 = (*(int (__fastcall **)(_DWORD *))(*a1 + 16))(a1);
  v5 = v4;
  if ( v4 >= 1 )
  {
    v6 = 1044LL * (unsigned int)v4;
    v7 = v6 + 8;
    if ( (int)v6 + 8 < (unsigned int)v6 )
      v7 = -1;
    if ( HIDWORD(v6) )
      v7 = -1;
    v8 = (_DWORD *)sub_608DE334(v7, a2, 4);
    if ( v8 )
    {
      v9 = 1044 * v5;
      v10 = v8 + 2;
      *v8 = 1044;
      v8[1] = v5;
      v11 = (int)(v8 + 2);
      do
      {
        v9 -= 1044;
        v11 = Icon_IN_ref(v11) + 1044;
      }
      while ( v9 );
      a1[30] = v5;
      a1[31] = v10;
    }
  }
  v12 = a1[30];
  if ( v12 )
  {
    for ( i = 0; i != v12; ++i )
      (*(void (__fastcall **)(char *, _DWORD *, int))(*a1 + 20))(&v24, a1, i);
  }
  (*(void (__fastcall **)(_DWORD *, int))(*a1 + 24))(a1, a2);
  v14 = FIELD_U32(dword_60CD0B50, 60);
  if ( v14 )
  {
    v15 = operator_new_8DE25C(0x4A0u, *(void **)(dword_60CD0B50 + 60), 4);
    sub_609566B0();
    a1[103] = v15;
    v16 = (_DWORD *)sub_608DE334(0x420u, v14, 4);
    v17 = v16;
    if ( v16 )
    {
      *v16 = 524;
      v16[1] = 2;
      v16[3] = v16 + 5;
      v16[2] = &BufferedSafeStringBase_char_vtable_probably;
      v18 = v16 + 2;
      v16[4] = 512;
      sead__BufferedSafeStringBase__assureTerminationImpl_const((int)(v16 + 2));
      *(_BYTE *)v17[3] = 0;
      *v18 = &off_60BF9F58;
      v17[134] = v17 + 136;
      v17[133] = &BufferedSafeStringBase_char_vtable_probably;
      v17[135] = 512;
      sead__BufferedSafeStringBase__assureTerminationImpl_const((int)(v17 + 133));
      *(_BYTE *)v17[134] = 0;
      v17[133] = &off_60BF9F58;
      FIELD_U32(v15, 884) = 2;
      FIELD_U32(v15, 888) = v18;
    }
    sub_60954B6C(a1, 3);
    v19 = a1[103];
    v20 = *(char **)(v19 + 920);
    if ( v20 != off_60C5CB34 )
    {
      v21 = 0;
      while ( off_60C5CB34[v21] )
      {
        if ( !off_60C5CB34[v21 + 1] )
        {
          ++v21;
          break;
        }
        if ( !off_60C5CB34[v21 + 2] )
        {
          v21 += 2;
          break;
        }
        v22 = v21 + 2 < 0x80000;
        v21 += 3;
        if ( !v22 )
        {
          v21 = 0;
          break;
        }
      }
      v23 = FIELD_U32(v19, 924);
      if ( v21 >= v23 )
        v21 = v23 - 1;
      qmemcpy(v20, off_60C5CB34, v21);
      v20[v21] = 0;
    }
  }
}
