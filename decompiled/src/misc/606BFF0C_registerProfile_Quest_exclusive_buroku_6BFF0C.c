/* registerProfile_Quest_exclusive_buroku_6BFF0C
 * address: 0x606BFF0C   size: 256   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *registerProfile_Quest_exclusive_buroku_6BFF0C()
{
  sead__SafeString v1; // [sp+10h] [bp-10h] BYREF

  dword_60CBA8A0 = 0;
  dword_60CBA8A4 = 0;
  dword_60CBA8A8 = 0;
  dword_60CBA890 = (int)&sead__SafeStringBase__vtable;
  dword_60CBA894 = (int)"block_challenge";
  dword_60CBA898 = (int)&sead__SafeStringBase__vtable;
  dword_60CBA89C = (int)"block_challenge";
  v1.vtable = &sead__SafeStringBase__vtable;
  v1.cstr = (char *)&unk_60AD77DF;
  Profile__ctor(&stru_60CBA844, Actor_Quest_exclusive_buroku_build, 0xB7u, &v1, &stru_60B08910, 2);
  dword_60CBA860 = ++CurrentStateID;
  dword_60CBA85C = (int)&off_60C1BB18;
  dword_60CBA864 = (int)nullsub_5207;
  dword_60CBA868 = 0;
  dword_60CBA86C = (int)nullsub_5208;
  dword_60CBA870 = 0;
  dword_60CBA874 = (int)nullsub_5209;
  dword_60CBA878 = 0;
  return &dword_60CBA85C;
}
