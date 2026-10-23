/* registerProfile_CourseSelectshafurukinokohausu_194C64
 * address: 0x60194C64   size: 392   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int registerProfile_CourseSelectshafurukinokohausu_194C64()
{
  _DWORD *v0; // r0
  sead__SafeString v2; // [sp+10h] [bp-20h] BYREF

  dword_60C89A50 = 0;
  dword_60C89A54 = 0;
  dword_60C89A58 = 0;
  v2.vtable = &sead__SafeStringBase__vtable;
  v2.cstr = (char *)&unk_60ABF998;
  Profile__ctor(&stru_60C89A5C, Actor_CourseSelectshafurukinokohausu_build, 0x35Eu, &v2, 0, 0);
  *v0 = &off_60BD5AD4;
  dword_60C89A78 = CurrentStateID + 1;
  dword_60C89A7C = 92;
  dword_60C89A80 = 1;
  dword_60C89A84 = 96;
  dword_60C89A88 = 1;
  dword_60C89A8C = 100;
  dword_60C89A90 = 1;
  dword_60C89A74 = (int)&off_60BD5B74;
  dword_60C89A94 = (int)&NullState;
  dword_60C89AA4 = 1;
  dword_60C89AA8 = 108;
  dword_60C89AAC = 1;
  dword_60C89AB0 = 112;
  dword_60C89AB4 = 1;
  stru_60C89A98.vtable = &off_60BD5B74;
  stru_60C89A98.id = CurrentStateID + 2;
  unk_60C89AA0 = 104;
  dword_60C89AB8 = (int)&NullState;
  dword_60C89AC8 = 1;
  dword_60C89ACC = 120;
  dword_60C89AD0 = 1;
  dword_60C89AD4 = 124;
  dword_60C89AD8 = 1;
  stru_60C89ABC.vtable = &off_60BD5B74;
  stru_60C89ABC.id = CurrentStateID + 3;
  unk_60C89AC4 = 116;
  dword_60C89ADC = (int)&NullState;
  CurrentStateID += 4;
  unk_60C89AE4 = CurrentStateID;
  unk_60C89AE8 = 128;
  dword_60C89AEC = 1;
  dword_60C89AF0 = 132;
  dword_60C89AF4 = 1;
  dword_60C89AF8 = 136;
  dword_60C89AFC = 1;
  dword_60C89AE0 = (int)&off_60BD5B74;
  dword_60C89B00 = (int)&NullState;
  return 1;
}
