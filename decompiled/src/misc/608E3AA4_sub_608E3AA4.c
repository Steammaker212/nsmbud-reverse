/* sub_608E3AA4
 * address: 0x608E3AA4   size: 612   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608E3AA4(int a1, _DWORD *a2, int a3, _DWORD *a4)
{
  signed int v5; // r7
  void *v8; // r6
  const void *v9; // r10
  int v10; // r0
  bool v11; // cc
  signed int v12; // r0
  void *v13; // r6
  const void *v14; // r5
  int v15; // r0
  signed int v16; // r7
  signed int v17; // r0

  v5 = 0;
  *(_DWORD *)a1 = off_60C5C1B4;
  FIELD_U32(a1, 16) = 0;
  FIELD_U32(a1, 20) = 0;
  FIELD_U32(a1, 24) = a1;
  FIELD_U32(a1, 28) = 0;
  sead_IDisposer_ctor((sead_IDisposer *)a1);
  *(_DWORD *)a1 = off_60C5C1B4;
  FIELD_U32(a1, 36) = a1 + 44;
  FIELD_U32(a1, 32) = &BufferedSafeStringBase_char_vtable_probably;
  FIELD_U32(a1, 40) = 32;
  sead__BufferedSafeStringBase__assureTerminationImpl_const(a1 + 32);
  **(_BYTE **)(a1 + 36) = 0;
  FIELD_U32(a1, 32) = &off_60BD4C20;
  FIELD_U8(a1, 76) = 1;
  v8 = *(void **)(a1 + 36);
  (*(void (__fastcall **)(_DWORD *))(*a2 + 12))(a2);
  v9 = (const void *)a2[1];
  if ( v8 != v9 )
  {
    (*(void (__fastcall **)(_DWORD *))(*a2 + 12))(a2);
    v10 = a2[1];
    while ( *(_BYTE *)(v10 + v5) )
    {
      if ( !*(_BYTE *)(v10 + v5 + 1) )
      {
        ++v5;
        break;
      }
      if ( !*(_BYTE *)(v10 + v5 + 2) )
      {
        v5 += 2;
        break;
      }
      v11 = v5 + 2 <= 0x7FFFF;
      v5 += 3;
      if ( !v11 )
      {
        v5 = 0;
        break;
      }
    }
    v12 = FIELD_U32(a1, 40);
    if ( v5 >= v12 )
      v5 = v12 - 1;
    qmemcpy(v8, v9, v5);
    *((_BYTE *)v8 + v5) = 0;
  }
  *(_DWORD *)a1 = off_60C5C09C;
  FIELD_U32(a1, 80) = a3;
  FIELD_U32(a1, 88) = a1 + 96;
  FIELD_U32(a1, 84) = &BufferedSafeStringBase_char_vtable_probably;
  FIELD_U32(a1, 92) = 256;
  sead__BufferedSafeStringBase__assureTerminationImpl_const(a1 + 84);
  **(_BYTE **)(a1 + 88) = 0;
  FIELD_U32(a1, 84) = &off_60BD94BC;
  if ( a3 )
  {
    v13 = *(void **)(a1 + 88);
    (*(void (__fastcall **)(_DWORD *))(*a4 + 12))(a4);
    v14 = (const void *)a4[1];
    if ( v13 != v14 )
    {
      (*(void (__fastcall **)(_DWORD *))(*a4 + 12))(a4);
      v15 = a4[1];
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
        v11 = v16 + 2 <= 0x7FFFF;
        v16 += 3;
        if ( !v11 )
        {
          v16 = 0;
          break;
        }
      }
      v17 = FIELD_U32(a1, 92);
      if ( v16 >= v17 )
        v16 = v17 - 1;
      qmemcpy(v13, v14, v16);
      *((_BYTE *)v13 + v16) = 0;
    }
  }
  return a1;
}
