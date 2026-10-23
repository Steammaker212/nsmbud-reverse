/* sub_60220CDC
 * address: 0x60220CDC   size: 344   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60220CDC(int a1, int a2, int a3, _DWORD *a4, int a5)
{
  signed int v7; // r6
  _DWORD *v9; // r7
  void *v10; // r10
  const void *v11; // r9
  int v12; // r0
  bool v13; // cc
  signed int v14; // r0

  v7 = 0;
  FIELD_U32(a1, 4) = a2;
  FIELD_U32(a1, 8) = a3;
  FIELD_U32(a1, 12) = 0;
  FIELD_U32(a1, 16) = 0;
  FIELD_U32(a1, 20) = a1;
  FIELD_U32(a1, 24) = 0;
  *(_DWORD *)a1 = off_60BD92A0;
  FIELD_U32(a1, 32) = a5;
  FIELD_U8(a1, 36) = 0;
  FIELD_U32(a1, 44) = a1 + 52;
  FIELD_U32(a1, 40) = &BufferedSafeStringBase_char_vtable_probably;
  v9 = (_DWORD *)(a1 + 40);
  FIELD_U32(a1, 48) = 32;
  sead__BufferedSafeStringBase__assureTerminationImpl_const(a1 + 40);
  *v9 = &off_60BD4C38;
  v10 = *(void **)(a1 + 44);
  (*(void (__fastcall **)(_DWORD *))(*a4 + 12))(a4);
  v11 = (const void *)a4[1];
  if ( v10 != v11 )
  {
    (*(void (__fastcall **)(_DWORD *))(*a4 + 12))(a4);
    v12 = a4[1];
    while ( *(_BYTE *)(v12 + v7) )
    {
      if ( !*(_BYTE *)(v12 + v7 + 1) )
      {
        ++v7;
        break;
      }
      if ( !*(_BYTE *)(v12 + v7 + 2) )
      {
        v7 += 2;
        break;
      }
      v13 = v7 + 2 < 0x80000;
      v7 += 3;
      if ( !v13 )
      {
        v7 = 0;
        break;
      }
    }
    v14 = FIELD_U32(a1, 48);
    if ( v7 >= v14 )
      v7 = v14 - 1;
    qmemcpy(v10, v11, v7);
    *((_BYTE *)v10 + v7) = 0;
  }
  FIELD_U32(a1, 40) = &off_60BD4C20;
  FIELD_U32(a1, 28) = sub_60225C6C(a2);
  return a1;
}
