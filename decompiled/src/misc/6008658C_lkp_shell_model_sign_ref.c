/* lkp_shell_model_sign_ref
 * address: 0x6008658C   size: 116   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall lkp_shell_model_sign_ref(int a1)
{
  int v1; // r0
  _DWORD v3[4]; // [sp+0h] [bp-10h] BYREF

  FIELD_U32(a1, 100) = -1103101952;
  FIELD_U32(a1, 136) = -1065353216;
  FIELD_U8(a1, 7700) = 0;
  v1 = FIELD_U32(a1, 7612);
  v3[0] = &sead__SafeStringBase__vtable;
  v3[1] = "lkp_shell_model_sign";
  return sub_6040F4B8(v1, v3, 0);
}
