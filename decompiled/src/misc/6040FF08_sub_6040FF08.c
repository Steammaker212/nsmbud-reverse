/* sub_6040FF08
 * address: 0x6040FF08   size: 372   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6040FF08(int a1)
{
  int (**v3)(); // [sp+4h] [bp-2Ch] BYREF
  const char *v4; // [sp+8h] [bp-28h]

  sub_6090A654((_DWORD *)(a1 + 16));
  sub_6090C6DC(a1 + 104);
  sub_6040F588(a1 + 276);
  FIELD_U32(a1, 2076) = 0;
  sub_6041009C(a1 + 2080);
  sead_IDisposer_ctor((sead_IDisposer *)(a1 + 12744));
  FIELD_U32(a1, 12760) = &sead__SafeStringBase__vtable;
  FIELD_U32(a1, 12764) = &byte_60ABC94D;
  FIELD_U32(a1, 12744) = off_60C5E9A4;
  FIELD_U32(a1, 12768) = 0;
  FIELD_U32(a1, 12772) = 0;
  FIELD_U32(a1, 12776) = 1;
  FIELD_U32(a1, 12784) = 0;
  FIELD_U32(a1, 12788) = 0;
  FIELD_U32(a1, 12792) = 0;
  FIELD_U32(a1, 12780) = off_60BD8394;
  sub_609394E8(a1 + 12812);
  sead__CriticalSection__ctor((sead_IDisposer *)(a1 + 13300));
  v3 = &sead__SafeStringBase__vtable;
  v4 = "Capture";
  nullsub_123(a1 + 12812, 1, &v3, 0);
  v3 = &sead__SafeStringBase__vtable;
  v4 = "CaptureRecieve";
  FIELD_U32(a1, 12784) = a1;
  FIELD_U32(a1, 12788) = sub_6041024C;
  FIELD_U32(a1, 12792) = 0;
  FIELD_U32(a1, 12780) = off_60BF9C68;
  sead__SafeStringBase__operator_assign(a1 + 12760, (int)&v3);
  FIELD_U32(a1, 12768) = 2;
  return a1;
}
