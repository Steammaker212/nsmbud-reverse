/* green_ring_ref_6184E0
 * address: 0x606184E0   size: 192   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall green_ring_ref_6184E0(int a1)
{
  int v1; // r4
  int v2; // r9
  Profile **v3; // r7
  int ResArchiveById; // r0
  int v5; // r4
  int v6; // r0
  int (**v7)(); // [sp+0h] [bp-28h] BYREF
  const char *v8; // [sp+4h] [bp-24h]

  v1 = a1 + 6328;
  v2 = **(_DWORD **)(FIELD_U32(a1, 6328) + 12);
  v3 = (Profile **)(a1 + 12);
  ResArchiveById = Profile__getResArchiveById(*(Profile **)(a1 + 12), 0);
  v7 = &sead__SafeStringBase__vtable;
  v8 = "green_ring";
  SkeletalAnim_play(v2, ResArchiveById, (const char **)&v7);
  v5 = **(_DWORD **)(*(_DWORD *)v1 + 28);
  v6 = Profile__getResArchiveById(*v3, 0);
  v7 = &sead__SafeStringBase__vtable;
  v8 = "green_ring";
  sub_60446088(v5, v6, &v7);
  FIELD_U32(v5, 20) = 0;
  FIELD_U32(v5, 28) |= 2u;
  FIELD_U32(v5, 24) = 1065353216;
  AnimationCtrl_setRepeat((ModelAnimation *)(v5 + 4), 1);
}
