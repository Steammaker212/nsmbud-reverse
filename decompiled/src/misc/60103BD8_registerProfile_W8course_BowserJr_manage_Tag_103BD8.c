/* registerProfile_W8course_BowserJr_manage_Tag_103BD8
 * address: 0x60103BD8   size: 220   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *registerProfile_W8course_BowserJr_manage_Tag_103BD8()
{
  sead__SafeString v1; // [sp+10h] [bp-10h] BYREF

  dword_60C8608C = 0;
  dword_60C86090 = 0;
  dword_60C86094 = 0;
  v1.vtable = &sead__SafeStringBase__vtable;
  v1.cstr = (char *)&unk_60ABE084;
  Profile__ctor(&stru_60C86098, Actor_W8course_BowserJr_manage_Tag_build, 0x2B2u, &v1, &stru_60AF612C, 0);
  dword_60C860B4 = ++CurrentStateID;
  dword_60C860B0 = (int)&off_60BCFBEC;
  dword_60C860B8 = (int)nullsub_2794;
  dword_60C860BC = 0;
  dword_60C860C0 = (int)nullsub_2795;
  dword_60C860C4 = 0;
  dword_60C860C8 = (int)nullsub_2796;
  dword_60C860CC = 0;
  return &dword_60C860B0;
}
