/* sub_608E24E8
 * address: 0x608E24E8   size: 336   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void sub_608E24E8()
{
  int v0; // r0
  int v1; // r4

  unk_60CCEB30 = 1040711680;
  unk_60CCEB34 = 1057685504;
  dword_60CCEB38 = 1040711680;
  dword_60CCEB3C = 1065353216;
  unk_60CCEB40 = 0;
  unk_60CCEB44 = 1056964608;
  dword_60CCEB48 = 0;
  dword_60CCEB4C = 1065353216;
  unk_60CCEB50 = 0;
  unk_60CCEB54 = 1053273620;
  dword_60CCEB58 = 0;
  dword_60CCEB5C = 1065353216;
  unk_60CCEB60 = 0;
  unk_60CCEB64 = 1050253722;
  dword_60CCEB68 = 0;
  dword_60CCEB6C = 1065353216;
  unk_60CCEB70 = 1023829606;
  unk_60CCEB74 = 1055050957;
  dword_60CCEB78 = 1023829606;
  dword_60CCEB7C = 1065353216;
  dword_60CCEB80 = 1065353216;
  dword_60CCEB84 = 1065353216;
  dword_60CCEB88 = 1065353216;
  dword_60CCEB8C = 1053609165;
  dword_60CCEB90 = (int)&sead__SafeStringBase__vtable;
  dword_60CCEB94 = (int)">";
  dword_60CCEB98 = (int)off_60C5BEA0;
  dword_60CCEB9C = 0;
  dword_60CCEBA0 = 0;
  v0 = sub_6090DAF8();
  v1 = v0;
  if ( v0 )
  {
    dword_60CCEB9C = (*(float (__fastcall **)(int))(*(_DWORD *)v0 + 8))(v0);
    dword_60CCEBA0 = (*(float (__fastcall **)(int, int))(*(_DWORD *)v1 + 16))(v1, 109);
  }
}
