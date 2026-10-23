/* sub_605047C0
 * address: 0x605047C0   size: 152   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605047C0(int a1)
{
  *(_DWORD *)a1 = &off_60BFEE70;
  sub_6047611C((sead_IDisposer *)a1, a1 + 3520, 3);
  *(_DWORD *)a1 = &off_60BFEE70;
  FIELD_U32(a1, 3520) = 0;
  FIELD_U32(a1, 3524) = &sead__SafeStringBase__vtable;
  FIELD_U32(a1, 3528) = &byte_60B3BA34;
  FIELD_U32(a1, 3532) = 0;
  FIELD_U8(a1, 3536) = 0;
  FIELD_U32(a1, 3540) = 0;
  FIELD_U32(a1, 3544) = &sead__SafeStringBase__vtable;
  FIELD_U32(a1, 3548) = &byte_60B3BA34;
  FIELD_U32(a1, 3552) = 0;
  FIELD_U8(a1, 3556) = 0;
  FIELD_U32(a1, 3560) = 0;
  FIELD_U32(a1, 3564) = &sead__SafeStringBase__vtable;
  FIELD_U32(a1, 3568) = &byte_60B3BA34;
  FIELD_U32(a1, 3572) = 0;
  FIELD_U8(a1, 3576) = 0;
  memset((void *)(a1 + 3580), 0, 325);
  return a1;
}
