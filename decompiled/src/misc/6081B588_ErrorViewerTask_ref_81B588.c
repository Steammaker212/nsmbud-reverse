/* ErrorViewerTask_ref_81B588
 * address: 0x6081B588   size: 152   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall ErrorViewerTask_ref_81B588(_DWORD *a1)
{
  _DWORD *v2; // r0
  _DWORD v4[4]; // [sp+0h] [bp-10h] BYREF

  v4[0] = &sead__SafeStringBase__vtable;
  v4[1] = "ErrorViewerTask";
  a1[59] = a1;
  a1[60] = Error_Code_u_ref;
  a1[61] = 0;
  a1[58] = off_60C2A4B4;
  sead__SafeStringBase__operator_assign((int)(a1 + 53), (int)v4);
  a1[55] = 2;
  v2 = *(_DWORD **)(dword_60CD0B40 + 36);
  if ( FIELD_U32(dword_60CD0B40, 32) > 0x14u )
    v2 += 20;
  return sub_6095537C(*v2, 0, a1 + 49);
}
