/* sub_60718420
 * address: 0x60718420   size: 48   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60718420(int result, unsigned int a2, char a3, float a4, float a5)
{
  int v5; // r1

  if ( a2 <= 0x63 )
  {
    v5 = result + 8 * a2;
    FIELD_F32(v5, 15368) = a4;
    FIELD_F32(v5, 15372) = a5;
  }
  FIELD_U8(result, 16273) = a3;
  return result;
}
