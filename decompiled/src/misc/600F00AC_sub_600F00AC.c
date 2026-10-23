/* sub_600F00AC
 * address: 0x600F00AC   size: 28   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_600F00AC(int a1)
{
  int *v1; // r1

  v1 = (int *)&unk_60C856E0;
  if ( FIELD_U32(a1, 80) )
    v1 = &dword_60C856E4;
  return *v1;
}
