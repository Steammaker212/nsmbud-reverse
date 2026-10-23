/* registerProfile_koBowser_Demo_manage_Tag_0B8F54
 * address: 0x600B8F54   size: 288   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void registerProfile_koBowser_Demo_manage_Tag_0B8F54()
{
  sead__SafeString v0; // [sp+10h] [bp-18h] BYREF

  dword_60C83560 = 0;
  dword_60C83564 = 0;
  dword_60C83568 = 0;
  dword_60C83570 = CurrentStateID + 1;
  dword_60C83574 = 204;
  dword_60C83578 = 1;
  dword_60C8357C = 208;
  dword_60C83580 = 1;
  dword_60C83584 = 212;
  dword_60C83588 = 1;
  dword_60C8356C = (int)&off_60BC99B0;
  dword_60C8358C = (int)&unk_60C7F6A0;
  CurrentStateID += 2;
  stru_60C83590.id = CurrentStateID;
  unk_60C83598 = 216;
  dword_60C8359C = 1;
  dword_60C835A0 = 220;
  dword_60C835A4 = 1;
  dword_60C835A8 = 224;
  dword_60C835AC = 1;
  stru_60C83590.vtable = &off_60BC99B0;
  dword_60C835B0 = (int)&unk_60C7F6C4;
  v0.vtable = &sead__SafeStringBase__vtable;
  v0.cstr = (char *)&unk_60ABCC13;
  Profile__ctor(&stru_60C835B4, Actor_koBowser_Demo_manage_Tag_build, 0x2AEu, &v0, &stru_60AF5814, 0);
}
