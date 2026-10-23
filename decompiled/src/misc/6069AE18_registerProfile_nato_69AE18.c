/* registerProfile_nato_69AE18
 * address: 0x6069AE18   size: 316   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void (*registerProfile_nato_69AE18())()
{
  sead__SafeString v1; // [sp+10h] [bp-18h] BYREF

  v1.vtable = &sead__SafeStringBase__vtable;
  v1.cstr = (char *)&unk_60AD6BE2;
  Profile__ctor(&stru_60CB94E8, Actor_nato_build, 0x327u, &v1, &stru_60B08034, 0);
  dword_60CB9500 = 3145728;
  dword_60CB9504 = 100663296;
  dword_60CB9508 = -33554432;
  dword_60CB9510 = CurrentStateID + 1;
  dword_60CB950C = (int)&off_60C18250;
  dword_60CB9514 = (int)sub_60699F24;
  dword_60CB9518 = 0;
  dword_60CB951C = (int)SE_OBJ_NUT_REVERT_ref;
  dword_60CB9520 = 0;
  dword_60CB9524 = (int)nullsub_5169;
  dword_60CB9528 = 0;
  CurrentStateID += 2;
  dword_60CB9530 = CurrentStateID;
  dword_60CB952C = (int)&off_60C18250;
  dword_60CB9534 = (int)sub_6069A0D8;
  dword_60CB9538 = 0;
  dword_60CB953C = (int)SE_OBJ_NUT_ROLL_ref;
  dword_60CB9540 = 0;
  dword_60CB9544 = (int)nullsub_5170;
  dword_60CB9548 = 0;
  return nullsub_5170;
}
