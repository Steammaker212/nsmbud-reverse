/* registerProfile_Peach_0F8EAC
 * address: 0x600F8EAC   size: 400   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void (*registerProfile_Peach_0F8EAC())()
{
  _DWORD *v0; // r0
  sead__SafeString v2; // [sp+10h] [bp-10h] BYREF

  dword_60C85BBC = (int)(float)((float)(2147500000.0 * 60.0) / 180.0);
  v2.vtable = &sead__SafeStringBase__vtable;
  v2.cstr = (char *)&unk_60ABDEF8;
  Profile__ctor(&stru_60C85BC0, Actor_Peach_build, 0x2E0u, &v2, &stru_60AF60C0, 0);
  *v0 = &off_60BCF038;
  dword_60C85BDC = CurrentStateID + 1;
  dword_60C85BD8 = (int)&off_60BCF10C;
  dword_60C85BE0 = (int)nullsub_2775;
  dword_60C85BE4 = 0;
  dword_60C85BE8 = (int)sub_600F7E34;
  dword_60C85BEC = 0;
  dword_60C85BF0 = (int)nullsub_2776;
  dword_60C85BF4 = 0;
  stru_60C85BF8.vtable = &off_60BCF10C;
  stru_60C85BF8.id = CurrentStateID + 2;
  dword_60C85C00 = (int)happy_end1_ref;
  dword_60C85C04 = 0;
  dword_60C85C08 = (int)&loc_600F80D0;
  dword_60C85C0C = 0;
  dword_60C85C10 = (int)nullsub_2777;
  dword_60C85C14 = 0;
  CurrentStateID += 3;
  dword_60C85C1C = CurrentStateID;
  dword_60C85C18 = (int)&off_60BCF10C;
  dword_60C85C20 = (int)happy_end_wait_ref;
  dword_60C85C24 = 0;
  dword_60C85C28 = (int)sub_600F885C;
  dword_60C85C2C = 0;
  dword_60C85C30 = (int)nullsub_2778;
  dword_60C85C34 = 0;
  return nullsub_2778;
}
