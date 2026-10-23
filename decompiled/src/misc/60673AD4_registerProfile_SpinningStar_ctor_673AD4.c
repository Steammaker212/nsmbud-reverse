/* registerProfile_SpinningStar_ctor_673AD4
 * address: 0x60673AD4   size: 300   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void (*registerProfile_SpinningStar_ctor_673AD4())()
{
  sead__SafeString v1; // [sp+10h] [bp-10h] BYREF

  dword_60CB761C = 0x3FFFFFFF;
  dword_60CB7620 = 0x800000;
  v1.vtable = &sead__SafeStringBase__vtable;
  v1.cstr = (char *)&unk_60AD603F;
  Profile__ctor(&stru_60CB75B4, SpinningStar_ctor, 0x4Fu, &v1, &stru_60B07B70, 2);
  dword_60CB75D0 = CurrentStateID + 1;
  dword_60CB75CC = (int)&off_60C15B94;
  dword_60CB75D4 = (int)nullsub_5107;
  dword_60CB75D8 = 0;
  dword_60CB75DC = (int)sub_60672440;
  dword_60CB75E0 = 0;
  dword_60CB75E4 = (int)nullsub_5108;
  dword_60CB75E8 = 0;
  CurrentStateID += 2;
  dword_60CB75F0 = CurrentStateID;
  dword_60CB75EC = (int)&off_60C15B94;
  dword_60CB75F4 = (int)nullsub_5109;
  dword_60CB75F8 = 0;
  dword_60CB75FC = (int)SE_OBJ_STARLIFT_ROLLING_ref;
  dword_60CB7600 = 0;
  dword_60CB7604 = (int)nullsub_5110;
  dword_60CB7608 = 0;
  return nullsub_5110;
}
