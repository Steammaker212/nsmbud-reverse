/* sub_60439BC8
 * address: 0x60439BC8   size: 156   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60439BC8(int a1)
{
  int v2; // r1

  sead_IDisposer_ctor((sead_IDisposer *)a1);
  *(_DWORD *)a1 = off_60BFA9A8;
  FIELD_U32(a1, 16) = &off_60BFA9B8;
  FIELD_U32(a1, 20) = 0;
  FIELD_U32(a1, 24) = 0;
  FIELD_U32(a1, 28) = 0;
  FIELD_U32(a1, 32) = 0;
  FIELD_U32(a1, 36) = 0;
  sub_6042A0F0((_DWORD *)(a1 + 84));
  sub_6042A0F0((_DWORD *)(a1 + 100));
  sub_60913BB4(a1 + 116);
  FIELD_U32(a1, 116) = off_60BF9C1C;
  sub_60913BB4(a1 + 144);
  FIELD_U32(a1, 144) = off_60BF9C1C;
  FIELD_U32(a1, 172) = 0;
  FIELD_U32(a1, 176) = 0;
  FIELD_U32(a1, 180) = 0;
  sead__CriticalSection__ctor((sead_IDisposer *)(a1 + 184));
  FIELD_U32(a1, 220) = 0;
  FIELD_U32(a1, 224) = 0;
  sub_6083651C(a1 + 232, v2);
  return a1;
}
