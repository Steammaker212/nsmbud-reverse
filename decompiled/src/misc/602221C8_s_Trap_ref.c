/* s_Trap_ref
 * address: 0x602221C8   size: 1504   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall s_Trap_ref(_DWORD *a1, int a2, int a3)
{
  char *v4; // r5
  char *v5; // r10
  signed int v6; // r6
  int v7; // r0
  bool v8; // cc
  int *v9; // r5
  int *v10; // r6
  signed int v11; // r7
  int v12; // r0
  signed int v13; // r7
  void *v14; // r8
  char *cstr; // r6
  const char *v16; // r5
  void *Model; // r6
  ModelWrapper *v18; // r7
  ModelWrapper *v19; // r0
  char *v20; // r6
  void *v21; // r5
  ModelWrapper *v22; // r6
  ModelWrapper *v23; // r0
  int v24; // r0
  bool v25; // zf
  void *v26; // r5
  ModelWrapper *v27; // r6
  ModelWrapper *v28; // r0
  sead__SafeString v32[5]; // [sp+28h] [bp-100h] BYREF
  sead__SafeString v33[5]; // [sp+54h] [bp-D4h] BYREF
  sead__SafeString identifier; // [sp+80h] [bp-A8h] BYREF
  int v35; // [sp+88h] [bp-A0h]
  int v36; // [sp+8Ch] [bp-9Ch] BYREF
  int (**v37)(); // [sp+ACh] [bp-7Ch] BYREF
  int *v38; // [sp+B0h] [bp-78h]
  int v39; // [sp+B4h] [bp-74h]
  int v40; // [sp+B8h] [bp-70h] BYREF
  int (**v41)(); // [sp+D8h] [bp-50h] BYREF
  char *v42; // [sp+DCh] [bp-4Ch]
  int v43; // [sp+E0h] [bp-48h]
  int v44; // [sp+E4h] [bp-44h] BYREF

  v42 = (char *)&v44;
  v41 = &BufferedSafeStringBase_char_vtable_probably;
  v43 = 32;
  sead__BufferedSafeStringBase__assureTerminationImpl_const((int)&v41);
  v41 = &off_60BD4C38;
  v4 = v42;
  (*(void (__fastcall **)(_DWORD *))(a1[448] + 12))(a1 + 448);
  v5 = (char *)a1[449];
  if ( v4 != v5 )
  {
    (*(void (__fastcall **)(_DWORD *))(a1[448] + 12))(a1 + 448);
    v6 = 0;
    v7 = a1[449];
    while ( *(_BYTE *)(v7 + v6) )
    {
      if ( !*(_BYTE *)(v7 + v6 + 1) )
      {
        ++v6;
        break;
      }
      if ( !*(_BYTE *)(v7 + v6 + 2) )
      {
        v6 += 2;
        break;
      }
      v8 = v6 + 2 <= 0x7FFFF;
      v6 += 3;
      if ( !v8 )
      {
        v6 = 0;
        break;
      }
    }
    if ( v6 >= v43 )
      v6 = v43 - 1;
    qmemcpy(v4, v5, v6);
    v4[v6] = 0;
  }
  v41 = &off_60BD4C20;
  v38 = &v40;
  v37 = &BufferedSafeStringBase_char_vtable_probably;
  v39 = 32;
  sead__BufferedSafeStringBase__assureTerminationImpl_const((int)&v37);
  v37 = &off_60BD4C38;
  v9 = v38;
  (*(void (__fastcall **)(_DWORD *))(a1[448] + 12))(a1 + 448);
  v10 = (int *)a1[449];
  if ( v9 != v10 )
  {
    (*(void (__fastcall **)(_DWORD *))(a1[448] + 12))(a1 + 448);
    v11 = 0;
    v12 = a1[449];
    while ( *(_BYTE *)(v12 + v11) )
    {
      if ( !*(_BYTE *)(v12 + v11 + 1) )
      {
        ++v11;
        break;
      }
      if ( !*(_BYTE *)(v12 + v11 + 2) )
      {
        v11 += 2;
        break;
      }
      v8 = v11 + 2 <= 0x7FFFF;
      v11 += 3;
      if ( !v8 )
      {
        v11 = 0;
        break;
      }
    }
    if ( v11 >= v39 )
      v11 = v39 - 1;
    qmemcpy(v9, v10, v11);
    *((_BYTE *)v9 + v11) = 0;
  }
  v13 = 0;
  v37 = &off_60BD4C20;
  sub_6043B2D8(ResourceMgrRelated_instance, &v37, (int)&v37, 0);
  a1[441] = a2;
  a1[442] = a3;
  v14 = (void *)LoadResource(ResourceMgrRelated_instance, &v37);
  identifier.cstr = (char *)&v36;
  identifier.vtable = &BufferedSafeStringBase_char_vtable_probably;
  v35 = 32;
  sead__BufferedSafeStringBase__assureTerminationImpl_const((int)&identifier);
  identifier.vtable = &off_60BD4C38;
  cstr = identifier.cstr;
  ((void (__fastcall *)(int (***)()))v41[3])(&v41);
  v16 = v42;
  if ( cstr != v42 )
  {
    ((void (__fastcall *)(int (***)()))v41[3])(&v41);
    while ( v42[v13] )
    {
      if ( !v42[v13 + 1] )
      {
        ++v13;
        break;
      }
      if ( !v42[v13 + 2] )
      {
        v13 += 2;
        break;
      }
      v8 = v13 + 2 <= 0x7FFFF;
      v13 += 3;
      if ( !v8 )
      {
        v13 = 0;
        break;
      }
    }
    if ( v13 >= v35 )
      v13 = v35 - 1;
    qmemcpy(cstr, v16, v13);
    cstr[v13] = 0;
  }
  identifier.vtable = &off_60BD4C20;
  Model = (void *)Resource_getModel(v14, &identifier, 6, 0, 0, 0, 0, 0, 1, 0);
  v18 = (ModelWrapper *)operator_new_8DE25C(0x30u, 0, 4);
  v19 = ModelWrapper_ctor(v18, Model, 0, 0, 0, 0, 0);
  ModelWrapper_setup(v19, (int)v14, 0, 0);
  a1[1] = v18;
  *((_DWORD *)FIELD_U32(v18, 0x0) + 79) |= 8u;
  (*((void (__fastcall **)(sead__SafeString *))identifier.vtable + 3))(&identifier);
  v20 = identifier.cstr;
  (*((void (__cdecl **)())off_60BD92EC + 3))();
  sub_6017D524(v33, "%s_%s", v20, off_60BD92F0);
  v21 = (void *)Resource_getModel(v14, v33, 6, 64, 0, 8, 0, 0, 2, 0);
  v22 = (ModelWrapper *)operator_new_8DE25C(0x30u, 0, 4);
  v23 = ModelWrapper_ctor(v22, v21, 64, 0, 8, 0, 0);
  ModelWrapper_setup(v23, (int)v14, 0, 0);
  a1[2] = v22;
  *((_DWORD *)FIELD_U32(v22, 0x0) + 79) |= 8u;
  if ( sub_6043AED0(v14, &v37) >= 0 )
  {
    sub_60446088(**(_DWORD **)(a1[2] + 28), (int)v14, (int)&v37);
    *(_DWORD *)(**(_DWORD **)(a1[2] + 28) + 24) = 1065353216;
  }
  v24 = a1[441];
  v25 = v24 == 5;
  if ( v24 == 5 )
    v25 = a1[442] == 0;
  if ( v25 )
  {
    ((void (__fastcall *)(int (***)()))v41[3])(&v41);
    sub_6017D524(v32, "%s_Trap", v42);
    v26 = (void *)Resource_getModel(v14, v32, 6, 1, 0, 1, 0, 0, 1, 0);
    v27 = (ModelWrapper *)operator_new_8DE25C(0x30u, 0, 4);
    v28 = ModelWrapper_ctor(v27, v26, 1, 0, 1, 0, 0);
    ModelWrapper_setup(v28, (int)v14, 0, 0);
    a1[3] = v27;
    *((_DWORD *)FIELD_U32(v27, 0x0) + 79) |= 8u;
  }
  *(_DWORD *)(*(_DWORD *)a1[2] + 36) = 0;
  sub_602227E8(a1);
  return sub_60222950(a1, a1[2]);
}
