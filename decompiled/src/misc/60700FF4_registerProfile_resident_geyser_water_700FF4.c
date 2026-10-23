/* registerProfile_resident_geyser_water_700FF4
 * address: 0x60700FF4   size: 204   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *registerProfile_resident_geyser_water_700FF4()
{
  sead__SafeString v1; // [sp+10h] [bp-10h] BYREF

  v1.vtable = &sead__SafeStringBase__vtable;
  v1.cstr = (char *)&unk_60AD85E6;
  Profile__ctor(&stru_60CBC654, Actor_resident_geyser_water_build, 0x7Cu, &v1, &stru_60B09654, 2);
  dword_60CBC670 = ++CurrentStateID;
  dword_60CBC66C = (int)&off_60C20A4C;
  dword_60CBC674 = (int)sub_607009C4;
  dword_60CBC678 = 0;
  dword_60CBC67C = (int)sub_607009E4;
  dword_60CBC680 = 0;
  dword_60CBC684 = (int)nullsub_5333;
  dword_60CBC688 = 0;
  return &dword_60CBC66C;
}
