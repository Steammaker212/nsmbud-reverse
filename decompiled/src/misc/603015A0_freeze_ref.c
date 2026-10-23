/* freeze_ref
 * address: 0x603015A0   size: 220   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall freeze_ref(int a1)
{
  _DWORD *v2; // r0
  _DWORD **v3; // r6
  int *v4; // r1
  unsigned int v5; // r2
  unsigned int v6; // r0
  int v7; // r5
  int ResArchiveById; // r0
  int *v9; // r1
  unsigned int v10; // r0
  int v11; // r0
  _DWORD v13[6]; // [sp+0h] [bp-18h] BYREF

  v3 = (_DWORD **)(a1 + 6300);
  v2 = *(_DWORD **)(a1 + 6300);
  v4 = (int *)v2[3];
  v5 = v2[2];
  v6 = v2[17];
  if ( v5 > v6 )
    v4 += v6;
  v7 = *v4;
  ResArchiveById = Profile__getResArchiveById(*(Profile **)(a1 + 12), 0);
  v13[0] = &sead__SafeStringBase__vtable;
  v13[1] = "freeze";
  SkeletalAnim_play(v7, ResArchiveById, (int)v13);
  v9 = (int *)(*v3)[3];
  v10 = (*v3)[17];
  if ( (*v3)[2] > v10 )
    v9 += v10;
  Animation_update(*v9);
  (*(void (__fastcall **)(_DWORD))(*(_DWORD *)**v3 + 52))(**v3);
  (*(void (__fastcall **)(_DWORD))(*(_DWORD *)**v3 + 56))(**v3);
  v11 = FIELD_U32(a1, 160) >> 31;
  FIELD_U32(a1, 80) = v11;
  FIELD_U32(a1, 160) = Enemy_CommonRotations[v11];
  return sub_602FFAD8(a1);
}
