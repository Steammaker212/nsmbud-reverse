/* sub_6050CE38
 * address: 0x6050CE38   size: 220   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6050CE38(int a1)
{
  int result; // r0
  int v3[3]; // [sp+4h] [bp-2Ch] BYREF
  _DWORD v4[8]; // [sp+10h] [bp-20h] BYREF

  sub_6050CF24();
  v3[2] = 0;
  v4[0] = &sead__SafeStringBase__vtable;
  v4[1] = &byte_60B3BA34;
  v3[0] = (int)&sead__SafeStringBase__vtable;
  v3[1] = P_MiiIcon_00_ref_50D228(0);
  ((void (__fastcall *)(_DWORD *, int *))off_60BC0240[0])(v4, v3);
  v3[0] = 1;
  sub_604752D4(a1, a1 + 3540, v4, v3);
  result = sub_608DE334(0x20u, 0, 4);
  if ( result )
  {
    *(_DWORD *)result = 24;
    FIELD_U32(result, 4) = 1;
    FIELD_U32(result, 16) = -1;
    FIELD_U32(result, 20) = -1;
    FIELD_U32(result, 8) = off_60BFDB94;
    result += 8;
    FIELD_U16(result, 16) = 0;
    FIELD_U16(result, 18) = 0;
    FIELD_U32(a1, 3544) = 1;
    FIELD_U32(a1, 3548) = result;
  }
  return result;
}
