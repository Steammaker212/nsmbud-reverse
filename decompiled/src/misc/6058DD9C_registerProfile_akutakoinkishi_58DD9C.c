/* registerProfile_akutakoinkishi_58DD9C
 * address: 0x6058DD9C   size: 268   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void (*registerProfile_akutakoinkishi_58DD9C())()
{
  sead__SafeString v1; // [sp+10h] [bp-18h] BYREF

  v1.vtable = &sead__SafeStringBase__vtable;
  v1.cstr = (char *)&unk_60AD1F11;
  Profile__ctor(&stru_60CAF4AC, Actor_akutakoinkishi_build, 0x189u, &v1, &stru_60B04BDC, 0);
  dword_60CAF4C8 = CurrentStateID + 1;
  dword_60CAF4C4 = (int)&off_60C06EE0;
  dword_60CAF4CC = (int)nullsub_4672;
  dword_60CAF4D0 = 0;
  dword_60CAF4D4 = (int)SE_OBJ_COIN_POP_UP_ref;
  dword_60CAF4D8 = 0;
  dword_60CAF4DC = (int)nullsub_4673;
  dword_60CAF4E0 = 0;
  CurrentStateID += 2;
  dword_60CAF4E8 = CurrentStateID;
  dword_60CAF4E4 = (int)&off_60C06EE0;
  dword_60CAF4EC = (int)sub_6058DB4C;
  dword_60CAF4F0 = 0;
  dword_60CAF4F4 = (int)sub_6058DB7C;
  dword_60CAF4F8 = 0;
  dword_60CAF4FC = (int)nullsub_4674;
  dword_60CAF500 = 0;
  return nullsub_4674;
}
