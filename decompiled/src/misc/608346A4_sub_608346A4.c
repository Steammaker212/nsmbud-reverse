/* sub_608346A4
 * address: 0x608346A4   size: 56   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608346A4(unsigned int a1)
{
  bool v1; // zf
  int result; // r0
  int v3; // r1

  v1 = HIBYTE(a1) == 0;
  result = a1 & 0xFFFFFF;
  if ( v1 && dword_60C9C0FC )
  {
    v3 = FIELD_U32(dword_60C9C0FC, 724);
    if ( v3 )
      result += FIELD_U32(v3, 56);
  }
  return result;
}
