/* sub_607A83B0
 * address: 0x607A83B0   size: 112   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607A83B0(int a1, float *a2, int a3, float a4)
{
  int v8; // r0

  FIELD_U32(a1, 76) |= 4u;
  v8 = sub_607C7184(a1);
  if ( v8 )
    return (*(int (__fastcall **)(int, float *, int, float))(*(_DWORD *)v8 + 660))(v8, a2, a3, a4);
  else
    return sub_6076CE90(a1, a2, a3, a4);
}
