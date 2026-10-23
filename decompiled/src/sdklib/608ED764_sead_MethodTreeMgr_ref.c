/* sead_MethodTreeMgr_ref
 * address: 0x608ED764   size: 252   group: sdklib
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sead_MethodTreeMgr_ref(_DWORD *a1, _DWORD *a2, int a3, int a4)
{
  int v8; // r7
  int (**v10)(); // [sp+8h] [bp-30h] BYREF
  const char *v11; // [sp+Ch] [bp-2Ch]
  int v12; // [sp+10h] [bp-28h]
  _DWORD *v13; // [sp+18h] [bp-20h]
  _DWORD *v14; // [sp+1Ch] [bp-1Ch]

  (*(void (__fastcall **)(_DWORD *))(*a1 + 44))(a1);
  v10 = &sead__SafeStringBase__vtable;
  v11 = "sead__MethodTreeMgr";
  v8 = sead__ExpHeap__create(0, (int)&v10, a2, 4, 1, 0);
  a1[8] = (*(int (__fastcall **)(_DWORD *, int))(*a1 + 56))(a1, v8);
  (*(void (__fastcall **)(int))(*(_DWORD *)v8 + 20))(v8);
  a1[9] = v8;
  sub_608EF790(&v10, a3);
  v13 = a2;
  v14 = a1;
  if ( *(_DWORD *)a4 )
    v11 = *(const char **)a4;
  if ( FIELD_U32(a4, 4) != -1 )
    v12 = FIELD_U32(a4, 4);
  a1[7] = sub_608EFC88(&v10);
  (*(void (__fastcall **)(_DWORD *))(*a1 + 52))(a1);
  return (*(int (__fastcall **)(_DWORD *, _DWORD *))(*a1 + 48))(a1, a2);
}
