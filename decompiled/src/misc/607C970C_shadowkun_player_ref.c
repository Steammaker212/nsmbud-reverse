/* shadowkun_player_ref
 * address: 0x607C970C   size: 576   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall shadowkun_player_ref(int a1, int r1_0, int a3, int a5, char unk4)
{
  int v6; // r0
  const char *v7; // r1
  int v8; // r0
  void *v9; // r8
  int Model; // r0
  void *v11; // r6
  ModelWrapper *v12; // r7
  ModelWrapper *v13; // r0
  sead__SafeString a2; // [sp+1Ch] [bp-3Ch] BYREF
  int (**v16)(); // [sp+24h] [bp-34h] BYREF
  const char *v17; // [sp+28h] [bp-30h]
  int v18; // [sp+2Ch] [bp-2Ch]
  int v19; // [sp+30h] [bp-28h] BYREF

  sub_6078C444(a1, (int)&dword_60CC5224, r1_0, a3, a5, unk4);
  *(_DWORD *)a1 = off_60C25998;
  v16 = &sead__SafeStringBase__vtable;
  v17 = "shadowkun_player";
  FIELD_U32(a1, 544) = LoadResource(ResourceMgrRelated_instance, &v16);
  FIELD_U32(a1, 568) = 0;
  FIELD_U32(a1, 572) = 1065353216;
  FIELD_U8(a1, 576) = 0;
  FIELD_U8(dword_60C9BBD4, 18064) = FIELD_U8(a1, 540);
  v16 = 0;
  v17 = 0;
  v18 = 0;
  sub_608DEB0C(&v16, 2, (int)&v19);
  v6 = (int)v16;
  v7 = v17;
  if ( (int)v16 < (int)v17 )
  {
    *(_DWORD *)(v18 + 4 * (_DWORD)v16) = FIELD_U32(a1, 20);
    v6 = (int)v16 + 1;
    v16 = (int (**)())((char *)v16 + 1);
    v7 = v17;
  }
  if ( v6 < (int)v7 )
  {
    *(_DWORD *)(v18 + 4 * v6) = FIELD_U32(a1, 544);
    v16 = (int (**)())((char *)v16 + 1);
  }
  v8 = sub_60792ACC(a1);
  v9 = *(void **)(a1 + 16);
  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "shadowkun";
  if ( v8 == 1 )
    Model = Resource_getModel(v9, &a2, 6, 3, 2, 4, 0, 0, 1, 0);
  else
    Model = Resource_getModel2(v9, &a2, 3, 2, 4, 0, 0, 0, 0);
  v11 = (void *)Model;
  v12 = (ModelWrapper *)operator_new_8DE25C(0x30u, 0, 4);
  v13 = ModelWrapper_ctor(v12, v11, 3, 2, 4, 0, 0);
  ModelWrapper_setup(v13, v9, (int *)&v16, 0);
  FIELD_U32(a1, 240) = v12;
  FIELD_U8(dword_60C9BBD4, 18064) = 1;
  sub_6078E5A8((_DWORD *)a1, FIELD_U32(a1, 472));
  return a1;
}
