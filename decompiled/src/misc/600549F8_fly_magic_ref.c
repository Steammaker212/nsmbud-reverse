/* fly_magic_ref
 * address: 0x600549F8   size: 340   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall fly_magic_ref(int a1)
{
  int v2; // r0
  int v3; // r6
  _DWORD *v4; // r5
  int ResArchiveById; // r0
  int v6; // r0
  int (**v8)(); // [sp+0h] [bp-20h] BYREF
  const char *v9; // [sp+4h] [bp-1Ch]

  v3 = a1 + 6300;
  v2 = FIELD_U32(a1, 6300);
  v8 = &sead__SafeStringBase__vtable;
  v9 = "fly_magic";
  sub_60421AE4(v2, &v8, 1);
  v4 = **(_DWORD ***)(*(_DWORD *)v3 + 28);
  ResArchiveById = Profile__getResArchiveById(*(Profile **)(v3 - 6288), 0);
  v8 = &sead__SafeStringBase__vtable;
  v9 = "wand";
  ShuAnim_play(v4, ResArchiveById, (int)&v8);
  AnimationCtrl_setRepeat((ModelAnimation *)(**(_DWORD **)(*(_DWORD *)v3 + 28) + 4), 1);
  v6 = **(_DWORD **)(*(_DWORD *)v3 + 28);
  FIELD_U32(v6, 20) = 0;
  FIELD_U32(v6, 28) |= 2u;
  *(float *)(v3 - 6188) = FIELD_F32(dword_60CC6484, 128) + 96.0;
  *(_DWORD *)(v3 - 6180) = 1086324736;
  *(_DWORD *)(v3 - 6176) = -1070945620;
  *(_DWORD *)(v3 - 6164) = -1070945620;
  if ( *(_DWORD *)(v3 - 6220) == 1 )
    FIELD_U32(a1, 120) = -1061158912;
  FIELD_U32(a1, 100) = 1026951913;
  FIELD_U16(a1, 6276) = 120;
  return 6276;
}
