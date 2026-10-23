/* sub_60221178
 * address: 0x60221178   size: 448   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60221178(int a1, int a2, _DWORD *a3)
{
  signed int v4; // r6
  _DWORD *v6; // r7
  void *v7; // r9
  const void *v8; // r8
  int v9; // r0
  bool v10; // cc
  signed int v11; // r0
  _DWORD v13[2]; // [sp+0h] [bp-30h] BYREF
  _DWORD v14[10]; // [sp+8h] [bp-28h] BYREF

  v4 = 0;
  FIELD_U32(a1, 12) = a1 + 20;
  *(_DWORD *)a1 = 0;
  FIELD_U32(a1, 4) = a2;
  FIELD_U32(a1, 8) = &BufferedSafeStringBase_char_vtable_probably;
  v6 = (_DWORD *)(a1 + 8);
  FIELD_U32(a1, 16) = 32;
  sead__BufferedSafeStringBase__assureTerminationImpl_const(a1 + 8);
  *v6 = &off_60BD4C38;
  v7 = *(void **)(a1 + 12);
  (*(void (__fastcall **)(_DWORD *))(*a3 + 12))(a3);
  v8 = (const void *)a3[1];
  if ( v7 != v8 )
  {
    (*(void (__fastcall **)(_DWORD *))(*a3 + 12))(a3);
    v9 = a3[1];
    while ( *(_BYTE *)(v9 + v4) )
    {
      if ( !*(_BYTE *)(v9 + v4 + 1) )
      {
        ++v4;
        break;
      }
      if ( !*(_BYTE *)(v9 + v4 + 2) )
      {
        v4 += 2;
        break;
      }
      v10 = v4 + 2 < 0x80000;
      v4 += 3;
      if ( !v10 )
      {
        v4 = 0;
        break;
      }
    }
    v11 = FIELD_U32(a1, 16);
    if ( v4 >= v11 )
      v4 = v11 - 1;
    qmemcpy(v7, v8, v4);
    *((_BYTE *)v7 + v4) = 0;
  }
  FIELD_U32(a1, 8) = &off_60BD4C20;
  FIELD_U8(a1, 52) = 0;
  FIELD_U8(a1, 53) = 0;
  FIELD_U32(a1, 56) = 0;
  FIELD_U32(a1, 60) = 0;
  FIELD_U32(a1, 64) = 0;
  if ( sub_6018506C(a3, &off_60BD92E4) != -1 )
    FIELD_U8(a1, 52) = 1;
  v14[0] = &sead__SafeStringBase__vtable;
  v14[1] = "Ocean";
  if ( sub_6018506C(a3, v14) != -1
    || (v13[0] = &sead__SafeStringBase__vtable, v13[1] = "Doku", sub_6018506C(a3, v13) != -1) )
  {
    FIELD_U8(a1, 53) = 1;
  }
  return a1;
}
