/* sub_6086D74C
 * address: 0x6086D74C   size: 8   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6086D74C(int a1)
{
  int v1; // r0
  int v2; // r3
  bool v3; // zf
  int (**v4)(); // r3
  int (**v5)(); // r3

  v1 = FIELD_U32(a1, 28);
  v2 = FIELD_U32(v1, 44);
  v3 = v2 == 0;
  if ( v2 )
    v3 = FIELD_U16(v1, 42) == 0xFFFF;
  if ( v3 )
    v4 = &off_60C5A91C;
  else
    v4 = &off_60C5A93C;
  v5 = &v4[2 * (HIBYTE(FIELD_U16(v1, 4)) & 3)];
  return ((int (__fastcall *)(int))*v5)(v1 + ((int)v5[1] >> 1));
}
