/* SE_AMB_KP_EARTHQUAKE_ref_2
 * address: 0x60062874   size: 96   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int SE_AMB_KP_EARTHQUAKE_ref_2()
{
  _DWORD v1[2]; // [sp+4h] [bp-14h] BYREF
  char v2; // [sp+Ch] [bp-Ch]

  v1[0] = 15;
  v1[1] = unk_60C26458;
  v2 = 0;
  return (*(int (__fastcall **)(int, const char *, _DWORD *))(*(_DWORD *)dword_60C7F538 + 44))(
           dword_60C7F538,
           "SE_AMB_KP_EARTHQUAKE",
           v1);
}
