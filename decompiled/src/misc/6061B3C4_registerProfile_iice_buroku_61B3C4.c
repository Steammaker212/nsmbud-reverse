/* registerProfile_iice_buroku_61B3C4
 * address: 0x6061B3C4   size: 204   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *registerProfile_iice_buroku_61B3C4()
{
  sead__SafeString v1; // [sp+10h] [bp-10h] BYREF

  v1.vtable = &sead__SafeStringBase__vtable;
  v1.cstr = (char *)&unk_60AD3BE2;
  Profile__ctor(&stru_60CB3478, Actor_iice_buroku_build, 0x16Du, &v1, &stru_60B066D0, 2);
  dword_60CB3494 = ++CurrentStateID;
  dword_60CB3490 = (int)&off_60C10A0C;
  dword_60CB3498 = (int)sub_6061A5F4;
  dword_60CB349C = 0;
  dword_60CB34A0 = (int)sub_6061A67C;
  dword_60CB34A4 = 0;
  dword_60CB34A8 = (int)nullsub_4905;
  dword_60CB34AC = 0;
  return &dword_60CB3490;
}
