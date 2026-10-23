/* sub_6016B268
 * address: 0x6016B268   size: 556   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_6016B268(_DWORD *a1, _DWORD *a2)
{
  _DWORD *v4; // r7
  _DWORD *v5; // r6
  void *v6; // r6
  const void *v7; // r8
  int v8; // r0
  signed int v9; // r7
  bool v10; // cc
  signed int v11; // r0
  _DWORD *v12; // r7
  void *v13; // r5
  const void *v14; // r8
  int v15; // r0
  signed int v16; // r7
  signed int v17; // r0

  *a1 = *a2;
  v4 = (_DWORD *)a2[1];
  a1[2] = a1 + 4;
  a1[1] = &BufferedSafeStringBase_char_vtable_probably;
  v5 = a1 + 1;
  a1[3] = 32;
  sead__BufferedSafeStringBase__assureTerminationImpl_const((int)(a1 + 1));
  *v5 = &off_60BD4C38;
  v6 = (void *)a1[2];
  (*(void (__fastcall **)(_DWORD *))(*v4 + 12))(v4);
  v7 = (const void *)v4[1];
  if ( v6 != v7 )
  {
    (*(void (__fastcall **)(_DWORD *))(*v4 + 12))(v4);
    v8 = v4[1];
    v9 = 0;
    while ( *(_BYTE *)(v8 + v9) )
    {
      if ( !*(_BYTE *)(v8 + v9 + 1) )
      {
        ++v9;
        break;
      }
      if ( !*(_BYTE *)(v8 + v9 + 2) )
      {
        v9 += 2;
        break;
      }
      v10 = v9 + 2 <= 0x7FFFF;
      v9 += 3;
      if ( !v10 )
      {
        v9 = 0;
        break;
      }
    }
    v11 = a1[3];
    if ( v9 >= v11 )
      v9 = v11 - 1;
    qmemcpy(v6, v7, v9);
    *((_BYTE *)v6 + v9) = 0;
  }
  a1[1] = &off_60BD4C20;
  v12 = (_DWORD *)a2[2];
  a1[13] = a1 + 15;
  a1[12] = &BufferedSafeStringBase_char_vtable_probably;
  a1[14] = 64;
  sead__BufferedSafeStringBase__assureTerminationImpl_const((int)(a1 + 12));
  a1[12] = &off_60BD4C08;
  v13 = (void *)a1[13];
  (*(void (__fastcall **)(_DWORD *))(*v12 + 12))(v12);
  v14 = (const void *)v12[1];
  if ( v13 != v14 )
  {
    (*(void (__fastcall **)(_DWORD *))(*v12 + 12))(v12);
    v15 = v12[1];
    v16 = 0;
    while ( *(_BYTE *)(v15 + v16) )
    {
      if ( !*(_BYTE *)(v15 + v16 + 1) )
      {
        ++v16;
        break;
      }
      if ( !*(_BYTE *)(v15 + v16 + 2) )
      {
        v16 += 2;
        break;
      }
      v10 = v16 + 2 <= 0x7FFFF;
      v16 += 3;
      if ( !v10 )
      {
        v16 = 0;
        break;
      }
    }
    v17 = a1[14];
    if ( v16 >= v17 )
      v16 = v17 - 1;
    qmemcpy(v13, v14, v16);
    *((_BYTE *)v13 + v16) = 0;
  }
  a1[12] = &off_60BD4BF0;
  return a1;
}
