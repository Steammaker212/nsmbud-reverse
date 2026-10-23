/* sub_608F1B80
 * address: 0x608F1B80   size: 32   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608F1B80(int a1, char a2)
{
  int result; // r0

  FIELD_U8(a1, 40) = a2;
  result = FIELD_U32(a1, 12);
  if ( result )
    return dword_60CC73A4();
  return result;
}
