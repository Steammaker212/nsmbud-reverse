/* sub_6023816C
 * address: 0x6023816C   size: 796   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6023816C(_DWORD *a1, _DWORD *a2)
{
  int v4; // r8
  int v5; // r7
  int v6; // r0
  int v7; // r0
  int v8; // r0
  int v9; // r0
  int v10; // r0
  _DWORD *v11; // r6
  int v12; // r9
  int v13; // r0
  int v14; // r0
  sead__SafeString path; // [sp+8h] [bp-88h] BYREF
  sead__SafeString identifier; // [sp+10h] [bp-80h] BYREF
  _DWORD *v18; // [sp+18h] [bp-78h]
  _DWORD *v19; // [sp+1Ch] [bp-74h]
  int v20; // [sp+20h] [bp-70h]
  int v21; // [sp+24h] [bp-6Ch]
  int v22; // [sp+28h] [bp-68h]
  int v23; // [sp+2Ch] [bp-64h]
  int v24; // [sp+30h] [bp-60h]
  int v25; // [sp+34h] [bp-5Ch]
  int v26; // [sp+38h] [bp-58h]
  char v27; // [sp+3Ch] [bp-54h]
  int v28; // [sp+40h] [bp-50h]
  char v29; // [sp+44h] [bp-4Ch]
  char v30; // [sp+45h] [bp-4Bh]
  char v31; // [sp+46h] [bp-4Ah]
  char v32; // [sp+47h] [bp-49h]
  int v33; // [sp+48h] [bp-48h]
  _DWORD *v34; // [sp+4Ch] [bp-44h]
  int v35; // [sp+50h] [bp-40h]
  int v36; // [sp+54h] [bp-3Ch]
  int v37; // [sp+58h] [bp-38h]
  int v38; // [sp+5Ch] [bp-34h]
  int v39; // [sp+60h] [bp-30h]
  char v40; // [sp+64h] [bp-2Ch]
  char v41; // [sp+65h] [bp-2Bh]
  char v42; // [sp+66h] [bp-2Ah]
  char v43; // [sp+67h] [bp-29h]
  char v44; // [sp+68h] [bp-28h]

  v4 = 1;
  v5 = 0;
  identifier.vtable = &sead__SafeStringBase__vtable;
  identifier.cstr = "GPUParticle";
  v6 = sead__ExpHeap__create(0x200000, (int)&identifier, a2, 4, 1, 0);
  a1[5] = v6;
  FIELD_U16(v6, 120) |= 1u;
  sub_6090B310(dword_60CCF464);
  v23 = 32;
  v26 = 1024;
  v27 = 0;
  v28 = 1;
  v29 = 0;
  v30 = 1;
  v31 = 0;
  v32 = 0;
  identifier.vtable = &off_60BD95F8;
  v38 = 0;
  v37 = 0;
  v36 = 0;
  v41 = 9;
  v44 = 18;
  v34 = a2;
  v39 = 7;
  v24 = 7;
  v42 = 7;
  v21 = 128;
  v40 = 8;
  v20 = 256;
  v43 = 8;
  v22 = 256;
  v25 = 786432;
  v35 = a1[5];
  v7 = v35;
  v33 = 0x100000;
  a1[7] = a2;
  a1[9] = v7;
  v18 = a1 + 6;
  v19 = a1 + 8;
  identifier.cstr = *(char **)(dword_60CCFC8C + 24);
  v28 = 3;
  v8 = operator_new_8DE25C(0x1CC8u, a2, 4);
  v9 = sub_602384C8(v8, &identifier);
  a1[4] = v9;
  FIELD_U32(v9, 7348) = Effect_ref;
  *(_DWORD *)(a1[4] + 7356) = sub_6023875C;
  *(_DWORD *)(a1[4] + 7352) = sub_60238794;
  *(_DWORD *)(a1[4] + 7360) = sub_602387AC;
  sub_60890E9C(a1[4], *(_DWORD *)(a1[4] + 7348), 0);
  sub_60890EA8(a1[4], *(_DWORD *)(a1[4] + 7356), 0);
  sub_6090B32C(dword_60CCF464);
  path.vtable = &sead__SafeStringBase__vtable;
  identifier.vtable = &sead__SafeStringBase__vtable;
  path.cstr = "Effect/Static.Nin_NX_NVN.szs";
  identifier.cstr = "Static";
  ArchiveManager_loadSzs(ArchiveManagerMaybe_instance, &identifier, &path, a2, 1);
  path.vtable = &sead__SafeStringBase__vtable;
  identifier.vtable = &sead__SafeStringBase__vtable;
  identifier.cstr = "Static";
  path.cstr = "Particle.Nin_NX_NVN.ptcl";
  v10 = sub_608226EC(ArchiveManagerMaybe_instance, &identifier, &path, 0);
  v11 = (_DWORD *)a1[4];
  v12 = v10;
  *(_DWORD *)(v11[889] + 24) = a2;
  identifier.vtable = &off_60BD95E0;
  identifier.cstr = (char *)a2;
  if ( a2 )
    v4 = sead__HeapMgr__setCurrentHeap(sead__HeapMgr__sInstance, (int)a2);
  sub_6088FB14(v11, &identifier, v12, 6, 0, 0);
  v13 = *(_DWORD *)(v11[26] + 24);
  if ( v13 )
  {
    v5 = FIELD_U8(v13, 5);
    if ( FIELD_U8(v13, 5) )
      v5 = *(_DWORD *)(v11[26] + 24);
  }
  sub_608874D8(v5, v11[1837], 0);
  if ( v4 != 1 )
    sead__HeapMgr__setCurrentHeap(sead__HeapMgr__sInstance, v4);
  v14 = operator_new_8DE25C(8u, a2, 4);
  a1[55] = sub_6023B02C(v14);
  Effect_Eset_param_ref();
  return sub_602387C8(a1);
}
