/* balloon_shadowkun_ref
 * address: 0x601EAF3C   size: 1164   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall balloon_shadowkun_ref(int a1)
{
  _DWORD *ResArchiveById; // r9
  void *Model; // r5
  ModelWrapper *v4; // r7
  ModelWrapper *v5; // r0
  char v6; // r12
  int v7; // r4
  int v8; // r10
  size_t v9; // r7
  int v10; // r0
  int v11; // r3
  int *v12; // r6
  int v13; // r2
  int v14; // r6
  int v15; // r4
  unsigned __int16 *v16; // r0
  size_t v17; // r4
  size_t v18; // r2
  int v19; // r0
  int v20; // r1
  int *v21; // r5
  int v22; // r5
  int *v23; // r0
  int *v24; // r5
  int v25; // r5
  int *v26; // r0
  sead__SafeString identifier; // [sp+18h] [bp-38h] BYREF
  int v29; // [sp+20h] [bp-30h]
  _BYTE v30[44]; // [sp+24h] [bp-2Ch] BYREF

  ResArchiveById = (_DWORD *)Profile__getResArchiveById(*(Profile **)(a1 + 12), 0);
  identifier.vtable = &sead__SafeStringBase__vtable;
  identifier.cstr = "balloon_shadowkun";
  Model = (void *)Resource_getModel(ResArchiveById, &identifier, 6, 1, 0, 0, 0, 0, 1, 0);
  v4 = (ModelWrapper *)operator_new_8DE25C(0x30u, 0, 4);
  v5 = ModelWrapper_ctor(v4, Model, 1, 0, 0, 0, 0);
  ModelWrapper_setup(v5, (int)ResArchiveById, 0, 0);
  FIELD_U32(a1, 264) = v4;
  if ( ((unsigned int)&dword_60C8B218 & ~(1612623876 << v6) & 1) == 0 && _cxa_guard_acquire(&dword_60C8B218) )
  {
    dword_60C8B21C = (int)&sead__SafeStringBase__vtable;
    dword_60C8B220 = (int)"wait";
    _cxa_guard_release(&dword_60C8B218);
  }
  v7 = ResArchiveById[5];
  (*(void (__fastcall **)(int *))(dword_60C8B21C + 12))(&dword_60C8B21C);
  v8 = FIELD_U32(v7, 64);
  if ( v8 )
  {
    if ( dword_60C8B220 )
      v9 = strlen((const char *)dword_60C8B220);
    else
      v9 = 0;
    v10 = FIELD_U16(v8, 12);
    v12 = (int *)(v8 + 8 + 16 * v10);
    v11 = *v12;
    if ( FIELD_U32(v8, 8) < *v12 )
    {
      v13 = v8 + 8;
      do
      {
        v14 = 0;
        if ( v9 > v11 >> 3 )
          v14 = (*(unsigned __int8 *)(dword_60C8B220 + v9 + ~(v11 >> 3)) >> (v11 & 7)) & 1;
        v15 = *(_DWORD *)(v13 + 16 * v10);
        v10 = *(unsigned __int16 *)(v13 + 16 * v10 + 2 * v14 + 4);
        v12 = (int *)(v13 + 16 * v10);
        v11 = *v12;
      }
      while ( v15 < *v12 );
    }
    v16 = (unsigned __int16 *)v12[2];
    v17 = *v16;
    v18 = v17;
    if ( v9 < v17 )
      v18 = v9;
    if ( v18 )
    {
      v19 = memcmp(v16 + 1, (const void *)dword_60C8B220, v18);
      v20 = v19;
      if ( !v19 )
        v20 = 1;
      if ( v9 < v17 || v19 )
        goto LABEL_24;
    }
    else if ( v9 < v17 )
    {
      goto LABEL_27;
    }
    v20 = 0;
    if ( v17 < v9 )
      v20 = -1;
LABEL_24:
    if ( !v20 && (int)v12 - v8 - 24 >= 0 )
      SkeletalAnim_play(**(_DWORD **)(FIELD_U32(a1, 264) + 12), (int)ResArchiveById, (int)&dword_60C8B21C);
  }
LABEL_27:
  *(_DWORD *)(**(_DWORD **)(a1 + 264) + 36) = 2;
  *(_DWORD *)(**(_DWORD **)(a1 + 264) + 348) &= ~4u;
  FIELD_U8(a1, 272) = 0;
  v21 = sub_601DB42C();
  if ( *v21 == -1 )
  {
    v24 = sub_601DB46C();
    if ( *v24 != -1 )
    {
      identifier.cstr = v30;
      identifier.vtable = &BufferedSafeStringBase_char_vtable_probably;
      v29 = 8;
      sead__BufferedSafeStringBase__assureTerminationImpl_const((int)&identifier);
      *identifier.cstr = 0;
      identifier.vtable = &off_60BD4B8C;
      sub_6040E074(&identifier, *v24, v24[1]);
      v25 = *v24;
      (*((void (__fastcall **)(sead__SafeString *))identifier.vtable + 3))(&identifier);
      v26 = sub_601E0404(v25, -1, (int)identifier.cstr);
      FIELD_U32(a1, 80) = v26[18];
      FIELD_U32(a1, 84) = v26[19];
      FIELD_U32(a1, 88) = v26[20];
    }
    FIELD_U32(a1, 128) = 0;
    FIELD_U32(a1, 132) = 0;
    FIELD_U32(a1, 136) = 0;
    FIELD_U8(a1, 216) |= 2u;
  }
  else
  {
    identifier.cstr = v30;
    identifier.vtable = &BufferedSafeStringBase_char_vtable_probably;
    v29 = 8;
    sead__BufferedSafeStringBase__assureTerminationImpl_const((int)&identifier);
    *identifier.cstr = 0;
    identifier.vtable = &off_60BD4B8C;
    sub_6040E074(&identifier, *v21, v21[1]);
    v22 = *v21;
    (*((void (__fastcall **)(sead__SafeString *))identifier.vtable + 3))(&identifier);
    v23 = sub_601E0404(v22, -1, (int)identifier.cstr);
    FIELD_U32(a1, 80) = v23[18];
    FIELD_U32(a1, 84) = v23[19];
    FIELD_U32(a1, 88) = v23[20];
    if ( FIELD_U8(dword_60C8B144, 63) || FIELD_U8(dword_60C8B144, 64) )
    {
      FIELD_U32(a1, 128) = 0;
      FIELD_U32(a1, 132) = 0;
      FIELD_U32(a1, 136) = 0;
      *(_DWORD *)(**(_DWORD **)(FIELD_U32(a1, 264) + 12) + 24) = 0;
    }
    else if ( sub_601D08B0() == 1 )
    {
      FIELD_U32(a1, 128) = 0;
      FIELD_U32(a1, 132) = 0;
      FIELD_U32(a1, 136) = 0;
    }
    else
    {
      FIELD_U32(a1, 128) = 1082130432;
      FIELD_U32(a1, 132) = 1082130432;
      FIELD_U32(a1, 136) = 1082130432;
      FIELD_U8(a1, 272) = 1;
    }
  }
  FIELD_U32(a1, 212) = 1128792064;
  return 1;
}
