/* registerProfile_IceBro_ctor_2F2678
 * address: 0x602F2678   size: 252   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *registerProfile_IceBro_ctor_2F2678()
{
  sead__SafeString v1; // [sp+10h] [bp-18h] BYREF

  dword_60C92780 = 0;
  dword_60C92784 = 0;
  dword_60C92788 = 0;
  v1.vtable = &sead__SafeStringBase__vtable;
  v1.cstr = (char *)&unk_60AC40A9;
  Profile__ctor(&stru_60C92740, IceBro_ctor, 0x2FCu, &v1, &stru_60AFECD0, 18);
  dword_60C9278C = 1090519040;
  dword_60C92790 = 1082130432;
  dword_60C92794 = 0;
  dword_60C9275C = ++CurrentStateID;
  dword_60C92758 = (int)&off_60BE757C;
  dword_60C92760 = (int)sub_602F1A38;
  dword_60C92764 = 0;
  dword_60C92768 = (int)sub_602F1AB0;
  dword_60C9276C = 0;
  dword_60C92770 = (int)nullsub_3304;
  dword_60C92774 = 0;
  return &dword_60C92758;
}
