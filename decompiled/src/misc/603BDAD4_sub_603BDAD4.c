/* sub_603BDAD4
 * address: 0x603BDAD4   size: 60   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_603BDAD4(int a1)
{
  FIELD_F32(a1, 120) = (float)byte_60AFE3F4[FIELD_U32(a1, 80)] * 0.5;
  return (*(int (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C982F0);
}
