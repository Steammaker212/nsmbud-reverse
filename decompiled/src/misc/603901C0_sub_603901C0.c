/* sub_603901C0
 * address: 0x603901C0   size: 84   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_603901C0(_BYTE *a1, int a2, int a3)
{
  if ( !a1[6220] )
  {
    a1[6288] = *(float *)(FIELD_U32(a3, 64) + 120) < 0.0;
    (*(void (__fastcall **)(_BYTE *, StateVirtual *))(*(_DWORD *)a1 + 192))(a1, &Enemy_StateId_Frozen);
  }
  return 1;
}
