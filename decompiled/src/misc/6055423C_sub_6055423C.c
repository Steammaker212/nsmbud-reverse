/* sub_6055423C
 * address: 0x6055423C   size: 252   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6055423C(int a1)
{
  *(_DWORD *)a1 = &off_60BFDC40;
  sub_60475900((sead_IDisposer *)a1, a1 + 3528, 2);
  *(_DWORD *)a1 = &off_60BFDC40;
  FIELD_U32(a1, 3528) = 0;
  FIELD_U32(a1, 3532) = &sead__SafeStringBase__vtable;
  FIELD_U32(a1, 3536) = &byte_60B3BA34;
  FIELD_U32(a1, 3540) = 0;
  FIELD_U8(a1, 3544) = 0;
  FIELD_U32(a1, 3548) = 0;
  FIELD_U32(a1, 3552) = &sead__SafeStringBase__vtable;
  FIELD_U32(a1, 3556) = &byte_60B3BA34;
  FIELD_U32(a1, 3560) = 0;
  FIELD_U8(a1, 3564) = 0;
  sub_60555638(a1 + 3680);
  sub_60555638(a1 + 3768);
  sub_60555638(a1 + 3856);
  sub_60555638(a1 + 3944);
  sub_60555638(a1 + 4032);
  sub_60555638(a1 + 4120);
  sub_60555638(a1 + 4208);
  sub_60555638(a1 + 4296);
  sub_60555638(a1 + 4384);
  sub_60555638(a1 + 4472);
  sub_60555638(a1 + 4560);
  sub_60555638(a1 + 4648);
  return a1;
}
