/* registerProfile_floor_rotate_hole_akipipe_60A7AC
 * address: 0x6060A7AC   size: 352   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *registerProfile_floor_rotate_hole_akipipe_60A7AC()
{
  sead__SafeString v1; // [sp+10h] [bp-28h] BYREF

  v1.vtable = &sead__SafeStringBase__vtable;
  v1.cstr = (char *)&unk_60AD3751;
  Profile__ctor(&stru_60CB2D1C, Actor_floor_rotate_hole_akipipe_build, 0xD2u, &v1, &stru_60B063E0, 2);
  dword_60CB2D78 = (int)&sead__SafeStringBase__vtable;
  dword_60CB2D7C = (int)"circle_ground_holeD";
  dword_60CB2D80 = (int)&sead__SafeStringBase__vtable;
  dword_60CB2D84 = (int)"circle_ground_holeD_chika";
  sub_60000288();
  dword_60CB2D88 = (int)&sead__SafeStringBase__vtable;
  dword_60CB2D8C = (int)"circle_ground_holeD";
  dword_60CB2D90 = (int)&sead__SafeStringBase__vtable;
  dword_60CB2D94 = (int)"circle_ground_holeD_chika";
  sub_60000288();
  dword_60CB2D60 = (int)&sead__SafeStringBase__vtable;
  unk_60CB2D64 = "obj_dokan";
  unk_60CB2D68 = &sead__SafeStringBase__vtable;
  dword_60CB2D6C = (int)"obj_dokan_A";
  dword_60CB2D70 = (int)&sead__SafeStringBase__vtable;
  dword_60CB2D74 = (int)"obj_dokan_B";
  dword_60CB2D38 = ++CurrentStateID;
  dword_60CB2D34 = (int)&off_60C0F90C;
  dword_60CB2D3C = (int)nullsub_4867;
  dword_60CB2D40 = 0;
  dword_60CB2D44 = (int)sub_6060A964;
  dword_60CB2D48 = 0;
  dword_60CB2D4C = (int)nullsub_4868;
  dword_60CB2D50 = 0;
  return &dword_60CB2D34;
}
