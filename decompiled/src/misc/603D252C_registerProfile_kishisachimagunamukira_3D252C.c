/* registerProfile_kishisachimagunamukira_3D252C
 * address: 0x603D252C   size: 220   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *registerProfile_kishisachimagunamukira_3D252C()
{
  sead__SafeString v1; // [sp+10h] [bp-10h] BYREF

  dword_60C98DB4 = 0;
  dword_60C98DB8 = 0;
  dword_60C98DBC = 0;
  v1.vtable = &sead__SafeStringBase__vtable;
  v1.cstr = (char *)&unk_60AC5FD6;
  Profile__ctor(&stru_60C98DC0, Actor_kishisachimagunamukira_build, 0x27Bu, &v1, &stru_60B01194, 0);
  dword_60C98DDC = ++CurrentStateID;
  dword_60C98DD8 = (int)&off_60BF7D14;
  dword_60C98DE0 = (int)nullsub_3586;
  dword_60C98DE4 = 0;
  dword_60C98DE8 = (int)SE_EMY_SR_MG_KILLER_SHOT_ref;
  dword_60C98DEC = 0;
  dword_60C98DF0 = (int)nullsub_3587;
  dword_60C98DF4 = 0;
  return &dword_60C98DD8;
}
