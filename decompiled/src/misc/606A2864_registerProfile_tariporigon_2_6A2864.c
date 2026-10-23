/* registerProfile_tariporigon_2_6A2864
 * address: 0x606A2864   size: 300   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void (*registerProfile_tariporigon_2_6A2864())()
{
  sead__SafeString v1; // [sp+10h] [bp-18h] BYREF

  dword_60CB99B0 = 0;
  dword_60CB99B4 = 0;
  dword_60CB99B8 = 0;
  memset(&unk_60CB99BC, 0, 36);
  v1.vtable = &sead__SafeStringBase__vtable;
  v1.cstr = (char *)&unk_60AD6F36;
  Profile__ctor(&stru_60CB994C, Actor_tariporigon_2_build, 0x36u, &v1, &stru_60B083CC, 0);
  dword_60CB9968 = CurrentStateID + 1;
  dword_60CB9964 = (int)&off_60C18F88;
  dword_60CB996C = (int)sub_606A1DA8;
  dword_60CB9970 = 0;
  dword_60CB9974 = (int)sub_606A1E14;
  dword_60CB9978 = 0;
  dword_60CB997C = (int)nullsub_264;
  dword_60CB9980 = 0;
  CurrentStateID += 2;
  dword_60CB9988 = CurrentStateID;
  dword_60CB9984 = (int)&off_60C18F88;
  dword_60CB998C = (int)sub_606A1E60;
  dword_60CB9990 = 0;
  dword_60CB9994 = (int)sub_606A1ECC;
  dword_60CB9998 = 0;
  dword_60CB999C = (int)nullsub_265;
  dword_60CB99A0 = 0;
  return nullsub_265;
}
