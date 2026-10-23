/* registerProfile_Hammer_pendulum_66B0F4
 * address: 0x6066B0F4   size: 224   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void registerProfile_Hammer_pendulum_66B0F4()
{
  sead__SafeString v0; // [sp+10h] [bp-10h] BYREF

  dword_60CB6D58 = 1098907648;
  dword_60CB6D5C = 1098907648;
  dword_60CB6D60 = 1098907648;
  dword_60CB6D64 = -1031798784;
  dword_60CB6D68 = 1107296256;
  dword_60CB6D6C = -1031798784;
  dword_60CB6D70 = 1107296256;
  dword_60CB6D74 = -1021313024;
  dword_60CB6D78 = -1040187392;
  dword_60CB6D7C = -1021313024;
  dword_60CB6D80 = -1040187392;
  dword_60CB6D84 = -1031798784;
  dword_60CB6D88 = -1048576000;
  dword_60CB6D8C = -1031798784;
  dword_60CB6D90 = -1048576000;
  dword_60CB6D94 = 1098907648;
  v0.vtable = &sead__SafeStringBase__vtable;
  v0.cstr = (char *)&unk_60AD5CB9;
  Profile__ctor(&stru_60CB6D04, Actor_Hammer_pendulum_build, 0xA7u, &v0, &stru_60B07A24, 2);
}
